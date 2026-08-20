namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCTradeManager);
	ZENGIN_REGISTER_METHOD(oCTradeManager, &oCTradeManager::oCTradeManager_OnInit, 0x006B6750);
	ZENGIN_REGISTER_METHOD(oCTradeManager, &oCTradeManager::GetModule, 0x006B69F0);

	ZENGIN_REGISTER_CLASS(oCItemReactModule);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::oCItemReactModule_OnInit, 0x006B6BB0);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::Validate, 0x006B6C00);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::Conditions, 0x006B6C10);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::GetOfferedInstance, 0x006B6C40);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::StartReaction, 0x006B6C60);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::GetDataSize, 0x006B6C80);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::GetNpcInstance, 0x006B6C90);

} // namespace Gothic_II_Classic
