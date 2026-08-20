namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(CGameManager);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::CGameManager_OnInit, 0x004241B0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Tool_ConvertData, 0x004245C0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Init, 0x00424940);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Done, 0x004251A0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ExitGame, 0x00425440);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ExitSession, 0x00425450);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Run, 0x004254F0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InitScreen_Open, 0x00425C20);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InitScreen_Menu, 0x00425ED0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InitScreen_Close, 0x00425FF0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InitSettings, 0x004260F0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ShowSplashScreen, 0x00426430);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::RemoveSplashScreen, 0x00426470);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameInit, 0x00426490);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameDone, 0x004269B0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameSessionReset, 0x004269E0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameSessionInit, 0x00426AD0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameSessionDone, 0x00426C30);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ShowIntro, 0x00426D30);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ShowExtro, 0x00426D40);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::PreMenu, 0x00426D50);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::PostMenu, 0x004272D0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ApplySomeSettings, 0x00427370);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GetPlaytimeSeconds, 0x00428EF0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Menu, 0x00428F40);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Read_Savegame, 0x00429D20);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Write_Savegame, 0x00429FB0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::HandleCancelKey, 0x0042A3E0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::MenuEnabled, 0x0042A7D0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GetGame, 0x0042AE90);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::IsIntroActive, 0x0042AEA0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InsertMenuWorld, 0x0042AEC0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::RemoveMenuWorld, 0x0042AED0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::IsGameRunning, 0x0042AEE0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(CGameManager, &CGameManager::IntroduceChapter, int(CGameManager::*)(), 0x0042AF00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(CGameManager, &CGameManager::IntroduceChapter, int(CGameManager::*)(zSTRING, zSTRING, zSTRING, zSTRING, int), 0x0042B4C0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::PlayVideo, 0x0042B620);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::PlayVideoEx, 0x0042B7F0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ShowRealPlayTime, 0x0042BAC0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::HandleEvent, 0x0042AA30);

} // namespace Gothic_II_Classic
