#include "..\\stdafx.h"

void CAnticheat::enumWindows()
{
	EnumWindows(&CAnticheat::EnumWindProc, NULL);
};

BOOL CALLBACK CAnticheat::EnumWindProc(HWND windowHandle, LPARAM lParam)
{
	char windowText[64];
	GetWindowText(windowHandle, windowText, 64);

	if (CEvent::ProgramName(RakString(windowText).C_String()) == 1)
	{
		CGameManager::GetGameManager()->ExitGame();
		ExitProcess(0);
		return false;
	}
	return true;
};