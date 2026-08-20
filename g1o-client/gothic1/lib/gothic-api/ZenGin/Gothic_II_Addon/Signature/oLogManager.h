namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCLogEntry);
	ZENGIN_REGISTER_METHOD(oCLogEntry, &oCLogEntry::Archive, 0x00663D10);
	ZENGIN_REGISTER_METHOD(oCLogEntry, &oCLogEntry::Unarchive, 0x00663D30);

	ZENGIN_REGISTER_CLASS(oCLogTopic);
	ZENGIN_REGISTER_METHOD(oCLogTopic, &oCLogTopic::AddEntry, 0x00663870);
	ZENGIN_REGISTER_METHOD(oCLogTopic, &oCLogTopic::Archive, 0x00663A80);
	ZENGIN_REGISTER_METHOD(oCLogTopic, &oCLogTopic::Unarchive, 0x00663B40);

	ZENGIN_REGISTER_CLASS(oCLogManager);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCLogManager, &oCLogManager::oCLogManager_OnInit, void(oCLogManager::*)(oCLogManager const&), 0x006633D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCLogManager, &oCLogManager::oCLogManager_OnInit, void(oCLogManager::*)(), 0x006633F0);
	ZENGIN_REGISTER_METHOD(oCLogManager, &oCLogManager::Clear, 0x006634E0);
	ZENGIN_REGISTER_METHOD(oCLogManager, &oCLogManager::Archive, 0x00663640);
	ZENGIN_REGISTER_METHOD(oCLogManager, &oCLogManager::Unarchive, 0x006636B0);

} // namespace Gothic_II_Addon
