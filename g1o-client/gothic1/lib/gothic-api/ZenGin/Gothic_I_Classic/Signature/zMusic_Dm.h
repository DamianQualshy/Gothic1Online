namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCMusicTheme_DM);
	ZENGIN_REGISTER_METHOD(zCMusicTheme_DM, &zCMusicTheme_DM::IsActive, 0x004DA240);

	ZENGIN_REGISTER_CLASS(zCMusicSys_DirectMusic);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::zCMusicSys_DirectMusic_OnInit, 0x004DA270);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::PlayThemeByScript, 0x004DB850);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::LoadThemeByScript, 0x004DBA20);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::LoadTheme, 0x004DBA10);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::PlayTheme, 0x004DC4E0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::GetActiveTheme, 0x004DAED0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::PlayJingleByScript, 0x004DC750);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::StopJingleByScript, 0x004DC880);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::LoadJingleByScript, 0x004DC890);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::LoadJingle, 0x004DCA50);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::PlayJingle, 0x004DCA60);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::StopJingle, 0x004DAEE0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::IsJingleActive, 0x004DAEF0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::DoMusicUpdate, 0x004DCBE0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::Mute, 0x004DCC20);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::Stop, 0x004DCBF0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::SetVolume, 0x004DCC80);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::GetVolume, 0x004DAF00);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::IsAvailable, 0x004DCCC0);

} // namespace Gothic_I_Classic
