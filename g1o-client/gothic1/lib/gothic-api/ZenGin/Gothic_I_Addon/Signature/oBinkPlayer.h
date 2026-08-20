namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCBinkPlayer);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::oCBinkPlayer_OnInit, 0x00424890);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::OpenVideo, 0x004253F0);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::PlayInit, 0x004248E0);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::PlayFrame, 0x00424950);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::PlayDeinit, 0x00424940);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::PlayHandleEvents, 0x00424960);

} // namespace Gothic_I_Addon
