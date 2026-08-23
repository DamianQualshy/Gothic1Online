#include "stdafx.h"

#include <LaunchSessionJson.h>

namespace
{
	std::optional<g1o::LaunchSession> ConsumeLaunchSession(std::string& error)
	{
		const DWORD requiredSize = GetEnvironmentVariableA(g1o::LaunchSessionEnvironment, nullptr, 0);
		if (requiredSize == 0)
		{
			error = "launch session environment variable is missing";
			return std::nullopt;
		}

		std::string payload(requiredSize, '\0');
		const DWORD copiedSize = GetEnvironmentVariableA(
			g1o::LaunchSessionEnvironment, payload.data(), requiredSize);
		SetEnvironmentVariableA(g1o::LaunchSessionEnvironment, nullptr);
		if (copiedSize == 0 || copiedSize >= requiredSize)
		{
			error = "launch session environment variable could not be read";
			return std::nullopt;
		}

		payload.resize(copiedSize);
		return g1o::ParseLaunchSession(payload, &error);
	}
}

CClient::CClient() :
	bIsLateHooksInitiated(false),
	pSplashScreen(nullptr),
	pGothicGame(nullptr),
	pRender(nullptr),
	pConfig(nullptr),
	pNetwork(nullptr),
	pMultiplayer(nullptr),
	pChat(nullptr),
	pKeyBoard(nullptr)
{
	g1o::logging::InitializeClient();
	SPDLOG_INFO("[startup] GO.dll client construction started");

	SPDLOG_TRACE("Gothic Online Debug Console Initialized!");
	SPDLOG_TRACE("CClient::CClient()");

	std::string sessionError;
	launchSession = ConsumeLaunchSession(sessionError);
	if (!launchSession)
	{
		SPDLOG_CRITICAL("[startup] GO.dll rejected the launch session: {}", sessionError);
		return;
	}
	SPDLOG_INFO("[startup] Launch session accepted for {}:{} ({})",
		launchSession->serverAddress, launchSession->serverPort, launchSession->startWorld);

	pSplashScreen = new CSplashScreen();
	pGothicGame = new CGothicGame();
	pRender = new CRender();
	pConfig = new CConfig();
	pNetwork = new CNetwork();
	pMultiplayer = new CMultiplayer();
	pChat = new CChat();
	pKeyBoard = new CKeyBoard();
	SPDLOG_INFO("[startup] GO.dll client components constructed");
};

CClient::~CClient()
{
	SPDLOG_TRACE("CClient::~CClient()");
	this->DeInitializeHooks();
	if( IsLateHooksInitiated() == true )
		this->DeInitializeLateHooks();
	g1o::hooking::GetHookManager().RemoveAll();

	delete pSplashScreen;
	delete pGothicGame;
	delete pRender;
	delete pConfig;
	delete pNetwork;
	delete pMultiplayer;
	delete pChat;
	delete pKeyBoard;
};

void CClient::Start()
{
	if (!launchSession)
		return;

	SPDLOG_INFO("[startup] Installing early Gothic hooks");
	SPDLOG_TRACE("CClient::Start()");
	//Zmiana nazwy okna
	//CGothicWindow::SetGothicWindowName(RakString("Gothic Online"));
	//Wstawianie hook'ów
	this->InitializeHooks();

	// Initialize keyboard layout
	if (pConfig->GetLanguage() == "ru")
		pKeyBoard->SetLayout(CKeyBoard::RUSSIAN);

	SPDLOG_INFO("[startup] GO.dll initialization completed");
	SPDLOG_TRACE("Client started");
};

void CClient::ApplyPatches()
{
	SPDLOG_TRACE("CClient::ApplyPatches()");

};

void CClient::InitializeHooks()
{
	SPDLOG_TRACE("CClient::InitializeHooks()");
	g1o::hooking::GetHookManager().Install(0x00429B80, &CGameManager::Fake_PlayVideo); //Filmiki na początku gry
	g1o::hooking::GetHookManager().Install(0x0042A310, &Hook_Apply_Options_Video); //Zmiana rozdzielczosci
	g1o::hooking::GetHookManager().Install(0x004279F0, &CGameManager::Hook_Menu); //Hook na menu, "odczepia" się w innym miejscu
	g1o::hooking::GetHookManager().Install(0x0045D080, &zCOption::Hook_ReadString); //Tutaj zablokuję opcję "NOWA GRA" z menu
	g1o::hooking::GetHookManager().Install(0x0063CD60, &oCGame::Hook_ChangeLevel); //Zmiana mapy
	g1o::hooking::GetHookManager().Install(0x0063EAD0, &oCGame::Hook_EnterWorld); //Wejscie do swiata
	g1o::hooking::GetHookManager().Install(0x0063AD80, &oCGame::Fake_WriteSavegame); //Blokowanie zapisywania gry
	g1o::hooking::GetHookManager().Install(0x0063C2A0, &oCGame::Fake_LoadSavegame); //Blokowanie wczytywania gry (bo crash)
	g1o::hooking::GetHookManager().Install(0x00424850, &CGameManager::Hook_Done); //Zamykanie gry
#ifndef DEV_MODE
	g1o::hooking::GetHookManager().Install(0x004301F0, &Fake_HandleResultString); //Czity gothicowe (marvin, southpark etc.)
#endif //DEV_MODE
};

