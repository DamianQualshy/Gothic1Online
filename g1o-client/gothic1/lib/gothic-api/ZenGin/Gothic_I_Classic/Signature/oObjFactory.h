namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCObjectFactory);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::_GetClassDef, 0x00425BD0);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateEventManager, 0x006C8310);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateCSManager, 0x006C8380);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateGameInfo, 0x006C83F0);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreatePlayerInfo, 0x006C8460);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateWorld, 0x006C84D0);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateWaypoint, 0x006C8760);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateWay, 0x006C87D0);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateNpc, 0x006C8560);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateItem, 0x006C8660);

} // namespace Gothic_I_Classic
