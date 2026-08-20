namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCBinkPlayer);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::zCBinkPlayer_OnInit, 0x0043F0C0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::GetPixelFormat, 0x00441AF0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::SetFullscreen, 0x00441D60);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::OpenVideo, 0x0043F3D0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::CloseVideo, 0x004400B0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayInit, 0x00440390);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayFrame, 0x004418B0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayDeinit, 0x00440FB0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::Pause, 0x00441A70);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::Unpause, 0x00441A90);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::IsPlaying, 0x00441AC0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::ToggleSound, 0x00441CE0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::SetSoundVolume, 0x00441D30);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayGotoNextFrame, 0x00441860);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayWaitNextFrame, 0x00441870);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayHandleEvents, 0x00441AB0);

} // namespace Gothic_I_Addon
