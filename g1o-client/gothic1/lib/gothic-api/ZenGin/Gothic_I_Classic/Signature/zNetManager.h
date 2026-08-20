namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCNetManager);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::zCNetManager_OnInit, 0x00456870);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::Temp_HandleNetMessage, 0x00456800);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::SendPing, 0x00456CC0);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::SendPingReply, 0x00456D30);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::SendWorldTime, 0x00456D70);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::_GetClassDef, 0x004567F0);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::Process, 0x00456A30);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::CreateNetMessage, 0x00456C20);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::HandleNetMessage, 0x00456B60);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::ProcessMessages, 0x00456AE0);

} // namespace Gothic_I_Classic
