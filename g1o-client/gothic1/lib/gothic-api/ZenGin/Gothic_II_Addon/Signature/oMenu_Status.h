namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oSMenuInfoAttribute);
	ZENGIN_REGISTER_METHOD(oSMenuInfoAttribute, &oSMenuInfoAttribute::oSMenuInfoAttribute_OnInit, 0x004803B0);

	ZENGIN_REGISTER_CLASS(oSMenuInfoTalent);
	ZENGIN_REGISTER_METHOD(oSMenuInfoTalent, &oSMenuInfoTalent::oSMenuInfoTalent_OnInit, 0x004803F0);

	ZENGIN_REGISTER_CLASS(oCMenu_Log);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::oCMenu_Log_OnInit, 0x0047B960);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::SetDayTime, 0x0047BEF0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::SetLogTopics, 0x0047BF90);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::SetInfo, 0x0047C680);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::InitForDisplay, 0x0047CDC0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::HandleEvent, 0x0047CD60);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::HandleEnterItem, 0x0047C8E0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::HandleLeaveItem, 0x0047CB10);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::HandleActivateItem, 0x0047CD50);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::Activate, 0x0047CDB0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::ScreenInit, 0x0047B9B0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::ScreenDone, 0x0047BDE0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::ExecCommand, 0x0047C690);

	ZENGIN_REGISTER_CLASS(oCMenu_Status);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::oCMenu_Status_OnInit, 0x0047D790);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::SetPlayerName, 0x0047CFF0);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::SetGuild, 0x0047D040);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::SetMagicalGuild, 0x0047D130);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::SetExperience, 0x0047D220);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::SetLearnPoints, 0x0047D650);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::AddArmor, 0x0047D8E0);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::AddAttribute, 0x0047D9F0);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::AddTalent, 0x0047DBD0);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::InitForDisplay, 0x0047DDC0);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::HandleEvent, 0x0047CE00);

	ZENGIN_REGISTER_CLASS(oCStatusScreen);
	ZENGIN_REGISTER_METHOD(oCStatusScreen, &oCStatusScreen::oCStatusScreen_OnInit, 0x0047E8C0);
	ZENGIN_REGISTER_METHOD(oCStatusScreen, &oCStatusScreen::Show, 0x0047ED60);

	ZENGIN_REGISTER_CLASS(oCLogScreen);
	ZENGIN_REGISTER_METHOD(oCLogScreen, &oCLogScreen::oCLogScreen_OnInit, 0x0047EF80);
	ZENGIN_REGISTER_METHOD(oCLogScreen, &oCLogScreen::Show, 0x0047F3E0);

	ZENGIN_REGISTER_CLASS(oCMapScreen);
	ZENGIN_REGISTER_METHOD(oCMapScreen, &oCMapScreen::oCMapScreen_OnInit, 0x0047F600);
	ZENGIN_REGISTER_METHOD(oCMapScreen, &oCMapScreen::Show, 0x0047F9C0);

} // namespace Gothic_II_Addon
