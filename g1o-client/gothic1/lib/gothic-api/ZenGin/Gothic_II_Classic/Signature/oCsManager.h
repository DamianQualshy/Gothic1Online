namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCCSManager);
	ZENGIN_REGISTER_METHOD(oCCSManager, &oCCSManager::oCCSManager_OnInit, 0x00401600);
	ZENGIN_REGISTER_METHOD(oCCSManager, &oCCSManager::_GetClassDef, 0x004022C0);
	ZENGIN_REGISTER_METHOD(oCCSManager, &oCCSManager::CreateMessage, 0x00402420);
	ZENGIN_REGISTER_METHOD(oCCSManager, &oCCSManager::CreateOuMessage, 0x00402410);
	ZENGIN_REGISTER_METHOD(oCCSManager, &oCCSManager::CreateCutscenePlayer, 0x00402370);
	ZENGIN_REGISTER_METHOD(oCCSManager, &oCCSManager::CreateProperties, 0x00402B10);

} // namespace Gothic_II_Classic
