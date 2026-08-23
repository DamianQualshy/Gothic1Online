#include "stdafx.h"

CPlayer::CPlayer(SystemAddress _clientAddress, int _playerID, RakString _playerName)
{
	//SPDLOG_TRACE("CPlayer::CPlayer()");
	bool bConnected = false;
	addr = _clientAddress;
	playerId = _playerID;
	name = _playerName;
	id = _playerID;
	streamedPlayers.Clear();
	streamedItems.Clear();
	overlaysList.Clear();
	timedOverlays.Clear();
};

CPlayer::~CPlayer()
{
	//SPDLOG_TRACE("CPlayer::~CPlayer()");
	streamedPlayers.Clear();
	streamedItems.Clear();
	overlaysList.Clear();
	timedOverlays.Clear();
};

void CPlayer::Disconnect()
{
	if( this->bConnected == true)
	{
		core.GetNetwork()->GetPeer()->CloseConnection(this->GetAddress(), true);
		this->bConnected = false;
	}
};

void CPlayer::CheckTimedOverlay()
{
	for (int i = 0; i < timedOverlays.Num(); ++i)
	{
		STimedOverlay &timedOverlay = timedOverlays.GetElementByIndex(i);

		if (GetTimeMS() > timedOverlay.time)
		{
			BitStream s;
			s.Write((MessageID)GO_PLAYER);
			s.Write((MessageID)SET_OVERLAY);
			s.Write(playerId);
			s.Write(false);
			s.Write(timedOverlay.overlay);

			timedOverlays.RemoveIndex(i);

			core.GetNetwork()->SendToPlayersOnList(s, LOW_PRIORITY, RELIABLE, &streamedPlayers);
		}
	}
}