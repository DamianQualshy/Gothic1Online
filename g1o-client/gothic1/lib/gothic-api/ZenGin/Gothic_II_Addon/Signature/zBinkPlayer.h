namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCBinkPlayer);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::zCBinkPlayer_OnInit, 0x0043DE30);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::GetPixelFormat, 0x00440790);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::SetFullscreen, 0x00440960);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::OpenVideo, 0x0043E0F0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::CloseVideo, 0x0043EDF0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayInit, 0x0043F080);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayFrame, 0x00440560);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayDeinit, 0x0043FD20);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::Pause, 0x00440710);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::Unpause, 0x00440730);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::IsPlaying, 0x00440760);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::ToggleSound, 0x004408E0);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::SetSoundVolume, 0x00440930);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayGotoNextFrame, 0x00440510);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayWaitNextFrame, 0x00440520);
	ZENGIN_REGISTER_METHOD(zCBinkPlayer, &zCBinkPlayer::PlayHandleEvents, 0x00440750);

} // namespace Gothic_II_Addon
