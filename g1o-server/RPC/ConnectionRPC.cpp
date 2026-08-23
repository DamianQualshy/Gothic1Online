#include "../stdafx.h"

void ConnectionRPC::HandleConnectionRPC(CNetwork* network, Packet* packet)
{
	BitStream stream(packet->data, packet->length, false);
	stream.IgnoreBytes(1);

	MessageID eConnectionRPC;
	stream.Read(eConnectionRPC);

	if(eConnectionRPC == PLEASE_CONNECT)
		PleaseConnect(network,stream,packet->systemAddress);
};

void ConnectionRPC::CatchConnection(CNetwork* network, Packet* packet)
{
	SPDLOG_INFO("[connection] {} is trying to connect, index : {}", packet->systemAddress.ToString(true, '_'), packet->systemAddress.systemIndex);
};

void ConnectionRPC::LostConnection(CNetwork* network, Packet* packet)
{
	CPlayer* player = playerManager.GetPlayer(packet->systemAddress);
	if( player )
	{
		SEvent::PlayerDisconnect(player->GetID(), "LOST_CONNECTION");
		player->spawned = false;
		SPDLOG_INFO("[connection] {} lost connection with the server {}", player->name.C_String(),player->GetAddress().ToString());
		player->Disconnect();
		playerManager.DestroyPlayer(player);
	}
	else
		network->GetPeer()->CloseConnection(packet->systemAddress,true);
};

void ConnectionRPC::Disconnection(CNetwork* network, Packet* packet)
{
	CPlayer* player = playerManager.GetPlayer(packet->systemAddress);
	if( player )
	{
		SEvent::PlayerDisconnect(player->GetID(), "DISCONNECTED");
		player->spawned = false;
		SPDLOG_INFO("[connection] {} disconnected from server {}", player->name.C_String(),player->GetAddress().ToString());

		player->Disconnect();
		playerManager.DestroyPlayer(player);
	}
	else
		network->GetPeer()->CloseConnection(packet->systemAddress,true);

};

void ConnectionRPC::PleaseConnect(CNetwork* network, BitStream& stream, SystemAddress clientAddress)
{
	SPDLOG_INFO("[connection] Incoming connection: {}", clientAddress.ToString());

	int versionNum;
	RakString playerName;
	RakString ignoredDllHash;
	stream.Read(versionNum);
	stream.Read(ignoredDllHash);
	stream.Read(playerName);

	if (versionNum == versionNumber)
	{
		ignoredDllHash.FreeMemory();
		//Sprawdzenie czy serwer nie jest pełny
		if(playerManager.GetNumberOfPlayers() != atoi(core.GetConfig()->GetMaxSlots().C_String()))
		{
			//Sprawdzenie czy nick nie jest zajęty										//Nick zablokowany, zeby nikt nie podszywal sie
			if(playerManager.IsNicknameUsed(playerName) == false && playerName.StrCmp("(SERVER)") != 0) //pod konsole
			{
				CPlayer* player = playerManager.CreatePlayer(clientAddress,playerName);
				if( player )
				{
					stream.Read(player->world);
					stream.Read(player->x);
					stream.Read(player->y);
					stream.Read(player->z);

					//Akceptowanie połączenia
					BitStream bStream;
					bStream.Write((MessageID)GO_CONNECTION);
					bStream.Write((MessageID)ACCEPT_CONNECTION);
					bStream.Write(core.GetConfig()->GetServerName());
					bStream.Write(player->GetID());
					// Hour/minute
					bStream.Write(core.GetHour());
					bStream.Write(core.GetMinute());
					bStream.Write(core.GetDay());
					// Unconscious
					bStream.Write(core.GetUnconscious());
					network->GetPeer()->Send(&bStream,LOW_PRIORITY,RELIABLE,0,clientAddress,false);

					bStream.Reset();

					//Tworzenie gracza dla wszystkich i wszystkich dla gracza
					/*CMultiplayer* m = core.GetMultiplayer();
					m->CreateAllPlayersForPlayer(player);
					m->CreatePlayerForAllPlayers(player);*/

					playerManager.CreatePlayerForOtherPlayer(player, player);
					playerManager.BroadcastPlayerList();
		
					player->spawned = true;
					SEvent::PlayerConnect(player->GetID());

				SPDLOG_INFO("[join] {} has joined the server {}", playerName.C_String(),player->GetAddress().ToString());
				}
			}
			else
				NicknameUsed(network,clientAddress);
		}
		else
			ServerFull(network,clientAddress);

	}	
	else 
		IncorrectVersion(network,clientAddress);

};

//Send
void ConnectionRPC::IncorrectVersion(CNetwork* network, SystemAddress clientAddress)
{
	BitStream stream;
	stream.Write((MessageID)GO_CONNECTION);
	stream.Write((MessageID)INCORRECT_VERSION);
	network->GetPeer()->Send(&stream,LOW_PRIORITY,RELIABLE,0,clientAddress,false);
	network->GetPeer()->CloseConnection(clientAddress,true);

};

void ConnectionRPC::ServerFull(CNetwork* network, SystemAddress clientAddress)
{
	BitStream stream;
	stream.Write((MessageID)GO_CONNECTION);
	stream.Write((MessageID)SERVER_FULL);
	network->GetPeer()->Send(&stream,LOW_PRIORITY,RELIABLE,0,clientAddress,false);
	network->GetPeer()->CloseConnection(clientAddress,true);	
};

void ConnectionRPC::NicknameUsed(CNetwork* network, SystemAddress clientAddress)
{
	BitStream stream;
	stream.Write((MessageID)GO_CONNECTION);
	stream.Write((MessageID)NICKNAME_USED);
	network->GetPeer()->Send(&stream,LOW_PRIORITY,RELIABLE,0,clientAddress,false);
	network->GetPeer()->CloseConnection(clientAddress,true);
};

void ConnectionRPC::ClosedConnectionWithReason(CNetwork* network, SystemAddress clientAddress, RakString reason)
{
	BitStream stream;
	stream.Write((MessageID)GO_CONNECTION);
	stream.Write((MessageID)CLOSED_CONNECTION_REASON);
	stream.Write(reason);

	network->GetPeer()->Send(&stream,LOW_PRIORITY,RELIABLE,0,clientAddress,false);
	network->GetPeer()->CloseConnection(clientAddress,true);
};
