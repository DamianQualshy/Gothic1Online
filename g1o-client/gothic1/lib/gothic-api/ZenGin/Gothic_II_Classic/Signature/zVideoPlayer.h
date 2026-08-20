namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCVideoPlayer);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::zCVideoPlayer_OnInit, 0x0046D850);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::GetVideoFilename, 0x0043EA00);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::Play, 0x0046DBA0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::OpenVideo, 0x0046D930);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::CloseVideo, 0x0046DAA0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayInit, 0x0046DCB0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayFrame, 0x0046DCF0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayDeinit, 0x0046DD00);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::Pause, 0x0046DD10);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::Unpause, 0x0046DD30);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::Stop, 0x0046DD50);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::IsPlaying, 0x0046D890);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::ToggleSound, 0x0046D8A0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::SetSoundVolume, 0x0046D8B0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayGotoNextFrame, 0x0046DCD0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayWaitNextFrame, 0x0046DCE0);

} // namespace Gothic_II_Classic
