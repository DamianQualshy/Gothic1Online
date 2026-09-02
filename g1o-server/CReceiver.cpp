#include "stdafx.h"

CReceiver::CReceiver() = default;
CReceiver::~CReceiver() = default;

void CReceiver::ReceivePackets(CNetwork* network)
{
	while (true)
	{
		ISteamNetworkingMessage* message = nullptr;
		const int received = network->GetSockets()->ReceiveMessagesOnPollGroup(network->GetPollGroup(), &message, 1);
		if (received <= 0)
			break;

		PacketReader packet(message->m_pData, message->m_cbSize);
		EMultiplayerMessages kind{};
		if (packet.Read(kind))
		{
			switch (kind)
			{
			case GO_CONNECTION:
				ConnectionRPC::HandleConnectionRPC(network, message->m_conn, packet);
				break;
			case GO_LAUNCHER:
				LauncherRPC::HandleLauncherRPC(network, message->m_conn, packet);
				break;
			case GO_CHAT:
				ChatRPC::HandleChatRPC(network, message->m_conn, packet);
				break;
			case GO_PLAYER:
				PlayerRPC::HandlePlayerRPC(network, message->m_conn, packet);
				break;
			case GO_ITEM:
				ItemRPC::HandleItemRPC(network, message->m_conn, packet);
				break;
			case GO_SCRIPT:
				ScriptRPC::HandleScriptRPC(network, message->m_conn, packet);
				break;
			case GO_FILE_TRANSFER:
				core.GetScriptDownload()->HandleRequest(network, message->m_conn, packet);
				break;
			default:
				break;
			}
		}
		message->Release();
	}
	network->PollCallbacks();
}
