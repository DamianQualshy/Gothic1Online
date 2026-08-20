namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCCSManager);
	ZENGIN_REGISTER_METHOD(oCCSManager, &oCCSManager::oCCSManager_OnInit, 0x004016F0);
	ZENGIN_REGISTER_METHOD(oCCSManager, &oCCSManager::_GetClassDef, 0x004025B0);
	ZENGIN_REGISTER_METHOD(oCCSManager, &oCCSManager::CreateMessage, 0x00402730);
	ZENGIN_REGISTER_METHOD(oCCSManager, &oCCSManager::CreateOuMessage, 0x00402720);
	ZENGIN_REGISTER_METHOD(oCCSManager, &oCCSManager::CreateCutscenePlayer, 0x00402660);
	ZENGIN_REGISTER_METHOD(oCCSManager, &oCCSManager::CreateProperties, 0x00402FB0);

} // namespace Gothic_I_Addon
