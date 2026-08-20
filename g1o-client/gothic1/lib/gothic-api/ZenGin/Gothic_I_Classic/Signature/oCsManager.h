namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCCSManager);
	ZENGIN_REGISTER_METHOD(oCCSManager, &oCCSManager::oCCSManager_OnInit, 0x00401430);
	ZENGIN_REGISTER_METHOD(oCCSManager, &oCCSManager::_GetClassDef, 0x00402170);
	ZENGIN_REGISTER_METHOD(oCCSManager, &oCCSManager::CreateMessage, 0x004022F0);
	ZENGIN_REGISTER_METHOD(oCCSManager, &oCCSManager::CreateOuMessage, 0x004022E0);
	ZENGIN_REGISTER_METHOD(oCCSManager, &oCCSManager::CreateCutscenePlayer, 0x00402220);
	ZENGIN_REGISTER_METHOD(oCCSManager, &oCCSManager::CreateProperties, 0x00402B50);

} // namespace Gothic_I_Classic
