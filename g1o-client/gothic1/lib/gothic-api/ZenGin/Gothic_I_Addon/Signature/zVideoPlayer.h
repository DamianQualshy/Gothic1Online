namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCVideoPlayer);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::zCVideoPlayer_OnInit, 0x00471260);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::GetVideoFilename, 0x00440340);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::Play, 0x00471630);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::OpenVideo, 0x00471350);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::CloseVideo, 0x00471510);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayInit, 0x00471740);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayFrame, 0x00471780);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayDeinit, 0x00471790);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::Pause, 0x004717A0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::Unpause, 0x004717C0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::Stop, 0x004717E0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::IsPlaying, 0x004712A0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::ToggleSound, 0x004712B0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::SetSoundVolume, 0x004712C0);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayGotoNextFrame, 0x00471760);
	ZENGIN_REGISTER_METHOD(zCVideoPlayer, &zCVideoPlayer::PlayWaitNextFrame, 0x00471770);

} // namespace Gothic_I_Addon
