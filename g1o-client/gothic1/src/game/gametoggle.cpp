#include "../stdafx.h"

void Fake_HandleResultString(zSTRING str)
{
};

int Hook_Apply_Options_Video()
{
	SPDLOG_INFO("[startup] Applying Gothic video options");
	g1o::hooking::GetHookManager().Remove(0x0042A310);
	if( core.IsLateHooksInitiated() == true )
		core.DeInitializeLateHooks();
	int result = Apply_Options_Video();
	if( core.IsLateHooksInitiated() == false )
		core.InitializeLateHooks();
	g1o::hooking::GetHookManager().Install(0x0042A310, &Hook_Apply_Options_Video);
	SPDLOG_INFO("[startup] Gothic video options applied");
	return result;
};

int ConsoleEval(zSTRING const& s, zSTRING& msg)
{
	return oCGame::ConsoleEvalFunc(s, msg);
};

int Apply_Options_Video()
{
	return reinterpret_cast<int(__cdecl*)()>(0x0042A310)();
};

void HandleResultString(zSTRING str)
{
	reinterpret_cast<void(__cdecl*)(zSTRING)>(0x004301F0)(str);
};

int __cdecl vidGetFPSRate()
{
	return reinterpret_cast<int(__cdecl*)()>(0x004EF790)();
};

