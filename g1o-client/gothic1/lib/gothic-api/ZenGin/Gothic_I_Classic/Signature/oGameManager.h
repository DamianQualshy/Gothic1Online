namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(CGameManager);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::CGameManager_OnInit, 0x004238F0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Tool_ConvertData, 0x00423D00);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Init, 0x004240C0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Done, 0x00424850);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ExitGame, 0x00424A80);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Run, 0x00424AF0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InitScreen_Open, 0x00425070);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InitScreen_Menu, 0x00425330);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InitScreen_Close, 0x00425450);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InitSettings, 0x00425550);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ShowSplashScreen, 0x00425760);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::RemoveSplashScreen, 0x004258E0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameInit, 0x00425900);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameDone, 0x00425E10);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameSessionReset, 0x00425E40);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameSessionInit, 0x00425F30);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameSessionDone, 0x004260A0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ShowIntro, 0x004261A0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ShowExtro, 0x004261B0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::PreMenu, 0x004261C0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::PostMenu, 0x00426720);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ApplySomeSettings, 0x004267C0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GetPlaytimeSeconds, 0x004279A0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Menu, 0x004279F0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Write_Savegame, 0x00428790);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Read_Savegame, 0x00428B50);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::HandleCancelKey, 0x00428D50);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::MenuEnabled, 0x00429140);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GetGame, 0x00429520);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::IsIntroActive, 0x00429530);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InsertMenuWorld, 0x00429550);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::RemoveMenuWorld, 0x00429560);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::IsGameRunning, 0x00429570);
	ZENGIN_REGISTER_METHOD_EXPLICIT(CGameManager, &CGameManager::IntroduceChapter, int(CGameManager::*)(), 0x00429590);
	ZENGIN_REGISTER_METHOD_EXPLICIT(CGameManager, &CGameManager::IntroduceChapter, int(CGameManager::*)(zSTRING, zSTRING, zSTRING, zSTRING, int), 0x00429A20);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::PlayVideo, 0x00429B80);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ShowRealPlayTime, 0x00429D50);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::HandleEvent, 0x004293C0);

} // namespace Gothic_I_Classic
