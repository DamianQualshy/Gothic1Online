namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oSMenuInfoAttribute);
	ZENGIN_REGISTER_METHOD(oSMenuInfoAttribute, &oSMenuInfoAttribute::oSMenuInfoAttribute_OnInit, 0x00478EB0);

	ZENGIN_REGISTER_CLASS(oSMenuInfoTalent);
	ZENGIN_REGISTER_METHOD(oSMenuInfoTalent, &oSMenuInfoTalent::oSMenuInfoTalent_OnInit, 0x00478EF0);

	ZENGIN_REGISTER_CLASS(oCMenu_Log);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::oCMenu_Log_OnInit, 0x004747F0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::SetDayTime, 0x00474D80);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::SetLogTopics, 0x00474E20);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::SetInfo, 0x00475510);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::InitForDisplay, 0x00475C50);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::HandleEvent, 0x00475BF0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::HandleEnterItem, 0x00475770);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::HandleLeaveItem, 0x004759A0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::HandleActivateItem, 0x00475BE0);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::Activate, 0x00475C40);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::ScreenInit, 0x00474840);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::ScreenDone, 0x00474C70);
	ZENGIN_REGISTER_METHOD(oCMenu_Log, &oCMenu_Log::ExecCommand, 0x00475520);

	ZENGIN_REGISTER_CLASS(oCMenu_Status);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::oCMenu_Status_OnInit, 0x004763D0);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::SetPlayerName, 0x00475E80);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::SetGuild, 0x00475ED0);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::SetExperience, 0x00475FC0);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::SetLearnPoints, 0x00476300);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::AddArmor, 0x00476520);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::AddAttribute, 0x00476650);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::AddTalent, 0x00476830);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::InitForDisplay, 0x00476A20);
	ZENGIN_REGISTER_METHOD(oCMenu_Status, &oCMenu_Status::HandleEvent, 0x00475C90);

	ZENGIN_REGISTER_CLASS(oCStatusScreen);
	ZENGIN_REGISTER_METHOD(oCStatusScreen, &oCStatusScreen::oCStatusScreen_OnInit, 0x00477380);
	ZENGIN_REGISTER_METHOD(oCStatusScreen, &oCStatusScreen::Show, 0x00477830);

	ZENGIN_REGISTER_CLASS(oCLogScreen);
	ZENGIN_REGISTER_METHOD(oCLogScreen, &oCLogScreen::oCLogScreen_OnInit, 0x00477A50);
	ZENGIN_REGISTER_METHOD(oCLogScreen, &oCLogScreen::Show, 0x00477EC0);

	ZENGIN_REGISTER_CLASS(oCMapScreen);
	ZENGIN_REGISTER_METHOD(oCMapScreen, &oCMapScreen::oCMapScreen_OnInit, 0x004780D0);
	ZENGIN_REGISTER_METHOD(oCMapScreen, &oCMapScreen::Show, 0x00478490);

} // namespace Gothic_I_Classic
