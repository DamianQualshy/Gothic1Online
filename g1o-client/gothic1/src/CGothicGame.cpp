#include "stdafx.h"

CGothicGame::CGothicGame()
{
	DLOG("CGothicGame::CGothicGame()");
	bIsFirstFrame = true; //Po użyciu tego, w renderze wysłać pakiet o gotowości clienta
};

void CGothicGame::InitGame() //Uruchamianie z hooka na pokazanie menu :)
{
	//Wczytywanie nazwy świata z configu
	//Uruchamianie świata z wyłączonymi npc'ami
	//Nawiązanie połączenia z serwerem i wysłanie pakietu autoryzacyjnego
	//Zmiana czasu na godzine 8:00
	DLOG("CGothicGame::InitGame()");
	oCGame* game = oCGame::GetGame();
	CChat* chat = core.GetChat();
	CConfig* config = core.GetConfig();
	CNetwork* net = core.GetNetwork();

	if( game )
	{
		game -> LoadWorldStartup(zSTRING(core.GetConfig()->GetStartWorld().C_String()));
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
			const char* playerInstance = core.GetConfig()->GetPlayerInstance().C_String();
			if( strcmp(playerInstance, hero->GetInstanceName().ToChar()) != 0 )
			{
				zVEC3 pos = hero->GetPosition();
				oCNpc* new_npc = oCGame::GetGame()->CreateNPC(zSTRING(playerInstance), pos[0], pos[1], pos[2]);
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
		/*//test hashlib
		wrapperfactory wf;
		hashwrapper* hl = wf.create(HL_MD5);
		std::string hash = hl->getHashFromFile(std::string("Multiplayer//GO_HS.exe"));
		delete hl;

		chat -> AddLine(RakString("GO_HS.exe: %s", hash.c_str()), zCOLOR(0,255,255,255));*/
		//Nawiązywanie połączenia z serwerem
		if( net->InitNetwork() == true ) //Inicjacja sieci
		{
			chat -> AddLine(RakString(ClientLanguage::Get(EClientText::EstablishingConnection, config->GetLanguage()), config->GetServerIp().C_String(), config->GetServerPort().C_String()), zCOLOR(255, 196, 0, 255));
			//net -> Connect() przeniesione do pierwszej klatki rendera
		}	
	}
};
