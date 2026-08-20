#include "stdafx.h"
#define RAKNET_PASSWORD "TEMPORARY_PASSWORD"

#ifndef G1O_MASTER_SERVER_ADDRESS
#define G1O_MASTER_SERVER_ADDRESS "185.5.97.181"
#endif

#ifndef G1O_MASTER_SERVER_PORT
#define G1O_MASTER_SERVER_PORT 1200
#endif

CMaster::CMaster()
{
	peer = RakPeerInterface::GetInstance();
	timeRefreshMaster = 0;
	isConnected = false;
	SocketDescriptor sd;
	if( peer->Startup(1, &sd, 1) == RAKNET_STARTED )
		LOG("[info] CMaster peer started");
};

CMaster::~CMaster()
{
	peer->Shutdown(300);
};

void CMaster::Pulse()
{
	static bool wasAdded = false;
	const unsigned int currentTime = GetTimeMS();

	if (!isConnected && timeRefreshMaster < currentTime)
	{
		if (!wasAdded) LOG("[master] Adding server to master list");

		ConnectionAttemptResult result = peer->Connect(
			G1O_MASTER_SERVER_ADDRESS,
			(unsigned short)G1O_MASTER_SERVER_PORT,
			RAKNET_PASSWORD,
			strlen(RAKNET_PASSWORD));

		isConnected = result == CONNECTION_ATTEMPT_STARTED ||
			result == ALREADY_CONNECTED_TO_ENDPOINT ||
			result == CONNECTION_ATTEMPT_ALREADY_IN_PROGRESS;

		if (!isConnected)
			LOG("[master] Cannot start connection to %s:%d (error %d)",
				G1O_MASTER_SERVER_ADDRESS, G1O_MASTER_SERVER_PORT, (int)result);

		timeRefreshMaster = currentTime + 60000;
	}

	// RakNet connections are asynchronous. Packets must be consumed on every
	// pulse, not only in the same pulse that called Connect().
	for (Packet *packet = peer->Receive(); packet; peer->DeallocatePacket(packet), packet = peer->Receive())
	{
		switch (packet->data[0])
		{
			case ID_CONNECTION_REQUEST_ACCEPTED:
			{
				CConfig* cfg = core.GetConfig();
				unsigned int port = (unsigned int)atoi(cfg->GetServerPort().C_String());
				unsigned int maxSlots = (unsigned int)atoi(cfg->GetMaxSlots().C_String());

				BitStream stream;
				stream.Write((MessageID)GO_MASTER);
				stream.Write(port);
				stream.Write(cfg->GetServerName());
				stream.Write(playerManager.GetNumberOfPlayers());
				stream.Write(maxSlots);
				stream.Write(core.GetDescription());
				stream.Write(cfg->GetClientScript());
				stream.Write(RakString(versionString));
				stream.Write(core.GetWorld());

				if (peer->Send(&stream, HIGH_PRIORITY, RELIABLE, 0, packet->systemAddress, false) && !wasAdded)
				{
					wasAdded = true;
					LOG("[master] Server registration sent successfully");
				}

				peer->CloseConnection(packet->systemAddress, true);
				isConnected = false;
				break;
			}

			case ID_CONNECTION_ATTEMPT_FAILED:
			case ID_CONNECTION_LOST:
			case ID_DISCONNECTION_NOTIFICATION:
			case ID_ALREADY_CONNECTED:
				isConnected = false;
				break;
		}
	}
};
