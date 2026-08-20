namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCMusicTheme);
	ZENGIN_REGISTER_METHOD(zCMusicTheme, &zCMusicTheme::zCMusicTheme_OnInit, 0x004E5330);
	ZENGIN_REGISTER_METHOD(zCMusicTheme, &zCMusicTheme::IsActive, 0x004E4A70);

	ZENGIN_REGISTER_CLASS(zCMusicJingle);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::zCMusicJingle_OnInit, 0x004E5370);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::AddRef, 0x004E5440);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::Release, 0x004E5450);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::IsPlaying, 0x004E5460);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::StopPlaying, 0x004E5470);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::CacheIn, 0x004E5480);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::CacheOut, 0x004E5490);

	ZENGIN_REGISTER_CLASS(zCMusicSystem);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::PlayThemeByScript, 0x004E54D0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::LoadThemeByScript, 0x004E54E0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::LoadTheme, 0x004E54F0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::PlayTheme, 0x004E5500);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::GetActiveTheme, 0x004E5510);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::PlayJingleByScript, 0x004E5520);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::StopJingleByScript, 0x004E5530);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::LoadJingleByScript, 0x004E5540);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::LoadJingle, 0x004E5550);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::PlayJingle, 0x004E5560);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::StopJingle, 0x004E5570);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::IsJingleActive, 0x004E5580);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::AddEventCallBackFunc, 0x004E5590);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::RemoveEventCallBackFunc, 0x004E55A0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::Mute, 0x004E55B0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::Stop, 0x004E55C0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::SetVolume, 0x004E55D0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::GetVolume, 0x004E55E0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::IsAvailable, 0x004E55F0);

	ZENGIN_REGISTER_CLASS(zCMusicSys_Dummy);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::LoadThemeByScript, 0x0062B4C0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::LoadTheme, 0x0062B510);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::LoadJingleByScript, 0x0062B560);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::LoadJingle, 0x0062B5C0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::DoMusicUpdate, 0x0062B620);

} // namespace Gothic_II_Classic
