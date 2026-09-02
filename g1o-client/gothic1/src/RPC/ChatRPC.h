#ifndef CHATRPC_H
#define CHATRPC_H

namespace ChatRPC
{
	void HandleChatRPC(CNetwork* network, PacketReader& stream);
	void ServerMessage(CNetwork* network, PacketReader& stream);
	void MessageRGB(CNetwork* network, PacketReader& stream);
};

#endif //CHATRPC_H