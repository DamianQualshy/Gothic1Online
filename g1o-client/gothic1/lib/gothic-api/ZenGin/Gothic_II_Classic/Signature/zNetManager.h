namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCNetManager);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::zCNetManager_OnInit, 0x0045B1D0);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::Temp_HandleNetMessage, 0x0045B160);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::SendPing, 0x0045B610);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::SendPingReply, 0x0045B680);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::SendWorldTime, 0x0045B6C0);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::_GetClassDef, 0x0045B150);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::Process, 0x0045B390);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::CreateNetMessage, 0x0045B580);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::HandleNetMessage, 0x0045B4C0);
	ZENGIN_REGISTER_METHOD(zCNetManager, &zCNetManager::ProcessMessages, 0x0045B440);

} // namespace Gothic_II_Classic
