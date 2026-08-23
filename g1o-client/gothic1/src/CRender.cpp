#include "stdafx.h"

CRender::CRender()
{
	SPDLOG_TRACE("CRender::CRender()");
};

void CRender::Render()
{
	//Wysłanie pakietu o gotowości clienta do działania
	CNetwork* net = core.GetNetwork();
	CGothicGame* gothicGame = core.GetGothicGame();
	if( gothicGame->bIsFirstFrame == true )
	{
		const g1o::LaunchSession& session = core.GetLaunchSession();

		if( net -> IsInitiated() == true && net -> IsConnected() == false)
			net -> Connect(RakString(session.serverAddress.c_str()), session.serverPort); //Nawiązywanie połączenia
		gothicGame->bIsFirstFrame = false;
	}
	//Render chat
	CChat* chat = core.GetChat();
	if( chat )
		chat->Render();
	//Receiver/gui debug drawing
	if( net->IsInitiated() == true )
	{
		net->GetReceiver()->ReceivePackets(net);
		CNetInterface::GetInstance().Render(); //Rysowanie GUI z informacjami o sieci
		CPlayerList::GetInstance().Render();
		zCursor::GetCursor().OnUpdate(); //Kursor
		/*oCGame* game = oCGame::GetGame(); //Fix paska zycia
		if (game->GetShowPlayerStatus())
		{
			game->SetShowPlayerStatus(0);
			game->SetShowPlayerStatus(1);
		}*/
	}
	//Connected shitz
	if( net->IsConnected() == true )
	{
		if( playerManager.GetLocalPlayer() != NULL )
			playerManager.GetLocalPlayer()->Pulse();

		core.GetMultiplayer()->RepairDoor();
		playerManager.RepairAllPlayers(); //BRAND NEW!!!

		scr.OnRender();

#ifndef DEV_MODE
		//Sprawdzenie czy marvin nie jest aktywny
		if (!scr.GetScriptVars()->isMarvinEnabled && oCGame::GetGame()->game_testmode)
		{
			CGameManager::GetGameManager()->ExitGame();
			ExitProcess(0);
		}
#endif //DEV_MODE
	}
};
