#include "PCH.h"

#include <algorithm>
#include <array>
#include <limits>
#include <system_error>
#include <windows.h>

namespace
{
    constexpr std::size_t HashChunkSize = 32 * 1024;
}

CFileTransferCallback::CFileTransferCallback()
    : m_Root(std::filesystem::absolute(DOWNLOAD_FILE_PATH).lexically_normal())
{
}

CFileTransferCallback::~CFileTransferCallback()
{
    cancel();
}

void CFileTransferCallback::restart(bool show)
{
    cancel();
    m_CompletedReceived = 0;
    m_TotalSize = 0;
    m_FileIndex = 0;
    m_FileCount = 0;
    if (show)
        m_WasShown = false;
}

void CFileTransferCallback::cancel()
{
    if (m_Output.is_open())
        m_Output.close();
    if (!m_Temporary.empty())
    {
        std::error_code error;
        std::filesystem::remove(m_Temporary, error);
    }
    m_Destination.clear();
    m_Temporary.clear();
    m_RelativePath.clear();
    m_CurrentSize = 0;
    m_CurrentReceived = 0;
}

bool CFileTransferCallback::beginFile(const std::string& relativePath, std::uint64_t size,
                                      std::uint32_t fileIndex, std::uint32_t fileCount, std::uint64_t totalSize)
{
	const bool firstFile = m_FileCount == 0;
	const bool expectedIndex = firstFile ? fileIndex == 0 : fileIndex == m_FileIndex + 1;
	const bool consistentTransfer = firstFile || (fileCount == m_FileCount && totalSize == m_TotalSize);
	if (m_Output.is_open() || fileIndex >= fileCount || !expectedIndex || !consistentTransfer ||
		size > totalSize - std::min(totalSize, m_CompletedReceived) ||
        !resolvePath(relativePath, m_Destination))
        return false;

    std::error_code error;
    std::filesystem::create_directories(m_Destination.parent_path(), error);
    if (error)
        return false;

    m_Temporary = m_Destination;
    m_Temporary += L".g1o-part";
    std::filesystem::remove(m_Temporary, error);
    error.clear();
    m_Output.open(m_Temporary, std::ios::binary | std::ios::trunc);
    if (!m_Output)
        return false;

    m_RelativePath = relativePath;
    m_CurrentSize = size;
    m_CurrentReceived = 0;
    m_TotalSize = totalSize;
    m_FileIndex = fileIndex;
    m_FileCount = fileCount;
    if (!m_WasShown)
    {
        m_WasShown = true;
        emit onFileShow();
    }
    emit onFileNew(0, displaySize(size), displaySize(m_CompletedReceived), displaySize(totalSize),
                   fileIndex + 1, fileCount, QString::fromUtf8(relativePath.c_str()));
    return true;
}

bool CFileTransferCallback::writeChunk(std::uint64_t offset, const void* data, std::size_t size)
{
    if (!m_Output.is_open() || offset != m_CurrentReceived || size > m_CurrentSize - m_CurrentReceived ||
        (size != 0 && !data))
        return false;
    if (size != 0)
        m_Output.write(static_cast<const char*>(data), static_cast<std::streamsize>(size));
    if (!m_Output)
        return false;
    m_CurrentReceived += size;
    emit onFileProgress(displaySize(m_CurrentReceived), displaySize(m_CurrentSize),
                        displaySize(m_CompletedReceived + m_CurrentReceived), displaySize(m_TotalSize));
    return true;
}

bool CFileTransferCallback::endFile(std::uint64_t expectedHash)
{
    if (!m_Output.is_open() || m_CurrentReceived != m_CurrentSize)
        return false;
    m_Output.close();
    if (!m_Output || hashFile(m_Temporary) != expectedHash)
    {
        cancel();
        return false;
    }

    if (!MoveFileExW(m_Temporary.c_str(), m_Destination.c_str(),
                     MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
    {
        cancel();
        return false;
    }

    m_CompletedReceived += m_CurrentReceived;
    emit onFileSaved(m_FileIndex + 1, m_FileCount, QString::fromUtf8(m_RelativePath.c_str()));
    m_Destination.clear();
    m_Temporary.clear();
    m_RelativePath.clear();
    m_CurrentSize = 0;
    m_CurrentReceived = 0;
    return true;
}

bool CFileTransferCallback::complete()
{
	if (m_Output.is_open() || (m_FileCount != 0 &&
		(m_FileIndex + 1 != m_FileCount || m_CompletedReceived != m_TotalSize)))
        return false;
    m_WasShown = false;
    emit onFileDownloadComplete();
    return true;
}

unsigned CFileTransferCallback::displaySize(std::uint64_t value)
{
    return static_cast<unsigned>(std::min<std::uint64_t>(value, std::numeric_limits<unsigned>::max()));
}

std::uint64_t CFileTransferCallback::hashFile(const std::filesystem::path& path)
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

bool CFileTransferCallback::resolvePath(const std::string& relativePath, std::filesystem::path& destination) const
{
    const std::filesystem::path relative = std::filesystem::u8path(relativePath).lexically_normal();
    if (relative.empty() || relative.is_absolute() || relative.has_root_name() || relative.has_root_directory())
        return false;

    std::filesystem::path current = m_Root;
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
