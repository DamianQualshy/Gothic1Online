#include "stdafx.h"

CPlayerManager::CPlayerManager() : pLocalPlayer(nullptr)
{
	SPDLOG_TRACE("CPlayerManager::CPlayerManager()");

	CAnimation::GetInstance(); //Inicjacja CAnimation
};

CPlayerManager::~CPlayerManager()
{
	SPDLOG_TRACE("CPlayerManager::~CPlayerManager()");
};

CLocalPlayer* CPlayerManager::CreateLocalPlayer(int playerID, std::string playerName)
{
	SPDLOG_TRACE("CPlayerManager::CreateLocalPlayer({}, {})", playerID,playerName.c_str());

	if(playerName.size() <= 30)
	{
		CLocalPlayer* player = new CLocalPlayer(playerID, playerName);
		this->playerList.PushBack(player);
		this->pLocalPlayer = player;
		this->pLocalPlayer->world = core.GetLaunchSession().startWorld.c_str();

		return player;
	}
	return NULL;
};

CPlayer* CPlayerManager::CreatePlayer(int playerID, std::string playerName)
{
	SPDLOG_TRACE("CPlayerManager::CreatePlayer({}, {})", playerID,playerName.c_str());
	if(playerName.size() <= 30)
	{
		CPlayer* player = new CPlayer(playerID, playerName);
		this->playerList.PushBack(player);
		return player;
	}
	return NULL;
};

bool CPlayerManager::DestroyPlayer(CPlayer *player)
{
	SPDLOG_TRACE("CPlayerManager::DestroyPlayer()");
	
	if(player != NULL)
	{
		player->UnSpawn();

		this->playerList.Remove(player);
		delete player;
		return true;
	}

	return false;

};

CPlayer* CPlayerManager::GetPlayer(int playerID)
{
	for(unsigned int i = 0; i < this->GetNumberOfPlayers(); ++i)
	{
		if(this->playerList[i]->GetID() == playerID)
			return this->playerList[i];
	}

	return NULL;
};

bool CPlayerManager::IsPlayerSynchronised(oCNpc *npc)
{
	for(unsigned int i = 0; i < this->GetNumberOfPlayers(); ++i)
	{
		if(this->playerList[i]->npc == npc)
			return true;
	}
	return false;
};

CPlayer* CPlayerManager::GetPlayer(oCNpc* npc)
{
	for(unsigned int i = 0; i < this->GetNumberOfPlayers(); i++)
	{
		if(this->playerList[i]->npc == npc)
			return this->playerList[i];
	}
	return NULL;
};

void CPlayerManager::DestroyAllPlayers()
{
	CPlayer* p = NULL;
	for(unsigned int i = 0; i < this->GetNumberOfPlayers(); ++i)
	{
		if( this->playerList[i] && this->playerList[i]->id != core.GetMultiplayer()->GetMyID() )
		{
			p = this->playerList[i];
			p->UnSpawn();
			this->playerList.Remove(p);
			delete p;
		}
	}
};

void CPlayerManager::DestroyAllNpcs()
{
	for( size_t i = 0; i < GetNumberOfPlayers(); ++i )
	{
		if( playerList[i] && playerList[i]->id != core.GetMultiplayer()->GetMyID() )
		{
			if( playerList[i]->npc )
				playerList[i]->UnSpawn();
		}
	}
};

void CPlayerManager::CreateAllNpcs()
{
	for( size_t i = 0; i < GetNumberOfPlayers(); ++i )
	{
		if( playerList[i] && playerList[i]->id != core.GetMultiplayer()->GetMyID() )
		{
			if( !playerList[i]->npc )
				playerList[i]->Spawn(playerList[i]->pos[0], playerList[i]->pos[1] + 10, playerList[i]->pos[2], playerList[i]->instance);
		}
	}
};

void CPlayerManager::RepairAllPlayers()
{
	if( GetNumberOfPlayers() > 1 )
	{
		for( size_t i = 0; i < GetNumberOfPlayers(); ++i )
		{
			if( playerList[i] && playerList[i]->id != core.GetMultiplayer()->GetMyID() )
			{
				playerList[i]->Repair();
			}
		}
	}
};
