namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCMenu_ChgKeys);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::oCMenu_ChgKeys_OnInit, 0x00478E30);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::InitText, 0x00479AC0);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::HandleEvent, 0x00478E80);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::Leave, 0x00479A10);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::ScreenInit, 0x004799F0);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::ExecCommand, 0x004790C0);

	ZENGIN_REGISTER_CLASS(oCMenu_Main);
	ZENGIN_REGISTER_METHOD(oCMenu_Main, &oCMenu_Main::oCMenu_Main_OnInit, 0x00478BF0);
	ZENGIN_REGISTER_METHOD(oCMenu_Main, &oCMenu_Main::HandleEvent, 0x00478C50);
	ZENGIN_REGISTER_METHOD(oCMenu_Main, &oCMenu_Main::ScreenInit, 0x00478C30);
	ZENGIN_REGISTER_METHOD(oCMenu_Main, &oCMenu_Main::ScreenDone, 0x00478C40);

} // namespace Gothic_II_Classic
