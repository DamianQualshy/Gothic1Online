namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCMusicTheme);
	ZENGIN_REGISTER_METHOD(zCMusicTheme, &zCMusicTheme::zCMusicTheme_OnInit, 0x004EBD50);
	ZENGIN_REGISTER_METHOD(zCMusicTheme, &zCMusicTheme::IsActive, 0x004EB430);

	ZENGIN_REGISTER_CLASS(zCMusicJingle);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::zCMusicJingle_OnInit, 0x004EBD90);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::AddRef, 0x004EBE80);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::Release, 0x004EBE90);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::IsPlaying, 0x004EBEA0);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::StopPlaying, 0x004EBEB0);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::CacheIn, 0x004EBEC0);
	ZENGIN_REGISTER_METHOD(zCMusicJingle, &zCMusicJingle::CacheOut, 0x004EBED0);

	ZENGIN_REGISTER_CLASS(zCMusicSystem);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::PlayThemeByScript, 0x004EBF10);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::LoadThemeByScript, 0x004EBF20);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::LoadTheme, 0x004EBF30);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::PlayTheme, 0x004EBF40);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::GetActiveTheme, 0x004EBF50);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::PlayJingleByScript, 0x004EBF60);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::StopJingleByScript, 0x004EBF70);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::LoadJingleByScript, 0x004EBF80);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::LoadJingle, 0x004EBF90);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::PlayJingle, 0x004EBFA0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::StopJingle, 0x004EBFB0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::IsJingleActive, 0x004EBFC0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::AddEventCallBackFunc, 0x004EBFD0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::RemoveEventCallBackFunc, 0x004EBFE0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::Mute, 0x004EBFF0);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::Stop, 0x004EC000);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::SetVolume, 0x004EC010);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::GetVolume, 0x004EC020);
	ZENGIN_REGISTER_METHOD(zCMusicSystem, &zCMusicSystem::IsAvailable, 0x004EC030);

	ZENGIN_REGISTER_CLASS(zCMusicSys_Dummy);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::LoadThemeByScript, 0x00625980);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::LoadTheme, 0x006259E0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::LoadJingleByScript, 0x00625A40);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::LoadJingle, 0x00625AB0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_Dummy, &zCMusicSys_Dummy::DoMusicUpdate, 0x00625B20);

} // namespace Gothic_I_Addon
