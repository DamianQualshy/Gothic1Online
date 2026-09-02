#include "../stdafx.h"

void ChatRPC::HandleChatRPC(CNetwork* network, HSteamNetConnection connection, PacketReader& stream)
{

	EChatRPC eChatRPC{};
	if (!stream.Read(eChatRPC))
		return;
	if(eChatRPC == CHAT_MESSAGE)
	{
	 PlayerMessage(network, connection, stream);
	}
};

void ChatRPC::PlayerMessage(CNetwork* network, HSteamNetConnection connection, PacketReader& stream)
{
#ifdef DEBUG_MODE
	SPDLOG_INFO("ChatRPC::PlayerMessage");
#endif
	std::string playerMessage;

	if (!stream.Read(playerMessage, 255) || !stream.Empty())
		return;
#ifdef DEBUG_MODE
	SPDLOG_INFO("ChatRPC::PlayerMessage({})", playerMessage.c_str());
#endif

	if(playerMessage.size() <= 255)
	{
		CPlayer* player = playerManager.GetPlayer(connection);
		if( player )
		{
			if( playerMessage.size() >= 2 )
			{
				if (playerMessage.starts_with('.'))
				{
					playerMessage.erase(0, 1);
					CAdmin adm;
					adm.HandleAdminCommand(player,playerMessage);
				}
				else if (playerMessage.starts_with('/'))
				{
					std::string text = playerMessage.c_str();
					int pos = text.find(' ');
				
					SEvent::PlayerCommand(player->GetID(),text.substr(1, pos - 1).c_str(), pos == std::string::npos ? "" : text.substr(pos + 1).c_str());
				}
				else
				{
					if (SEvent::PlayerMessage(player->GetID(), playerMessage.c_str()) == 0)
					{
						PacketWriter chatStream;
						chatStream.Write((std::uint8_t)GO_CHAT);
						chatStream.Write((std::uint8_t)CHAT_MESSAGE);
						chatStream.Write(player->name + ": " + playerMessage);
	
						network->SendToAll(chatStream, k_nSteamNetworkingSend_Reliable);
						SPDLOG_INFO("[chat] {}: {}", player->name.c_str(), playerMessage.c_str());
					}
				}
			}
			else
			{
				if( SEvent::PlayerMessage(player->GetID(), playerMessage.c_str()) == 0 )
				{
					PacketWriter chatStream;
					chatStream.Write((std::uint8_t)GO_CHAT);
					chatStream.Write((std::uint8_t)CHAT_MESSAGE);
					chatStream.Write(player->name + ": " + playerMessage);
	
					network->SendToAll(chatStream, k_nSteamNetworkingSend_Reliable);
					SPDLOG_INFO("[chat] {}: {}", player->name.c_str(), playerMessage.c_str());
				}
			}
		}
	}
	playerMessage.clear();
};
