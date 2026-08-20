namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCVideoPlayer);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::zCVideoPlayer_OnInit, 0x0046E480);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::GetVideoFilename, 0x0043F030);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::Play, 0x0046E7D0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::OpenVideo, 0x0046E560);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::CloseVideo, 0x0046E6D0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayInit, 0x0046E8E0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayFrame, 0x0046E920);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayDeinit, 0x0046E930);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::Pause, 0x0046E940);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::Unpause, 0x0046E960);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::Stop, 0x0046E980);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::IsPlaying, 0x0046E4C0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::ToggleSound, 0x0046E4D0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::SetSoundVolume, 0x0046E4E0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayGotoNextFrame, 0x0046E900);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayWaitNextFrame, 0x0046E910);

} // namespace Gothic_II_Addon
