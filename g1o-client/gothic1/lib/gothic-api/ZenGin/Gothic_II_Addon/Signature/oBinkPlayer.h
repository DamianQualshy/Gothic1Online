namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCBinkPlayer);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::oCBinkPlayer_OnInit, 0x00422BD0);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::OpenVideo, 0x00423780);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::PlayInit, 0x00422C20);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::PlayFrame, 0x00422C90);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::PlayDeinit, 0x00422C80);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::PlayHandleEvents, 0x00422CA0);

} // namespace Gothic_II_Addon
