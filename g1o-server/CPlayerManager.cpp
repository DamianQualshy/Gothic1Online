#include "stdafx.h"

CPlayerManager::CPlayerManager()
	: timerBroadcastList(0), nextPlayerId(0)
{
}

CPlayerManager::~CPlayerManager()
{
	for (const auto& entry : playerList)
		delete entry.second;
}

bool CPlayerManager::IsNicknameUsed(const std::string& playerName) const
{
	for (const auto& entry : playerList)
		if (entry.second->name == playerName)
			return true;
	return false;
}

bool CPlayerManager::IsPlayerInManager(const CPlayer* player) const
{
	for (const auto& entry : playerList)
		if (entry.second == player)
			return true;
	return false;
}

CPlayer* CPlayerManager::CreatePlayer(HSteamNetConnection connection, const std::string& playerName)
{
	if (playerName.empty() || playerName.size() > 30)
		return nullptr;

	while (playerList.contains(nextPlayerId))
		++nextPlayerId;
	const int playerId = nextPlayerId++;
	auto* player = new CPlayer(connection, core.GetNetwork()->GetRemoteAddress(connection), playerId, playerName);
	player->bConnected = true;
	playerList.emplace(playerId, player);
	return player;
}

void CPlayerManager::CreatePlayerForOtherPlayer(CPlayer* player, CPlayer* receiver)
{
	if (!player || !receiver)
		return;
	CNetwork* network = core.GetNetwork();
	PacketWriter packet;
	if (player->spawned)
	{
		packet.Write(GO_PLAYER);
		packet.Write(CREATE_AND_SPAWN);
		packet.Write(player->playerId);
		packet.Write(player->name);
		packet.Write(player->instance);
		packet.Write(player->bodyModel);
		packet.Write(player->bodyTexture);
		packet.Write(player->headModel);
		packet.Write(player->headTexture);
		packet.Write(player->x);
		packet.Write(player->y);
		packet.Write(player->z);
		packet.Write(player->angle);
		packet.Write(player->maxhealth);
		packet.Write(player->health);
		packet.Write(player->armorInstance);
		packet.Write(player->rangedWeaponInstance);
		packet.Write(player->meleeWeaponInstance);
		packet.Write(player->weaponMode);
		packet.Write(player->leftHand);
		packet.Write(player->rightHand);
		network->Send(receiver->GetConnection(), packet);

		for (int i = 0; i < player->overlaysList.Num(); ++i)
		{
			packet.Reset();
			packet.Write(GO_PLAYER);
			packet.Write(SET_OVERLAY);
			packet.Write(player->GetID());
			packet.Write(true);
			packet.Write(player->overlaysList.GetElementByIndex(i));
			network->Send(receiver->GetConnection(), packet);
		}
		for (int i = 0; i < player->timedOverlays.Num(); ++i)
		{
			packet.Reset();
			packet.Write(GO_PLAYER);
			packet.Write(SET_OVERLAY);
			packet.Write(player->GetID());
			packet.Write(true);
			packet.Write(player->timedOverlays.GetElementByIndex(i).overlay);
			network->Send(receiver->GetConnection(), packet);
		}
	}
	else
	{
		packet.Write(GO_PLAYER);
		packet.Write(CREATE_PLAYER);
		packet.Write(player->playerId);
		packet.Write(player->name);
		network->Send(receiver->GetConnection(), packet);
	}
}

bool CPlayerManager::DestroyPlayer(CPlayer* player)
{
	if (!IsPlayerInManager(player))
		return false;

	PacketWriter packet;
	packet.Write(GO_PLAYER);
	packet.Write(DESTROY_PLAYER);
	packet.Write(player->GetID());
	player->spawned = false;
	for (const auto& entry : playerList)
	{
		if (entry.second != player && core.GetStreamer()->IsPlayerStreamedToPlayer(player, entry.second))
		{
			core.GetNetwork()->Send(entry.second->GetConnection(), packet);
			entry.second->streamedPlayers.Remove(player);
		}
	}
	playerList.erase(player->GetID());
	delete player;
	return true;
}

void CPlayerManager::CheckPlayersTimedOverlays()
{
	for (const auto& entry : playerList)
		entry.second->CheckTimedOverlay();
}

CPlayer* CPlayerManager::GetPlayer(int playerID) const
{
	const auto iterator = playerList.find(playerID);
	return iterator == playerList.end() ? nullptr : iterator->second;
}

CPlayer* CPlayerManager::GetPlayer(HSteamNetConnection connection) const
{
	for (const auto& entry : playerList)
		if (entry.second->GetConnection() == connection)
			return entry.second;
	return nullptr;
}

CPlayer* CPlayerManager::GetPlayer(const std::string& playerName) const
{
	for (const auto& entry : playerList)
		if (entry.second->name == playerName)
			return entry.second;
	return nullptr;
}

void CPlayerManager::BroadcastPlayerList()
{
	const auto now = g1o::network::NowMilliseconds();
	if (now < timerBroadcastList)
		return;
	timerBroadcastList = now + 10000;
	if (playerList.empty())
		return;

	PacketWriter packet;
	packet.Write(GO_PLAYER);
	packet.Write(PLAYER_LIST);
	packet.Write(static_cast<std::uint32_t>(playerList.size()));
	for (const auto& entry : playerList)
		packet.Write("(ID:" + std::to_string(entry.second->GetID()) + ") " + entry.second->name);
	core.GetNetwork()->SendToAll(packet);
}
