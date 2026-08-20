namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCBinkPlayer);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::oCBinkPlayer_OnInit, 0x004228A0);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::OpenVideo, 0x00423450);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::PlayInit, 0x004228F0);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::PlayFrame, 0x00422960);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::PlayDeinit, 0x00422950);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::PlayHandleEvents, 0x00422970);

} // namespace Gothic_II_Classic
