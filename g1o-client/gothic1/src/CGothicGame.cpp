#include "stdafx.h"

namespace
{
	constexpr char PlayerInstance[] = "PC_HERO";
}

CGothicGame::CGothicGame()
{
	SPDLOG_TRACE("CGothicGame::CGothicGame()");
	bIsFirstFrame = true; //Po użyciu tego, w renderze wysłać pakiet o gotowości clienta
};

void CGothicGame::InitGame() //Uruchamianie z hooka na pokazanie menu :)
{
	//Wczytywanie nazwy świata z configu
	//Uruchamianie świata z wyłączonymi npc'ami
	//Nawiązanie połączenia z serwerem i wysłanie pakietu autoryzacyjnego
	//Zmiana czasu na godzine 8:00
	SPDLOG_TRACE("CGothicGame::InitGame()");
	oCGame* game = oCGame::GetGame();
	CChat* chat = core.GetChat();
	CConfig* config = core.GetConfig();
	CNetwork* net = core.GetNetwork();
	const g1o::LaunchSession& session = core.GetLaunchSession();

	if( game )
	{
		game -> LoadWorldStartup(zSTRING(session.startWorld.c_str()));
		static const zSTRING& emptyString = *reinterpret_cast<const zSTRING*>(0x00869978);
		game -> EnterWorld(0, 1, emptyString);
		oCSpawnManager* spawnManager = game -> GetSpawnManager();
		if( spawnManager )
		{
			oCSpawnManager::SetRemoveRange(2097152.0f); //Usuwanie postaci tylko na duzej odleglosci (zamiast tamtych hookow)
			spawnManager -> SetSpawningEnabled(0); //Wyłącza spawnowanie npc
		}
/*		
#ifdef DEV_MODE
	
	UINT result = WinExec("Multiplayer//GO_HS.exe",SW_SHOWNORMAL);
	switch(result)
	{
	case 0:
		MessageBox(NULL, "Out of memory", "Gothic Online", MB_OK);
		CGameManager::GetGameManager()->ExitGame(); ExitProcess(0); break;
	case ERROR_BAD_FORMAT:
		MessageBox(NULL, "Bad file format", "Gothic Online", MB_OK);
		CGameManager::GetGameManager()->ExitGame(); ExitProcess(0); break;
	case ERROR_FILE_NOT_FOUND:
		MessageBox(NULL, "File not found", "Gothic Online", MB_OK);
		CGameManager::GetGameManager()->ExitGame(); ExitProcess(0); break;
	case ERROR_PATH_NOT_FOUND:
		MessageBox(NULL, "Path not found", "Gothic Online", MB_OK);
		CGameManager::GetGameManager()->ExitGame(); ExitProcess(0); break;
	};
#endif //DEV_MODE
	*/
		game -> SetTime(0, 8, 0);

		oCNpc* hero = oCNpc::GetHero();
		if( hero )
		{
			if( strcmp(PlayerInstance, hero->GetInstanceName().ToChar()) != 0 )
			{
				zVEC3 pos = hero->GetPosition();
				oCNpc* new_npc = oCGame::GetGame()->CreateNPC(zSTRING(PlayerInstance), pos[0], pos[1], pos[2]);
				if( new_npc )
				{
					new_npc->SetAsPlayer();
					hero->DestroyNpc();
				}
			}
		}
	
		//Późne hooki
		if( core.IsLateHooksInitiated() == false )
			core.InitializeLateHooks();
		//Inicjalizacja czatu i kilka wiadomości informacyjnych
		chat -> InitChat();
		chat -> Show(true);
		chat->AddLine(RakString("Gothic Online %s", versionString), zCOLOR(255, 196, 0, 255));
		//Nawiązywanie połączenia z serwerem
		if( net->InitNetwork() == true ) //Inicjacja sieci
		{
			const std::string serverPort = std::to_string(session.serverPort);
			chat -> AddLine(RakString(ClientLanguage::Get(EClientText::EstablishingConnection, config->GetLanguage()), session.serverAddress.c_str(), serverPort.c_str()), zCOLOR(255, 196, 0, 255));
			//net -> Connect() przeniesione do pierwszej klatki rendera
		}	
	}
};
