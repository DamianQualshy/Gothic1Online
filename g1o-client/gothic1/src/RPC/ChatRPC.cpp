#include "..\\stdafx.h"

void ChatRPC::HandleChatRPC(CNetwork* network, PacketReader& stream)
{
	SPDLOG_TRACE("ChatRPC::HandleChatRPC()");

	EChatRPC eChatRPC{};
	if (!stream.Read(eChatRPC))
		return;

	switch(eChatRPC)
	{
	case CHAT_MESSAGE: ServerMessage(network,stream); break;
	case MESSAGE_RGB: MessageRGB(network,stream); break;
	}
};

void ChatRPC::ServerMessage(CNetwork* network, PacketReader& stream)
{
	SPDLOG_TRACE("ChatRPC::ServerMessage()");
	std::string message;
	if (!stream.Read(message, 4096) || !stream.Empty())
		return;

	core.GetChat()->AddLine(message, zCOLOR(255,255,255,255)); //Biały xd
};

void ChatRPC::MessageRGB(CNetwork* network, PacketReader& stream)
{
	SPDLOG_TRACE("ChatRPC::MessageRGB()");
	std::string message;
	int r = 0, g = 0, b = 0;
	if (!stream.Read(message, 4096) || !stream.Read(r) || !stream.Read(g) || !stream.Read(b) ||
		!stream.Empty() || r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255)
		return;

	core.GetChat()->AddLine(message, zCOLOR(r,g,b,255));
};
