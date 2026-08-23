#include "stdafx.h"

CMultiplayer::CMultiplayer()
{
	//SPDLOG_TRACE("CMultiplayer::CMultiplayer()");
	//tworzenie playermanager i worldmanager
	playerManager; //Zainicjowanie managera
};

CMultiplayer::~CMultiplayer()
{
	//SPDLOG_TRACE("CMultiplayer::~CMultiplayer()");
	//usuwanie playermanager i worldmanager
};

void CMultiplayer::CreateAllPlayersForPlayer(CPlayer* player)
{
};

void CMultiplayer::CreatePlayerForAllPlayers(CPlayer *player)
{
	for(playerListIter i = playerManager.playerList.begin(); i != playerManager.playerList.end(); ++i)
		if( i->second->GetID() != player->GetID() )
			playerManager.CreatePlayerForOtherPlayer(player, i->second);
};