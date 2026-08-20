namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCMusicTheme);
	ZENGIN_REGISTER_METHOD(zCMusicTheme, &zCMusicTheme::zCMusicTheme_OnInit, 0x004E7E40);
	ZENGIN_REGISTER_METHOD(zCMusicTheme, &zCMusicTheme::IsActive, 0x004E73F0);

	ZENGIN_REGISTER_CLASS(zCMusicJingle);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::zCMusicJingle_OnInit, 0x004E7E80);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::AddRef, 0x004E7F50);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::Release, 0x004E7F60);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::IsPlaying, 0x004E7F70);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::StopPlaying, 0x004E7F80);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::CacheIn, 0x004E7F90);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::CacheOut, 0x004E7FA0);

	ZENGIN_REGISTER_CLASS(zCMusicSystem);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::PlayThemeByScript, 0x004E7FE0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::LoadThemeByScript, 0x004E7FF0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::LoadTheme, 0x004E8000);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::PlayTheme, 0x004E8010);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::GetActiveTheme, 0x004E8020);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::PlayJingleByScript, 0x004E8030);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::StopJingleByScript, 0x004E8040);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::LoadJingleByScript, 0x004E8050);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::LoadJingle, 0x004E8060);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::PlayJingle, 0x004E8070);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::StopJingle, 0x004E8080);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::IsJingleActive, 0x004E8090);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::AddEventCallBackFunc, 0x004E80A0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::RemoveEventCallBackFunc, 0x004E80B0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::Mute, 0x004E80C0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::Stop, 0x004E80D0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::SetVolume, 0x004E80E0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::GetVolume, 0x004E80F0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::IsAvailable, 0x004E8100);

	ZENGIN_REGISTER_CLASS(zCMusicSys_Dummy);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::LoadThemeByScript, 0x00632C90);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::LoadTheme, 0x00632CE0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::LoadJingleByScript, 0x00632D30);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::LoadJingle, 0x00632D90);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::DoMusicUpdate, 0x00632DF0);

} // namespace Gothic_II_Addon
