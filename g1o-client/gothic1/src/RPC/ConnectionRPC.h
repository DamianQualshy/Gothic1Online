#ifndef CONNECTIONRPC_H
#define CONNECTIONRPC_H

namespace ConnectionRPC
{
	void HandleConnectionRPC(CNetwork* network, PacketReader& packet);
	void CatchConnection(CNetwork* network);
	void ConnectionClosed(CNetwork* network, bool transportFailure, int reason, const char* debug);
	void AcceptConnection(CNetwork* network, PacketReader& packet);
	void IncorrectVersion(CNetwork* network);
	void ServerFull(CNetwork* network);
	void NicknameUsed(CNetwork* network);
	void DisconnectedWithReason(CNetwork* network, PacketReader& packet);
	void ConnectionFailed(CNetwork* network);
}

#endif
