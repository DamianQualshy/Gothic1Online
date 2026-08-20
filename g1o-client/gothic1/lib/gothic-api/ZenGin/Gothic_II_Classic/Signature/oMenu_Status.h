namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oSMenuInfoAttribute);
	ZENGIN_REGISTER_METHOD(oSMenuInfoAttribute, &oSMenuInfoAttribute::oSMenuInfoAttribute_OnInit, 0x0047EED0);

	ZENGIN_REGISTER_CLASS(oSMenuInfoTalent);
	ZENGIN_REGISTER_METHOD(oSMenuInfoTalent, &oSMenuInfoTalent::oSMenuInfoTalent_OnInit, 0x0047EF10);

	ZENGIN_REGISTER_CLASS(oCMenu_Log);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::oCMenu_Log_OnInit, 0x0047A490);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::SetDayTime, 0x0047AA20);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::SetLogTopics, 0x0047AAC0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::SetInfo, 0x0047B1B0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::InitForDisplay, 0x0047B8F0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::HandleEvent, 0x0047B890);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::HandleEnterItem, 0x0047B410);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::HandleLeaveItem, 0x0047B640);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::HandleActivateItem, 0x0047B880);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::Activate, 0x0047B8E0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::ScreenInit, 0x0047A4E0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::ScreenDone, 0x0047A910);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::ExecCommand, 0x0047B1C0);

	ZENGIN_REGISTER_CLASS(oCMenu_Status);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::oCMenu_Status_OnInit, 0x0047C2C0);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::SetPlayerName, 0x0047BB20);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::SetGuild, 0x0047BB70);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::SetMagicalGuild, 0x0047BC60);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::SetExperience, 0x0047BD50);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::SetLearnPoints, 0x0047C180);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::AddArmor, 0x0047C410);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::AddAttribute, 0x0047C520);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::AddTalent, 0x0047C700);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::InitForDisplay, 0x0047C8F0);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::HandleEvent, 0x0047B930);

	ZENGIN_REGISTER_CLASS(oCStatusScreen);
	ZENGIN_REGISTER_METHOD(oCStatusScreen, &oCStatusScreen::oCStatusScreen_OnInit, 0x0047D3F0);
	ZENGIN_REGISTER_METHOD(oCStatusScreen, &oCStatusScreen::Show, 0x0047D890);

	ZENGIN_REGISTER_CLASS(oCLogScreen);
	ZENGIN_REGISTER_METHOD(oCLogScreen, &oCLogScreen::oCLogScreen_OnInit, 0x0047DAB0);
	ZENGIN_REGISTER_METHOD(oCLogScreen, &oCLogScreen::Show, 0x0047DF10);

	ZENGIN_REGISTER_CLASS(oCMapScreen);
	ZENGIN_REGISTER_METHOD(oCMapScreen, &oCMapScreen::oCMapScreen_OnInit, 0x0047E130);
	ZENGIN_REGISTER_METHOD(oCMapScreen, &oCMapScreen::Show, 0x0047E4F0);

} // namespace Gothic_II_Classic
