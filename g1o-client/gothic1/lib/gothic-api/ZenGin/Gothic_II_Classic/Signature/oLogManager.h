namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCLogEntry);
	ZENGIN_REGISTER_METHOD(oCLogEntry, &oCLogEntry::Archive, 0x0077AAD0);
	ZENGIN_REGISTER_METHOD(oCLogEntry, &oCLogEntry::Unarchive, 0x0077AAF0);

	ZENGIN_REGISTER_CLASS(oCLogTopic);
	ZENGIN_REGISTER_METHOD(oCLogTopic, &oCLogTopic::AddEntry, 0x0077A630);
	ZENGIN_REGISTER_METHOD(oCLogTopic, &oCLogTopic::Archive, 0x0077A840);
	ZENGIN_REGISTER_METHOD(oCLogTopic, &oCLogTopic::Unarchive, 0x0077A900);

	ZENGIN_REGISTER_CLASS(oCLogManager);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCLogManager, &oCLogManager::oCLogManager_OnInit, void(oCLogManager::*)(oCLogManager const&), 0x0077A190);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCLogManager, &oCLogManager::oCLogManager_OnInit, void(oCLogManager::*)(), 0x0077A1B0);
	ZENGIN_REGISTER_METHOD(oCLogManager, &oCLogManager::Clear, 0x0077A2A0);
	ZENGIN_REGISTER_METHOD(oCLogManager, &oCLogManager::Archive, 0x0077A400);
	ZENGIN_REGISTER_METHOD(oCLogManager, &oCLogManager::Unarchive, 0x0077A470);

} // namespace Gothic_II_Classic
