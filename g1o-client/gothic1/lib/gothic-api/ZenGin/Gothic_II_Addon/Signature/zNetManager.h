namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCNetManager);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::zCNetManager_OnInit, 0x0045B920);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::Temp_HandleNetMessage, 0x0045B8B0);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::SendPing, 0x0045BD60);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::SendPingReply, 0x0045BDD0);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::SendWorldTime, 0x0045BE10);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::_GetClassDef, 0x0045B8A0);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::Process, 0x0045BAE0);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::CreateNetMessage, 0x0045BCD0);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::HandleNetMessage, 0x0045BC10);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::ProcessMessages, 0x0045BB90);

} // namespace Gothic_II_Addon
