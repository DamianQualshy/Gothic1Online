#include "stdafx.h"

CReceiver::CReceiver() = default;
CReceiver::~CReceiver() = default;

void CReceiver::ReceivePackets(CNetwork* network)
{
	const HSteamNetConnection connection = network->GetConnection();
	if (connection != k_HSteamNetConnection_Invalid)
	{
		while (true)
		{
			ISteamNetworkingMessage* message = nullptr;
			const int received = network->GetSockets()->ReceiveMessagesOnConnection(connection, &message, 1);
			if (received <= 0)
				break;

			CNetInterface::GetInstance().PushOnePacketCnt();
			PacketReader packet(message->m_pData, message->m_cbSize);
			EMultiplayerMessages kind{};
			if (packet.Read(kind))
			{
				switch (kind)
				{
				case GO_CONNECTION:
					ConnectionRPC::HandleConnectionRPC(network, packet);
					break;
				case GO_CHAT:
					ChatRPC::HandleChatRPC(network, packet);
					break;
				case GO_PLAYER:
					PlayerRPC::HandlePlayerRPC(network, packet);
					break;
				case GO_ITEM:
					ItemRPC::HandleItemRPC(network, packet);
					break;
				case GO_SCRIPT:
					ScriptRPC::HandleScriptRPC(network, packet);
					break;
				default:
					break;
				}
			}
			message->Release();
		}
	}
	network->PollCallbacks();
}
