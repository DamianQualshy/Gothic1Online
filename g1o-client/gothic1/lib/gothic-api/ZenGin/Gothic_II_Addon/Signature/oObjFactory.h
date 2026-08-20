namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCObjectFactory);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::_GetClassDef, 0x00426A70);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateEventManager, 0x0076FB20);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateCSManager, 0x0076FB80);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateGameInfo, 0x0076FBE0);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreatePlayerInfo, 0x0076FC40);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateWorld, 0x0076FCA0);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateWaypoint, 0x0076FEA0);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateWay, 0x0076FF00);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateNpc, 0x0076FD20);
	ZENGIN_REGISTER_METHOD(oCObjectFactory, &oCObjectFactory::CreateItem, 0x0076FDE0);

} // namespace Gothic_II_Addon
