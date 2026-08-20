namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCCSPlayer);
	ZENGIN_REGISTER_METHOD(oCCSPlayer, &oCCSPlayer::oCCSPlayer_OnInit, 0x00403E70);
	ZENGIN_REGISTER_METHOD(oCCSPlayer, &oCCSPlayer::_GetClassDef, 0x00403E60);
	ZENGIN_REGISTER_METHOD(oCCSPlayer, &oCCSPlayer::ProcessCutscene, 0x00403EE0);

} // namespace Gothic_I_Addon
