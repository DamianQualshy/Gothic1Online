namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCMusicTheme_DM);
	ZENGIN_REGISTER_METHOD(zCMusicTheme_DM, &zCMusicTheme_DM::IsActive, 0x004EB460);

	ZENGIN_REGISTER_CLASS(zCMusicSys_DirectMusic);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::zCMusicSys_DirectMusic_OnInit, 0x004EB490);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::PlayThemeByScript, 0x004ECB40);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::LoadThemeByScript, 0x004ECD40);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::LoadTheme, 0x004ECD30);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::PlayTheme, 0x004ED980);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::GetActiveTheme, 0x004EC060);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::PlayJingleByScript, 0x004EDBF0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::StopJingleByScript, 0x004EDD40);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::LoadJingleByScript, 0x004EDD50);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::LoadJingle, 0x004EDF40);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::PlayJingle, 0x004EDF50);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::StopJingle, 0x004EC070);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::IsJingleActive, 0x004EC080);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::DoMusicUpdate, 0x004EE0E0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::Mute, 0x004EE120);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::Stop, 0x004EE0F0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::SetVolume, 0x004EE180);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::GetVolume, 0x004EC090);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::IsAvailable, 0x004EE1C0);

} // namespace Gothic_I_Addon
