#include "stdafx.h"

#include <array>
#include <algorithm>
#include <limits>
#include <unordered_set>

namespace
{
	constexpr std::size_t ChunkSize = 32 * 1024;
	constexpr int ChunksPerPulse = 4;
	constexpr int MaxPendingReliableBytes = 256 * 1024;

	std::uint64_t HashFile(const std::filesystem::path& path)
	{
		std::ifstream input(path, std::ios::binary);
		std::array<char, ChunkSize> buffer{};
		std::uint64_t hash = 14695981039346656037ull;
		while (input)
		{
			input.read(buffer.data(), buffer.size());
			const auto count = input.gcount();
			for (std::streamsize i = 0; i < count; ++i)
			{
				hash ^= static_cast<unsigned char>(buffer[static_cast<std::size_t>(i)]);
				hash *= 1099511628211ull;
			}
		}
		return hash;
	}
}

CScriptDownload::CScriptDownload() = default;
CScriptDownload::~CScriptDownload() = default;

void CScriptDownload::StartUp()
{
	files.clear();
	std::error_code error;
	const std::filesystem::path root = std::filesystem::weakly_canonical("resources/download", error);
	if (error || !std::filesystem::exists(root, error))
	{
		SPDLOG_INFO("[resources] No readable download directory at resources/download");
		return;
	}

	for (const auto& entry : std::filesystem::recursive_directory_iterator(root, error))
	{
		if (error || !entry.is_regular_file(error) || entry.is_symlink(error))
			continue;
		FileInfo info;
		info.absolutePath = entry.path();
		info.relativePath = std::filesystem::relative(entry.path(), root, error).generic_string();
		info.size = entry.file_size(error);
		if (error || info.relativePath.empty())
			continue;
		info.hash = HashFile(info.absolutePath);
		files.push_back(std::move(info));
	}
	std::sort(files.begin(), files.end(), [](const FileInfo& left, const FileInfo& right)
	{
		return left.relativePath < right.relativePath;
	});
	SPDLOG_INFO("[resources] Prepared {} files for GNS synchronization", files.size());
}

void CScriptDownload::HandleRequest(CNetwork* network, HSteamNetConnection connection, PacketReader& packet)
{
	EFileTransferRPC rpc{};
	if (!packet.Read(rpc))
		return;
	switch (rpc)
	{
	case FILE_MANIFEST_REQUEST:
		if (packet.Empty())
			SendManifest(network, connection);
		break;
	case FILE_REQUEST:
		BeginTransfer(network, connection, packet);
		break;
	default:
		break;
	}
}

void CScriptDownload::SendManifest(CNetwork* network, HSteamNetConnection connection) const
{
	PacketWriter response;
	response.Write(GO_FILE_TRANSFER);
	response.Write(FILE_MANIFEST);
	response.Write(static_cast<std::uint32_t>(files.size()));
	for (const auto& file : files)
	{
		response.Write(file.relativePath);
		response.Write(file.size);
		response.Write(file.hash);
	}
	if (!network->Send(connection, response))
		SPDLOG_WARN("[resources] Failed to send manifest to connection {}", connection);
}

void CScriptDownload::BeginTransfer(CNetwork* network, HSteamNetConnection connection, PacketReader& packet)
{
	std::uint32_t count = 0;
	if (!packet.Read(count) || count > files.size())
	{
		SendError(network, connection, "Invalid resource request");
		return;
	}

	Transfer transfer;
	transfer.files.reserve(count);
	std::unordered_set<std::string> requestedPaths;
	for (std::uint32_t i = 0; i < count; ++i)
	{
		std::string path;
		if (!packet.Read(path, 1024))
		{
			SendError(network, connection, "Malformed resource path");
			return;
		}
		const auto iterator = std::find_if(files.begin(), files.end(), [&path](const FileInfo& file)
		{
			return file.relativePath == path;
		});
		if (iterator == files.end() || !requestedPaths.emplace(path).second ||
			iterator->size > std::numeric_limits<std::uint64_t>::max() - transfer.totalSize)
		{
			SendError(network, connection, "Invalid resource requested");
			return;
		}
		transfer.files.push_back(&*iterator);
		transfer.totalSize += iterator->size;
	}
	if (!packet.Empty())
	{
		SendError(network, connection, "Trailing resource request data");
		return;
	}
	transfers[connection] = std::move(transfer);
}

void CScriptDownload::Pulse(CNetwork* network)
{
	std::array<char, ChunkSize> buffer{};
	for (auto iterator = transfers.begin(); iterator != transfers.end();)
	{
		HSteamNetConnection connection = iterator->first;
		Transfer& transfer = iterator->second;
		SteamNetConnectionRealTimeStatus_t status{};
		if (network->GetSockets()->GetConnectionRealTimeStatus(connection, &status, 0, nullptr) != k_EResultOK)
		{
			iterator = transfers.erase(iterator);
			continue;
		}
		if (status.m_cbPendingReliable >= MaxPendingReliableBytes)
		{
			++iterator;
			continue;
		}
		bool failed = false;
		for (int sent = 0; sent < ChunksPerPulse && transfer.fileIndex < transfer.files.size(); ++sent)
		{
			const FileInfo& file = *transfer.files[transfer.fileIndex];
			if (!transfer.input.is_open())
			{
				transfer.input.open(file.absolutePath, std::ios::binary);
				transfer.offset = 0;
				PacketWriter begin;
				begin.Write(GO_FILE_TRANSFER);
				begin.Write(FILE_BEGIN);
				begin.Write(file.relativePath);
				begin.Write(file.size);
				begin.Write(static_cast<std::uint32_t>(transfer.fileIndex));
				begin.Write(static_cast<std::uint32_t>(transfer.files.size()));
				begin.Write(transfer.totalSize);
				if (!transfer.input || !network->Send(connection, begin))
				{
					failed = true;
					break;
				}
			}

			transfer.input.read(buffer.data(), buffer.size());
			const auto size = static_cast<std::uint32_t>(transfer.input.gcount());
			if (size > 0)
			{
				PacketWriter chunk;
				chunk.Write(GO_FILE_TRANSFER);
				chunk.Write(FILE_CHUNK);
				chunk.Write(transfer.offset);
				chunk.Write(size);
				chunk.WriteBytes(buffer.data(), size);
				if (!network->Send(connection, chunk))
				{
					failed = true;
					break;
				}
				transfer.offset += size;
			}
			else if (transfer.offset != file.size)
			{
				SendError(network, connection, "Resource file could not be read");
				failed = true;
				break;
			}
			if (transfer.offset == file.size)
			{
				PacketWriter end;
				end.Write(GO_FILE_TRANSFER);
				end.Write(FILE_END);
				end.Write(file.hash);
				if (!network->Send(connection, end))
				{
					failed = true;
					break;
				}
				transfer.input.close();
				++transfer.fileIndex;
			}
		}

		if (failed)
		{
			iterator = transfers.erase(iterator);
			continue;
		}
		if (transfer.fileIndex == transfer.files.size())
		{
			PacketWriter complete;
			complete.Write(GO_FILE_TRANSFER);
			complete.Write(FILE_COMPLETE);
			network->Send(connection, complete);
			iterator = transfers.erase(iterator);
			continue;
		}
		++iterator;
	}
}

void CScriptDownload::SendError(CNetwork* network, HSteamNetConnection connection, const std::string& error) const
{
	PacketWriter response;
	response.Write(GO_FILE_TRANSFER);
	response.Write(FILE_ERROR);
	response.Write(error);
	network->Send(connection, response);
}
