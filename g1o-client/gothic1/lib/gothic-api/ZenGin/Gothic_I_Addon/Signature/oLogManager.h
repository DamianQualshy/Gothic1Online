namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCLogEntry);
	ZENGIN_REGISTER_METHOD(oCLogEntry, &oCLogEntry::Archive, 0x0076D5D0);
	ZENGIN_REGISTER_METHOD(oCLogEntry, &oCLogEntry::Unarchive, 0x0076D5F0);

	ZENGIN_REGISTER_CLASS(oCLogTopic);
	ZENGIN_REGISTER_METHOD(oCLogTopic, &oCLogTopic::AddEntry, 0x0076D0B0);
	ZENGIN_REGISTER_METHOD(oCLogTopic, &oCLogTopic::Archive, 0x0076D300);
	ZENGIN_REGISTER_METHOD(oCLogTopic, &oCLogTopic::Unarchive, 0x0076D3C0);

	ZENGIN_REGISTER_CLASS(oCLogManager);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCLogManager, &oCLogManager::oCLogManager_OnInit, void(oCLogManager::*)(oCLogManager const&), 0x0076CBD0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCLogManager, &oCLogManager::oCLogManager_OnInit, void(oCLogManager::*)(), 0x0076CBF0);
	ZENGIN_REGISTER_METHOD(oCLogManager, &oCLogManager::Clear, 0x0076CCE0);
	ZENGIN_REGISTER_METHOD(oCLogManager, &oCLogManager::Archive, 0x0076CE50);
	ZENGIN_REGISTER_METHOD(oCLogManager, &oCLogManager::Unarchive, 0x0076CEB0);

} // namespace Gothic_I_Addon
