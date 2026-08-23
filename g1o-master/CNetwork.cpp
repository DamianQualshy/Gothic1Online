#include "stdInc.h"
#define RAKNET_PASSWORD "TEMPORARY_PASSWORD"

#ifndef G1O_MASTER_SERVER_PORT
#define G1O_MASTER_SERVER_PORT 1200
#endif

CNetwork::CNetwork()
{
	peer = NULL;
};

CNetwork::~CNetwork()
{
	//RakPeerInterface::DestroyInstance(peer);
};

bool CNetwork::Init()
{
	SPDLOG_INFO("Loading network...");
	peer = RakPeerInterface::GetInstance();

	if( peer != NULL )
	{
		SPDLOG_INFO("Peer set up correctly");
		peer->GetLocalIP(0);
		unsigned int numOfAddr = peer->GetNumberOfAddresses();
		SocketDescriptor sd((unsigned short)G1O_MASTER_SERVER_PORT, NULL);
		if( peer->Startup(200, &sd, 1) == RAKNET_STARTED )
		{
			SPDLOG_INFO("RakNet interface started!");
			peer->SetIncomingPassword(RAKNET_PASSWORD, strlen(RAKNET_PASSWORD));
			peer->SetMaximumIncomingConnections((unsigned short)200);

			for(unsigned int i = 0; i < numOfAddr; ++i)
				SPDLOG_INFO("Listening for connections on {}:{}...", peer->GetLocalIP(i), G1O_MASTER_SERVER_PORT);

			return true;
		}
		else
		{
			SPDLOG_ERROR("Cannot start RakNet!");
		}
	}
	else
		SPDLOG_ERROR("Couldn't start new instance of RakPeer!");
	return false;
};
