namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCTradeManager);
	ZENGIN_REGISTER_METHOD(oCTradeManager, &oCTradeManager::oCTradeManager_OnInit, 0x00673810);
	ZENGIN_REGISTER_METHOD(oCTradeManager, &oCTradeManager::GetModule, 0x00673A60);

	ZENGIN_REGISTER_CLASS(oCItemReactModule);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::oCItemReactModule_OnInit, 0x00673C20);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::Validate, 0x00673C70);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::Conditions, 0x00673C80);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::GetOfferedInstance, 0x00673CB0);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::StartReaction, 0x00673CD0);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::GetDataSize, 0x00673CF0);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::GetNpcInstance, 0x00673D00);

} // namespace Gothic_I_Classic
