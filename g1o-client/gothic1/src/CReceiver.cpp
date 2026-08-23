#include "stdafx.h"

CReceiver::CReceiver()
{
	SPDLOG_TRACE("CReceiver::CReceiver()");
};

CReceiver::~CReceiver()
{
	SPDLOG_TRACE("CReceiver::~CReceiver()");
};

void CReceiver::ReceivePackets(CNetwork *network)
{
	for(Packet* packet = network->GetPeer()->Receive(); packet; network->GetPeer()->DeallocatePacket(packet), packet = network->GetPeer()->Receive() ) //Pakiety na klatkę
	{
		//SPDLOG_TRACE("Packet caught!");
		//Dodanie liczby odebranych pakietów
		CNetInterface::GetInstance().PushOnePacketCnt();
		switch(packet->data[0])
		{
		case GO_CONNECTION:
			ConnectionRPC::HandleConnectionRPC(network,packet); break;
		case GO_CHAT:
			ChatRPC::HandleChatRPC(network,packet); break;
		case GO_PLAYER:
			PlayerRPC::HandlePlayerRPC(network,packet); break;
		case GO_ITEM:
			ItemRPC::HandleItemRPC(network,packet); break;
		case GO_SCRIPT:
			ScriptRPC::HandleScriptRPC(network,packet); break;

			//Raknetowskie od polaczenia
		case ID_CONNECTION_REQUEST_ACCEPTED:
			ConnectionRPC::CatchConnection(network,packet); break;
		case ID_CONNECTION_LOST:
			ConnectionRPC::LostConnection(network,packet); break;
		case ID_DISCONNECTION_NOTIFICATION:
			ConnectionRPC::Disconnection(network,packet); break;
		case ID_CONNECTION_ATTEMPT_FAILED:
			ConnectionRPC::ConnectionFailed(network); break;
		case ID_CONNECTION_BANNED:
			ConnectionRPC::Banned(network); break;
		}
	}
};
