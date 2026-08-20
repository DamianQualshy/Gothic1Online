namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCObjectFactory);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::_GetClassDef, 0x00428590);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateEventManager, 0x006FE170);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateCSManager, 0x006FE1E0);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateGameInfo, 0x006FE250);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreatePlayerInfo, 0x006FE2C0);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateWorld, 0x006FE330);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateWaypoint, 0x006FE5C0);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateWay, 0x006FE630);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateNpc, 0x006FE3C0);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateItem, 0x006FE4C0);

} // namespace Gothic_I_Addon
