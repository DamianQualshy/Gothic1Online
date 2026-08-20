namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oSMenuInfoAttribute);
	ZENGIN_REGISTER_METHOD(oSMenuInfoAttribute, &oSMenuInfoAttribute::oSMenuInfoAttribute_OnInit, 0x00482BE0);

	ZENGIN_REGISTER_CLASS(oSMenuInfoTalent);
	ZENGIN_REGISTER_METHOD(oSMenuInfoTalent, &oSMenuInfoTalent::oSMenuInfoTalent_OnInit, 0x00482C20);

	ZENGIN_REGISTER_CLASS(oCMenu_Log);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::oCMenu_Log_OnInit, 0x0047DF70);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::SetDayTime, 0x0047E560);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::SetLogTopics, 0x0047E600);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::SetInfo, 0x0047ED60);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::InitForDisplay, 0x0047F510);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::HandleEvent, 0x0047F4B0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::HandleEnterItem, 0x0047EFF0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::HandleLeaveItem, 0x0047F240);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::HandleActivateItem, 0x0047F4A0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::Activate, 0x0047F500);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::ScreenInit, 0x0047DFC0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::ScreenDone, 0x0047E440);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::ExecCommand, 0x0047ED70);

	ZENGIN_REGISTER_CLASS(oCMenu_Status);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::oCMenu_Status_OnInit, 0x0047FD10);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::SetPlayerName, 0x0047F750);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::SetGuild, 0x0047F7A0);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::SetExperience, 0x0047F890);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::SetLearnPoints, 0x0047FC30);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::AddArmor, 0x0047FE60);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::AddAttribute, 0x0047FF90);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::AddTalent, 0x00480170);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::InitForDisplay, 0x00480370);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::HandleEvent, 0x0047F550);

	ZENGIN_REGISTER_CLASS(oCStatusScreen);
	ZENGIN_REGISTER_METHOD(oCStatusScreen, &oCStatusScreen::oCStatusScreen_OnInit, 0x00480E80);
	ZENGIN_REGISTER_METHOD(oCStatusScreen, &oCStatusScreen::Show, 0x004813D0);

	ZENGIN_REGISTER_CLASS(oCLogScreen);
	ZENGIN_REGISTER_METHOD(oCLogScreen, &oCLogScreen::oCLogScreen_OnInit, 0x00481610);
	ZENGIN_REGISTER_METHOD(oCLogScreen, &oCLogScreen::Show, 0x00481AD0);

	ZENGIN_REGISTER_CLASS(oCMapScreen);
	ZENGIN_REGISTER_METHOD(oCMapScreen, &oCMapScreen::oCMapScreen_OnInit, 0x00481D00);
	ZENGIN_REGISTER_METHOD(oCMapScreen, &oCMapScreen::Show, 0x00482100);

} // namespace Gothic_I_Addon
