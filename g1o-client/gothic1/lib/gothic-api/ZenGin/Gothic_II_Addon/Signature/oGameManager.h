namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(CGameManager);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::CGameManager_OnInit, 0x004244E0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Tool_ConvertData, 0x004248F0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Init, 0x00424C70);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Done, 0x004254E0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ExitGame, 0x00425780);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ExitSession, 0x00425790);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Run, 0x00425830);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InitScreen_Open, 0x00425F60);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InitScreen_Menu, 0x00426210);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InitScreen_Close, 0x00426330);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InitSettings, 0x00426430);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ShowSplashScreen, 0x00426770);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::RemoveSplashScreen, 0x004267B0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameInit, 0x004267D0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameDone, 0x00426CF0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameSessionReset, 0x00426D20);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameSessionInit, 0x00426E10);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GameSessionDone, 0x00426F70);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ShowIntro, 0x00427070);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ShowExtro, 0x00427080);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::PreMenu, 0x00427090);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::PostMenu, 0x00427610);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ApplySomeSettings, 0x004276B0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GetPlaytimeSeconds, 0x00429280);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Menu, 0x004292D0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Read_Savegame, 0x0042A040);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::Write_Savegame, 0x0042A2D0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::HandleCancelKey, 0x0042A700);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::MenuEnabled, 0x0042AAF0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::GetGame, 0x0042B1B0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::IsIntroActive, 0x0042B1C0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::InsertMenuWorld, 0x0042B1E0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::RemoveMenuWorld, 0x0042B1F0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::IsGameRunning, 0x0042B200);
	ZENGIN_REGISTER_METHOD_EXPLICIT(CGameManager, &CGameManager::IntroduceChapter, int(CGameManager::*)(), 0x0042B220);
	ZENGIN_REGISTER_METHOD_EXPLICIT(CGameManager, &CGameManager::IntroduceChapter, int(CGameManager::*)(zSTRING, zSTRING, zSTRING, zSTRING, int), 0x0042B7E0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::PlayVideo, 0x0042B940);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::PlayVideoEx, 0x0042BB10);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::ShowRealPlayTime, 0x0042BDE0);
	ZENGIN_REGISTER_METHOD(CGameManager, &CGameManager::HandleEvent, 0x0042AD50);

} // namespace Gothic_II_Addon
