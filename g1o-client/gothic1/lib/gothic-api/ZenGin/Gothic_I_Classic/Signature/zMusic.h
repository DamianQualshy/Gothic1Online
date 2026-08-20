namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCMusicTheme);
	ZENGIN_REGISTER_METHOD(zCMusicTheme, &zCMusicTheme::zCMusicTheme_OnInit, 0x004DABE0);
	ZENGIN_REGISTER_METHOD(zCMusicTheme, &zCMusicTheme::IsActive, 0x004DA210);

	ZENGIN_REGISTER_CLASS(zCMusicJingle);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::zCMusicJingle_OnInit, 0x004DAC20);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::AddRef, 0x004DACF0);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::Release, 0x004DAD00);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::IsPlaying, 0x004DAD10);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::StopPlaying, 0x004DAD20);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::CacheIn, 0x004DAD30);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::CacheOut, 0x004DAD40);

	ZENGIN_REGISTER_CLASS(zCMusicSystem);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::PlayThemeByScript, 0x004DAD80);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::LoadThemeByScript, 0x004DAD90);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::LoadTheme, 0x004DADA0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::PlayTheme, 0x004DADB0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::GetActiveTheme, 0x004DADC0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::PlayJingleByScript, 0x004DADD0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::StopJingleByScript, 0x004DADE0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::LoadJingleByScript, 0x004DADF0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::LoadJingle, 0x004DAE00);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::PlayJingle, 0x004DAE10);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::StopJingle, 0x004DAE20);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::IsJingleActive, 0x004DAE30);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::AddEventCallBackFunc, 0x004DAE40);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::RemoveEventCallBackFunc, 0x004DAE50);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::Mute, 0x004DAE60);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::Stop, 0x004DAE70);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::SetVolume, 0x004DAE80);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::GetVolume, 0x004DAE90);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::IsAvailable, 0x004DAEA0);

	ZENGIN_REGISTER_CLASS(zCMusicSys_Dummy);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::LoadThemeByScript, 0x00603930);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::LoadTheme, 0x00603990);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::LoadJingleByScript, 0x006039F0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::LoadJingle, 0x00603A60);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::DoMusicUpdate, 0x00603AD0);

} // namespace Gothic_I_Classic
