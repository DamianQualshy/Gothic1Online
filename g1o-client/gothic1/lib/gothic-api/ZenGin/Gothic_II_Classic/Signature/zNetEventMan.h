namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCNetEventManager);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetEventManager, &zCNetEventManager::zCNetEventManager_OnInit, void(zCNetEventManager::*)(), 0x00457BA0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetEventManager, &zCNetEventManager::zCNetEventManager_OnInit, void(zCNetEventManager::*)(zCVob*), 0x00457BF0);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::Init, 0x00457C20);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::_GetClassDef, 0x00456D10);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::Archive, 0x00459760);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::Unarchive, 0x00459790);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::OnMessage, 0x00457C30);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::GetNetVobControl, 0x00459810);

} // namespace Gothic_II_Classic
