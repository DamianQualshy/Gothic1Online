namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCNetEventManager);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetEventManager, &zCNetEventManager::zCNetEventManager_OnInit, void(zCNetEventManager::*)(), 0x00453380);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetEventManager, &zCNetEventManager::zCNetEventManager_OnInit, void(zCNetEventManager::*)(zCVob*), 0x004533D0);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::Init, 0x00453400);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::_GetClassDef, 0x00452630);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::Archive, 0x00454E40);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::Unarchive, 0x00454E70);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::OnMessage, 0x00453410);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::GetNetVobControl, 0x00454EF0);

} // namespace Gothic_I_Classic
