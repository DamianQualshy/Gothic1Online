namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCTradeManager);
	ZENGIN_REGISTER_METHOD(oCTradeManager, &oCTradeManager::oCTradeManager_OnInit, 0x006A1590);
	ZENGIN_REGISTER_METHOD(oCTradeManager, &oCTradeManager::GetModule, 0x006A1810);

	ZENGIN_REGISTER_CLASS(oCItemReactModule);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::oCItemReactModule_OnInit, 0x006A19F0);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::Validate, 0x006A1A40);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::Conditions, 0x006A1A50);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::GetOfferedInstance, 0x006A1A80);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::StartReaction, 0x006A1AA0);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::GetDataSize, 0x006A1AC0);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::GetNpcInstance, 0x006A1AD0);

} // namespace Gothic_I_Addon
