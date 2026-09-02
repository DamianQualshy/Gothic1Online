#include "PCH.h"

#include <Network/GOMessages.h>

#include <array>
#include <filesystem>
#include <fstream>
#include <unordered_set>

namespace
{
    constexpr std::size_t HashChunkSize = 32 * 1024;

    std::uint64_t HashFile(const std::filesystem::path& path)
    {
        std::ifstream input(path, std::ios::binary);
        std::array<char, HashChunkSize> buffer{};
        std::uint64_t hash = 14695981039346656037ull;
        while (input)
        {
            input.read(buffer.data(), buffer.size());
            const std::streamsize count = input.gcount();
            for (std::streamsize i = 0; i < count; ++i)
            {
                hash ^= static_cast<unsigned char>(buffer[static_cast<std::size_t>(i)]);
                hash *= 1099511628211ull;
            }
        }
        return hash;
    }

    bool ResolveResourcePath(const std::string& relativePath, std::filesystem::path& destination)
    {
        const std::filesystem::path root = std::filesystem::absolute(DOWNLOAD_FILE_PATH).lexically_normal();
        const std::filesystem::path relative = std::filesystem::u8path(relativePath).lexically_normal();
        if (relative.empty() || relative.is_absolute() || relative.has_root_name() || relative.has_root_directory())
            return false;

        std::filesystem::path current = root;
        std::error_code error;
        for (const auto& component : relative)
        {
            if (component == "." || component == "..")
                return false;
            current /= component;
            if (std::filesystem::exists(current, error) && std::filesystem::is_symlink(current, error))
                return false;
            if (error)
                return false;
        }
        destination = current.lexically_normal();
        return true;
    }
}

void CRPCDownloader::connectionRequest(HSteamNetConnection connection)
{
    m_Connection = connection;
    m_Active = true;
    NETWORK.getFileTransferCallback()->restart(true);
    emit signalCheckingFiles();
}

void CRPCDownloader::connectionFailed()
{
    if (!m_Active && m_Connection == k_HSteamNetConnection_Invalid)
    {
        emit signalConnectionFailed();
        return;
    }
    m_Active = false;
    m_Connection = k_HSteamNetConnection_Invalid;
    NETWORK.getFileTransferCallback()->cancel();
    emit signalConnectionFailed();
}

void CRPCDownloader::cancelDownload(bool unfinished)
{
    Q_UNUSED(unfinished)
    m_Active = false;
    m_Connection = k_HSteamNetConnection_Invalid;
    NETWORK.getFileTransferCallback()->restart(true);
}

bool CRPCDownloader::handle(HSteamNetConnection connection, PacketReader& packet)
{
    if (!m_Active || connection != m_Connection)
        return false;

    EFileTransferRPC rpc{};
    if (!packet.Read(rpc))
        return false;

    CFileTransferCallback* callback = NETWORK.getFileTransferCallback();
    switch (rpc)
    {
    case FILE_MANIFEST:
        return receiveManifest(connection, packet);
    case FILE_BEGIN:
    {
        std::string path;
        std::uint64_t size = 0;
        std::uint32_t index = 0;
        std::uint32_t count = 0;
        std::uint64_t totalSize = 0;
        return packet.Read(path, 1024) && packet.Read(size) && packet.Read(index) && packet.Read(count) &&
               packet.Read(totalSize) && packet.Empty() && callback->beginFile(path, size, index, count, totalSize);
    }
    case FILE_CHUNK:
    {
        std::uint64_t offset = 0;
        std::uint32_t size = 0;
        if (!packet.Read(offset) || !packet.Read(size) || size > 1024 * 1024 || packet.Remaining() != size)
            return false;
        return callback->writeChunk(offset, packet.CurrentData(), size);
    }
    case FILE_END:
    {
        std::uint64_t hash = 0;
        return packet.Read(hash) && packet.Empty() && callback->endFile(hash);
    }
    case FILE_COMPLETE:
        if (!packet.Empty() || !callback->complete())
            return false;
        m_Active = false;
        return true;
    case FILE_ERROR:
    {
        std::string error;
        if (packet.Read(error, 4096) && packet.Empty())
            SPDLOG_ERROR("[resources] Server rejected resource synchronization: {}", error);
        return false;
    }
    default:
        return false;
    }
}

bool CRPCDownloader::receiveManifest(HSteamNetConnection connection, PacketReader& packet)
{
    std::uint32_t count = 0;
    if (!packet.Read(count) || count > 100000)
        return false;

    std::vector<std::string> required;
    required.reserve(count);
    std::unordered_set<std::string> paths;
    for (std::uint32_t i = 0; i < count; ++i)
    {
        std::string path;
        std::uint64_t size = 0;
        std::uint64_t hash = 0;
        std::filesystem::path destination;
        if (!packet.Read(path, 1024) || !packet.Read(size) || !packet.Read(hash) ||
            !paths.emplace(path).second || !ResolveResourcePath(path, destination))
            return false;

        std::error_code error;
        const bool current = std::filesystem::is_regular_file(destination, error) && !error &&
                             std::filesystem::file_size(destination, error) == size && !error &&
                             HashFile(destination) == hash;
        if (!current)
            required.push_back(path);
    }
    if (!packet.Empty())
        return false;

    PacketWriter request;
    request.Write(GO_FILE_TRANSFER);
    request.Write(FILE_REQUEST);
    request.Write(static_cast<std::uint32_t>(required.size()));
    for (const std::string& path : required)
        request.Write(path);
    return NETWORK.send(connection, request);
}
