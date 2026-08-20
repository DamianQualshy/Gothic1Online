namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCBinkPlayer);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::oCBinkPlayer_OnInit, 0x00422300);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::OpenVideo, 0x00422DA0);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::PlayInit, 0x00422350);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::PlayFrame, 0x004223C0);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::PlayDeinit, 0x004223B0);
	ZENGIN_REGISTER_METHOD(oCBinkPlayer, &oCBinkPlayer::PlayHandleEvents, 0x004223D0);

} // namespace Gothic_I_Classic
