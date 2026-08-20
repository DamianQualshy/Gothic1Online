namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCMusicTheme_DM);
	ZENGIN_REGISTER_METHOD(zCMusicTheme_DM, &zCMusicTheme_DM::IsActive, 0x004E7420);

	ZENGIN_REGISTER_CLASS(zCMusicSys_DirectMusic);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::zCMusicSys_DirectMusic_OnInit, 0x004E7450);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::PlayThemeByScript, 0x004E8AB0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::LoadThemeByScript, 0x004E8C80);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::LoadTheme, 0x004E8C70);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::PlayTheme, 0x004E9820);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::GetActiveTheme, 0x004E8130);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::PlayJingleByScript, 0x004E9A90);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::StopJingleByScript, 0x004E9BC0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::LoadJingleByScript, 0x004E9BD0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::LoadJingle, 0x004E9D80);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::PlayJingle, 0x004E9D90);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::StopJingle, 0x004E8140);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::IsJingleActive, 0x004E8150);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::DoMusicUpdate, 0x004E9F10);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::Mute, 0x004E9F40);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::Stop, 0x004E9F20);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::SetVolume, 0x004E9FD0);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::GetVolume, 0x004E8160);
	ZENGIN_REGISTER_METHOD(zCMusicSys_DirectMusic, &zCMusicSys_DirectMusic::IsAvailable, 0x004EA010);

} // namespace Gothic_II_Addon
