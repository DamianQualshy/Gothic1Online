namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCCSPlayer);
	ZENGIN_REGISTER_METHOD(oCCSPlayer, &oCCSPlayer::oCCSPlayer_OnInit, 0x00403750);
	ZENGIN_REGISTER_METHOD(oCCSPlayer, &oCCSPlayer::_GetClassDef, 0x00403740);
	ZENGIN_REGISTER_METHOD(oCCSPlayer, &oCCSPlayer::ProcessCutscene, 0x004037C0);

} // namespace Gothic_I_Classic
