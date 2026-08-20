namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCCSPlayer);
	ZENGIN_REGISTER_METHOD(oCCSPlayer, &oCCSPlayer::oCCSPlayer_OnInit, 0x004038D0);
	ZENGIN_REGISTER_METHOD(oCCSPlayer, &oCCSPlayer::_GetClassDef, 0x004038C0);
	ZENGIN_REGISTER_METHOD(oCCSPlayer, &oCCSPlayer::ProcessCutscene, 0x00403940);

} // namespace Gothic_II_Addon
