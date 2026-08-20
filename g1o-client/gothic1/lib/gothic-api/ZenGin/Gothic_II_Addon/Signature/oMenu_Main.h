namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCMenu_ChgKeys);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::oCMenu_ChgKeys_OnInit, 0x0047A1D0);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::InitText, 0x0047AF30);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::HandleEvent, 0x0047A220);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::Leave, 0x0047AE80);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::ScreenInit, 0x0047AE60);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::ExecCommand, 0x0047A460);

	ZENGIN_REGISTER_CLASS(oCMenu_Main);
	ZENGIN_REGISTER_METHOD(oCMenu_Main, &oCMenu_Main::oCMenu_Main_OnInit, 0x00479F90);
	ZENGIN_REGISTER_METHOD(oCMenu_Main, &oCMenu_Main::HandleEvent, 0x00479FF0);
	ZENGIN_REGISTER_METHOD(oCMenu_Main, &oCMenu_Main::ScreenInit, 0x00479FD0);
	ZENGIN_REGISTER_METHOD(oCMenu_Main, &oCMenu_Main::ScreenDone, 0x00479FE0);

} // namespace Gothic_II_Addon
