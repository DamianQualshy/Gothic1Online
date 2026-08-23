#include "../stdafx.h"

void CGameManager::Hook_Menu(int i)
{
	SPDLOG_TRACE("CGameManager::Hook_Menu()");
	g1o::hooking::GetHookManager().Remove(0x004279F0); //Tylko usunięcie hooka, bo cała operacja inicjacji jest wykonywana tylko raz
	//Inicjacja gry
	CGothicGame* gothicGame = core.GetGothicGame();
	CNetwork* net = core.GetNetwork();
	
	if( net->IsInitiated() == false )
	{
		gothicGame->InitGame();
	}
};

void CGameManager::Hook_Done()
{
	SPDLOG_TRACE("CGameManager::Hook_Done()");
	g1o::hooking::GetHookManager().Remove(0x00424850);
	CNetwork* net = core.GetNetwork();
	if( net )
		if( net->IsConnected() == true )
			net->Disconnect();

	this->Done();
	g1o::hooking::GetHookManager().Install(0x00424850, &CGameManager::Hook_Done);
};
