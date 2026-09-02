#include "stdafx.h"

CMultiplayer::CMultiplayer()
{
	SPDLOG_TRACE("CMultiplayer::CMultiplayer()");
	//Zainicjowanie managera
	playerManager;
};

CMultiplayer::~CMultiplayer()
{
	SPDLOG_TRACE("CMultiplayer::~CMultiplayer()");
};

bool CMultiplayer::InitMultiplayer(std::string hostname, int myid)
{
	if( this->IsInitiated() == false )
	{
		this->hostName = hostname;
		this->myID = myid;
		this->bInitiated = true;

		return true;
	}

	return false;
};

void CMultiplayer::RepairDoor()
{
	bool next = true;
	while (next && !triggerQueue.empty())
	{
		if (g1o::network::NowMilliseconds() > triggerQueue.front().time)
		{
			oCMobInter *mob = triggerQueue.front().mob;
			mob->StopInteraction(triggerQueue.front().npc);
			triggerQueue.pop();
			next = true;
		}
		else
			next = false;
	}
}