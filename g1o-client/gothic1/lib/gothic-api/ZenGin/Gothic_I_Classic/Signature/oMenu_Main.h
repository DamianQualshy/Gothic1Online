namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCMenu_ChgKeys);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::oCMenu_ChgKeys_OnInit, 0x00473400);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::InitText, 0x00474010);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::HandleEvent, 0x00473450);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::Leave, 0x00473F60);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::ScreenInit, 0x00473F40);
	ZENGIN_REGISTER_METHOD(oCMenu_ChgKeys, &oCMenu_ChgKeys::ExecCommand, 0x00473690);

	ZENGIN_REGISTER_CLASS(oCMenu_Main);
	ZENGIN_REGISTER_METHOD(oCMenu_Main, &oCMenu_Main::oCMenu_Main_OnInit, 0x004731C0);
	ZENGIN_REGISTER_METHOD(oCMenu_Main, &oCMenu_Main::HandleEvent, 0x00473220);
	ZENGIN_REGISTER_METHOD(oCMenu_Main, &oCMenu_Main::ScreenInit, 0x00473200);
	ZENGIN_REGISTER_METHOD(oCMenu_Main, &oCMenu_Main::ScreenDone, 0x00473210);

} // namespace Gothic_I_Classic
