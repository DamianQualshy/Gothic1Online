#ifndef CONNECTIONRPC_H
#define CONNECTIONRPC_H

namespace ConnectionRPC
{
	void HandleConnectionRPC(CNetwork* network, HSteamNetConnection connection, PacketReader& packet);
	void CatchConnection(CNetwork* network, HSteamNetConnection connection, const std::string& remoteAddress);
	void Disconnected(CNetwork* network, HSteamNetConnection connection, bool transportFailure, const char* debug);
	void PleaseConnect(CNetwork* network, HSteamNetConnection connection, PacketReader& packet);

	void IncorrectVersion(CNetwork* network, HSteamNetConnection connection);
	void ServerFull(CNetwork* network, HSteamNetConnection connection);
	void NicknameUsed(CNetwork* network, HSteamNetConnection connection);
	void ClosedConnectionWithReason(CNetwork* network, HSteamNetConnection connection, const std::string& reason);
}

#endif
