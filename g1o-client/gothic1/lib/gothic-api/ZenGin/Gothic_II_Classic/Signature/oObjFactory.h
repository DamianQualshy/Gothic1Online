namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCObjectFactory);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::_GetClassDef, 0x00426730);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateEventManager, 0x007105B0);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateCSManager, 0x00710610);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateGameInfo, 0x00710670);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreatePlayerInfo, 0x007106D0);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateWorld, 0x00710730);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateWaypoint, 0x00710930);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateWay, 0x00710990);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateNpc, 0x007107B0);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateItem, 0x00710870);

} // namespace Gothic_II_Classic
