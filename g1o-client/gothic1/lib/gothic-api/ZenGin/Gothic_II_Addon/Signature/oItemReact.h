namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCTradeManager);
	ZENGIN_REGISTER_METHOD(oCTradeManager, &oCTradeManager::oCTradeManager_OnInit, 0x007147E0);
	ZENGIN_REGISTER_METHOD(oCTradeManager, &oCTradeManager::GetModule, 0x00714A80);

	ZENGIN_REGISTER_CLASS(oCItemReactModule);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::oCItemReactModule_OnInit, 0x00714C40);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::Validate, 0x00714C90);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::Conditions, 0x00714CA0);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::GetOfferedInstance, 0x00714CD0);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::StartReaction, 0x00714CF0);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::GetDataSize, 0x00714D10);
	ZENGIN_REGISTER_METHOD(oCItemReactModule, &oCItemReactModule::GetNpcInstance, 0x00714D20);

} // namespace Gothic_II_Addon