void CClient::DeInitializeHooks()
{
	SPDLOG_TRACE("CClient::DeInitializeHooks()");
	g1o::hooking::GetHookManager().Remove(0x00429B80); //filmiki na początku
	g1o::hooking::GetHookManager().Remove(0x0042A310); //Zmiana rozdzielczosci
	g1o::hooking::GetHookManager().Remove(0x0045D080); //NOWA GRA z menu
	g1o::hooking::GetHookManager().Remove(0x0063CD60); //Zmiana mapy
	g1o::hooking::GetHookManager().Remove(0x0063EAD0); //Wejscie do swiata
	g1o::hooking::GetHookManager().Remove(0x0063AD80); //Zapis gry
	g1o::hooking::GetHookManager().Remove(0x0063C2A0); //Wczytanie gry
	g1o::hooking::GetHookManager().Remove(0x00424850); //Zamykanie gry

#ifndef DEV_MODE
	g1o::hooking::GetHookManager().Remove(0x004301F0); //Gothicowe czity
#endif //DEV_MODE
};

void CClient::InitializeLateHooks()
{
	SPDLOG_TRACE("CClient::InitializeLateHooks()");
	g1o::hooking::GetHookManager().Install(0x0063DBE0, &oCGame::Hook_Render); //Render
	g1o::hooking::GetHookManager().Install(0x0065EEE0, &oCGame::Hook_HandleEvent); //Hook na klawiaturę
	//g1o::hooking::GetHookManager().Install(0x005612F0, &zCModel::Hook_StartAni); //Animacje
	g1o::hooking::GetHookManager().Install(0x00694230, &oCNpc::Fake_DropAllInHand); //Blokowanie wypadania miecza przy upadku
	g1o::hooking::GetHookManager().Install(0x0046FC00, &oCMag_Book::Hook_Spell_Cast); //Magia
	g1o::hooking::GetHookManager().Install(0x006A10F0, &oCNpc::Hook_DoDropVob); //Wyrzucanie itemu
	g1o::hooking::GetHookManager().Install(0x006A0D10, &oCNpc::Hook_DoTakeVob); //Podnoszenie itemu
	g1o::hooking::GetHookManager().Install(0x00694C50, &oCNpc::Hook_SetMovLock); //Blokada ruchu (do skryptow)
	g1o::hooking::GetHookManager().Install(0x006BB0A0, &oCNpc::Hook_OpenInventory); //OpenInventory
	g1o::hooking::GetHookManager().Install(0x006BB2F0, &oCNpc::Hook_CloseInventory); //CloseInventory co tu dużo mówić?
	g1o::hooking::GetHookManager().Install(0x0068AD40, &oCNpc::Hook_ApplyOverlay); // Przechwytywanie dodania overlay
	g1o::hooking::GetHookManager().Install(0x0068B040, &oCNpc::Hook_RemoveOverlay); // Przechwytywanie usunięcia overlay
	g1o::hooking::GetHookManager().Install(0x006B0C60, &oCNpc::Hook_ApplyTimedOverlayMds);
	g1o::hooking::GetHookManager().Install(0x0067D300, &oCMobInter::Hook_OnTrigger);
	g1o::hooking::GetHookManager().Install(0x0067D5F0, &oCMobInter::Hook_OnUntrigger);
	g1o::hooking::GetHookManager().Install(0x006FFEB0, &zCView::Hook_Print);
	g1o::hooking::GetHookManager().Install(0x00692C10, &oCNpc::Hook_DropUnconscious);
	g1o::hooking::GetHookManager().Install(0x006A09F0, &oCNpc::Hook_DoShootArrow);
	g1o::hooking::GetHookManager().Install(0x00741990, &oCNpc::Hook_OnDamage_Anim);
	g1o::hooking::GetHookManager().Install(0x00738E40, &oCNpc::Hook_OnDamage_Script);
	this->bIsLateHooksInitiated = true;
};

void CClient::DeInitializeLateHooks()
{
	SPDLOG_TRACE("CClient::DeInitializeLateHooks()");
	g1o::hooking::GetHookManager().Remove(0x0063DBE0); //render
	g1o::hooking::GetHookManager().Remove(0x0065EEE0); //Hook na klawiaturę
	//g1o::hooking::GetHookManager().Remove(0x005612F0); //Animacje
	g1o::hooking::GetHookManager().Remove(0x00694230); //Blokowanie wypadania miecza przy upadku
	g1o::hooking::GetHookManager().Remove(0x0046FC00); //Magia
	g1o::hooking::GetHookManager().Remove(0x006A10F0); //Wyrzucenie itemu
	g1o::hooking::GetHookManager().Remove(0x006A0D10); //Podnoszenie itemu
	g1o::hooking::GetHookManager().Remove(0x00694C50); //Blokada ruchu
	g1o::hooking::GetHookManager().Remove(0x006BB0A0); //OpenInventory
	g1o::hooking::GetHookManager().Remove(0x006BB2F0); //CloseInventory
	g1o::hooking::GetHookManager().Remove(0x0068AD40); //Przechwytywanie dodania overlay
	g1o::hooking::GetHookManager().Remove(0x0068B040); //Przechwytywanie usunięcia overlay
	g1o::hooking::GetHookManager().Remove(0x006B0C60);
	g1o::hooking::GetHookManager().Remove(0x0067D300);
	g1o::hooking::GetHookManager().Remove(0x0067D5F0);
	g1o::hooking::GetHookManager().Remove(0x006FFEB0);
	g1o::hooking::GetHookManager().Remove(0x00692C10);
	g1o::hooking::GetHookManager().Remove(0x006A09F0);
	g1o::hooking::GetHookManager().Remove(0x00741990);
	g1o::hooking::GetHookManager().Remove(0x00738E40);
	this->bIsLateHooksInitiated = false;
};
