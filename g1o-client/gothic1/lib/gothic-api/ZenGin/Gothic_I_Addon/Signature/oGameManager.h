namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(CGameManager);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::CGameManager_OnInit, 0x004262E0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Tool_ConvertData, 0x00426710);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Init, 0x00426B20);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Done, 0x00427310);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ExitGame, 0x00427560);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Run, 0x004275D0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InitScreen_Open, 0x00427BB0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InitScreen_Menu, 0x00427EA0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InitScreen_Close, 0x00427FD0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InitSettings, 0x004280E0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameInit, 0x004282F0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameDone, 0x004287D0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameSessionReset, 0x00428800);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameSessionInit, 0x00428900);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameSessionDone, 0x00428A80);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ShowIntro, 0x00428B90);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ShowExtro, 0x00428BA0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::PreMenu, 0x00428BB0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::PostMenu, 0x00429130);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ApplySomeSettings, 0x004291E0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GetPlaytimeSeconds, 0x0042A4A0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Menu, 0x0042A4F0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::HandleCancelKey, 0x0042B9A0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::MenuEnabled, 0x0042BDF0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GetGame, 0x0042C0F0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::IsIntroActive, 0x0042C100);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InsertMenuWorld, 0x0042C120);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::RemoveMenuWorld, 0x0042C130);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::IsGameRunning, 0x0042C140);
	ZENGIN_REGISTER_METHOD_EXPLICIT(CGameManager, &CGameManager::IntroduceChapter, int(CGameManager::*)(), 0x0042C160);
	ZENGIN_REGISTER_METHOD_EXPLICIT(CGameManager, &CGameManager::IntroduceChapter, int(CGameManager::*)(zSTRING, zSTRING, zSTRING, zSTRING, int), 0x0042C6F0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::PlayVideo, 0x0042C8C0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ShowRealPlayTime, 0x0042CAD0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::HandleEvent, 0x0042C030);

} // namespace Gothic_I_Addon
