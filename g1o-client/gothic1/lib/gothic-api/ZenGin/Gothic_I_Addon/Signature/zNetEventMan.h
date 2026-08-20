namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCNetEventManager);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetEventManager, &zCNetEventManager::zCNetEventManager_OnInit, void(zCNetEventManager::*)(), 0x00459E90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetEventManager, &zCNetEventManager::zCNetEventManager_OnInit, void(zCNetEventManager::*)(zCVob*), 0x00459EE0);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::Init, 0x00459F10);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::_GetClassDef, 0x00459180);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::Archive, 0x0045BC50);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::Unarchive, 0x0045BC80);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::OnMessage, 0x00459F20);
	ZENGIN_REGISTER_METHOD(zCNetEventManager, &zCNetEventManager::GetNetVobControl, 0x0045BD00);

} // namespace Gothic_I_Addon
