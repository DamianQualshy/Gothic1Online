namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCNetEventManager);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetEventManager, &zCNetEventManager::zCNetEventManager_OnInit, void(zCNetEventManager::*)(), 0x004582F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetEventManager, &zCNetEventManager::zCNetEventManager_OnInit, void(zCNetEventManager::*)(zCVob*), 0x00458340);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::Init, 0x00458370);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::_GetClassDef, 0x00457460);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::Archive, 0x00459EB0);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::Unarchive, 0x00459EE0);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::OnMessage, 0x00458380);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::GetNetVobControl, 0x00459F60);

} // namespace Gothic_II_Addon
