#include "stdafx.h"

#define RAKNET_PASSWORD "TEMPORARY_PASSWORD"

CNetwork::CNetwork()
{
	SPDLOG_TRACE("CNetwork::CNetwork()");

	bIsInitiated = false;
	bConnected = false;
	peer = NULL;
	pReceiver = new CReceiver();
};

CNetwork::~CNetwork()
{
	SPDLOG_TRACE("CNetwork::~CNetwork()");
	/*if(peer)	//Blokuje wyłączenie gry powodując crasha
		RakPeerInterface::DestroyInstance(peer);*/
	delete pReceiver;
};

bool CNetwork::InitNetwork()
{
	SPDLOG_TRACE("CNetwork::InitNetwork()");
	
	this->peer = RakPeerInterface::GetInstance();
	if( this->peer )
	{
		SocketDescriptor socketDescriptor;
		if( this->peer->Startup(1,&socketDescriptor,1) == RAKNET_STARTED )
		{
			this->bIsInitiated = true;
			return true;
		}
	}
	return false;
};

void CNetwork::Connect(RakString address, unsigned short port)
{
	SPDLOG_TRACE("CNetwork::Connect({}, {})", address.C_String(), port);

	if(this->IsConnected() == false)
	{
		if(this->IsInitiated() == true)
			this->GetPeer()->Connect(address, port, RAKNET_PASSWORD, strlen(RAKNET_PASSWORD));
	}
};

void CNetwork::Disconnect()
{
	SPDLOG_TRACE("CNetwork::Disconnect()");
	if (playerManager.GetLocalPlayer()) playerManager.GetLocalPlayer()->ReleaseMob();
	this->GetPeer()->CloseConnection(this->GetServerAddress(), true);
	RakSleep(30);
	this->bConnected = false;
};