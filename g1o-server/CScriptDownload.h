#ifndef CSCRIPTDOWNLOAD_H
#define CSCRIPTDOWNLOAD_H

#include <filesystem>
#include <fstream>
#include <map>
#include <cstdint>
#include <string>
#include <vector>

class CScriptDownload
{
private:
	struct FileInfo
	{
		std::string relativePath;
		std::filesystem::path absolutePath;
		std::uint64_t size;
		std::uint64_t hash;
	};

	struct Transfer
	{
		std::vector<const FileInfo*> files;
		std::size_t fileIndex = 0;
		std::ifstream input;
		std::uint64_t offset = 0;
		std::uint64_t totalSize = 0;
	};

	std::vector<FileInfo> files;
	std::map<HSteamNetConnection, Transfer> transfers;

	void SendManifest(CNetwork* network, HSteamNetConnection connection) const;
	void BeginTransfer(CNetwork* network, HSteamNetConnection connection, PacketReader& packet);
	void SendError(CNetwork* network, HSteamNetConnection connection, const std::string& error) const;

public:
	CScriptDownload();
	~CScriptDownload();

	void StartUp();
	void HandleRequest(CNetwork* network, HSteamNetConnection connection, PacketReader& packet);
	void Pulse(CNetwork* network);
};

#endif
