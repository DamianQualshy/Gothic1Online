namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCLogEntry);
	ZENGIN_REGISTER_METHOD(oCLogEntry, &oCLogEntry::Archive, 0x0072EF50);
	ZENGIN_REGISTER_METHOD(oCLogEntry, &oCLogEntry::Unarchive, 0x0072EF70);

	ZENGIN_REGISTER_CLASS(oCLogTopic);
	ZENGIN_REGISTER_METHOD(oCLogTopic, &oCLogTopic::AddEntry, 0x0072EA60);
	ZENGIN_REGISTER_METHOD(oCLogTopic, &oCLogTopic::Archive, 0x0072ECA0);
	ZENGIN_REGISTER_METHOD(oCLogTopic, &oCLogTopic::Unarchive, 0x0072ED60);

	ZENGIN_REGISTER_CLASS(oCLogManager);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCLogManager, &oCLogManager::oCLogManager_OnInit, void(oCLogManager::*)(oCLogManager const&), 0x0072E5A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCLogManager, &oCLogManager::oCLogManager_OnInit, void(oCLogManager::*)(), 0x0072E5C0);
	ZENGIN_REGISTER_METHOD(oCLogManager, &oCLogManager::Clear, 0x0072E6B0);
	ZENGIN_REGISTER_METHOD(oCLogManager, &oCLogManager::Archive, 0x0072E810);
	ZENGIN_REGISTER_METHOD(oCLogManager, &oCLogManager::Unarchive, 0x0072E880);

} // namespace Gothic_I_Classic
