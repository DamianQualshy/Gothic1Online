#include "stdafx.h"

CPlayer::CPlayer(HSteamNetConnection clientConnection, std::string clientIp, int playerID, std::string playerName)
	: connection(clientConnection),
	  ipAddress(std::move(clientIp)),
	  playerId(playerID),
	  bConnected(false)
{
	name = std::move(playerName);
	id = playerID;
}

CPlayer::~CPlayer() = default;

void CPlayer::Disconnect()
{
	if (!bConnected)
		return;
	core.GetNetwork()->Disconnect(connection);
	bConnected = false;
}

void CPlayer::CheckTimedOverlay()
{
	for (int i = 0; i < timedOverlays.Num(); ++i)
	{
		STimedOverlay& timedOverlay = timedOverlays.GetElementByIndex(i);
		if (g1o::network::NowMilliseconds() <= timedOverlay.time)
			continue;

		PacketWriter packet;
		packet.Write(GO_PLAYER);
		packet.Write(SET_OVERLAY);
		packet.Write(playerId);
		packet.Write(false);
		packet.Write(timedOverlay.overlay);
		timedOverlays.RemoveIndex(i--);
		core.GetNetwork()->SendToPlayersOnList(packet, &streamedPlayers);
	}
}
