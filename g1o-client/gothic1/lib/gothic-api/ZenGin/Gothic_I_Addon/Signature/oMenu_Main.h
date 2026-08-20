namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCMenu_ChgKeys);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::oCMenu_ChgKeys_OnInit, 0x0047C6D0);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::InitText, 0x0047D4C0);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::HandleEvent, 0x0047C720);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::Leave, 0x0047D410);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::ScreenInit, 0x0047D3F0);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::ExecCommand, 0x0047C990);

	ZENGIN_REGISTER_CLASS(oCMenu_Main);
	ZENGIN_REGISTER_METHOD(oCMenu_Main, &oCMenu_Main::oCMenu_Main_OnInit, 0x0047C480);
	ZENGIN_REGISTER_METHOD(oCMenu_Main, &oCMenu_Main::HandleEvent, 0x0047C4E0);
	ZENGIN_REGISTER_METHOD(oCMenu_Main, &oCMenu_Main::ScreenInit, 0x0047C4C0);
	ZENGIN_REGISTER_METHOD(oCMenu_Main, &oCMenu_Main::ScreenDone, 0x0047C4D0);

} // namespace Gothic_I_Addon
