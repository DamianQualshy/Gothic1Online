namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCNetManager);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::zCNetManager_OnInit, 0x0045D810);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::Temp_HandleNetMessage, 0x0045D7A0);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::SendPing, 0x0045DC80);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::SendPingReply, 0x0045DCF0);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::SendWorldTime, 0x0045DD30);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::_GetClassDef, 0x0045D790);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::Process, 0x0045D9E0);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::CreateNetMessage, 0x0045DBE0);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::HandleNetMessage, 0x0045DB20);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::ProcessMessages, 0x0045DA90);

} // namespace Gothic_I_Addon
