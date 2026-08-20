namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCMusicTheme_DM);
	ZENGIN_REGISTER_METHOD(zCMusicTheme_DM, &zCMusicTheme_DM::IsActive, 0x004E4AA0);

	ZENGIN_REGISTER_CLASS(zCMusicSys_DirectMusic);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::zCMusicSys_DirectMusic_OnInit, 0x004E4AD0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::PlayThemeByScript, 0x004E5FA0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::LoadThemeByScript, 0x004E6170);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::LoadTheme, 0x004E6160);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::PlayTheme, 0x004E6D10);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::GetActiveTheme, 0x004E5620);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::PlayJingleByScript, 0x004E6F80);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::StopJingleByScript, 0x004E70B0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::LoadJingleByScript, 0x004E70C0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::LoadJingle, 0x004E7270);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::PlayJingle, 0x004E7280);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::StopJingle, 0x004E5630);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::IsJingleActive, 0x004E5640);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::DoMusicUpdate, 0x004E7400);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::Mute, 0x004E7430);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::Stop, 0x004E7410);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::SetVolume, 0x004E74C0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::GetVolume, 0x004E5650);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::IsAvailable, 0x004E7500);

} // namespace Gothic_II_Classic
