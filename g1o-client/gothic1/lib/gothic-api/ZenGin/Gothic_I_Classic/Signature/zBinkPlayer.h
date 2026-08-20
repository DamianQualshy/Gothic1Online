namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCBinkPlayer);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::zCBinkPlayer_OnInit, 0x0043A3A0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::GetPixelFormat, 0x0043C9E0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::SetFullscreen, 0x0043CBB0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::OpenVideo, 0x0043A660);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::CloseVideo, 0x0043B1D0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayInit, 0x0043B460);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayFrame, 0x0043C7B0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayDeinit, 0x0043BFB0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::Pause, 0x0043C960);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::Unpause, 0x0043C980);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::IsPlaying, 0x0043C9B0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::ToggleSound, 0x0043CB30);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::SetSoundVolume, 0x0043CB80);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayGotoNextFrame, 0x0043C760);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayWaitNextFrame, 0x0043C770);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayHandleEvents, 0x0043C9A0);

} // namespace Gothic_I_Classic
