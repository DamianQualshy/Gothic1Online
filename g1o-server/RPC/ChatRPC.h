#ifndef CHATRPC_H
#define CHATRPC_H

namespace ChatRPC
{
	void HandleChatRPC(CNetwork* network, HSteamNetConnection connection, PacketReader& stream);
	void PlayerMessage(CNetwork* network, HSteamNetConnection connection, PacketReader& stream);
};

#endif //CHATRPC_H
