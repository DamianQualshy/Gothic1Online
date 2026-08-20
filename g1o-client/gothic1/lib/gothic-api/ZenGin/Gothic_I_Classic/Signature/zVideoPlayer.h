namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCVideoPlayer);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::zCVideoPlayer_OnInit, 0x004691A0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::GetVideoFilename, 0x0043B410);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::Play, 0x004694F0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::OpenVideo, 0x00469280);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::CloseVideo, 0x004693F0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayInit, 0x00469600);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayFrame, 0x00469640);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayDeinit, 0x00469650);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::Pause, 0x00469660);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::Unpause, 0x00469680);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::Stop, 0x004696A0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::IsPlaying, 0x004691E0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::ToggleSound, 0x004691F0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::SetSoundVolume, 0x00469200);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayGotoNextFrame, 0x00469620);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayWaitNextFrame, 0x00469630);

} // namespace Gothic_I_Classic
