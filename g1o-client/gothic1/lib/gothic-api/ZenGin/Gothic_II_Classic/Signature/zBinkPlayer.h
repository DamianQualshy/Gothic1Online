namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCBinkPlayer);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::zCBinkPlayer_OnInit, 0x0043D800);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::GetPixelFormat, 0x00440160);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::SetFullscreen, 0x00440330);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::OpenVideo, 0x0043DAC0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::CloseVideo, 0x0043E7C0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayInit, 0x0043EA50);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayFrame, 0x0043FF30);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayDeinit, 0x0043F6F0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::Pause, 0x004400E0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::Unpause, 0x00440100);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::IsPlaying, 0x00440130);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::ToggleSound, 0x004402B0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::SetSoundVolume, 0x00440300);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayGotoNextFrame, 0x0043FEE0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayWaitNextFrame, 0x0043FEF0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayHandleEvents, 0x00440120);

} // namespace Gothic_II_Classic
