namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCClassDef);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCClassDef, &zCClassDef::zCClassDef_OnInit, void(zCClassDef::*)(), 0x0058A770);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCClassDef, &zCClassDef::zCClassDef_OnInit, void(zCClassDef::*)(zSTRING const&, zSTRING const&, zCObject*( __cdecl* )(), unsigned long, unsigned long, unsigned short, zSTRING const&), 0x0058AD70);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::Init, 0x0058A900);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::CreateNewInstance, 0x0058B050);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::OverwriteCreateNewInstance, 0x0058B110);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::ResetCreateNewInstance, 0x0058B130);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::GetClassID, 0x0058B140);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCClassDef, &zCClassDef::GetHashIndex, unsigned long(zCClassDef::*)(zSTRING const&), 0x0058B1D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCClassDef, &zCClassDef::GetHashIndex, unsigned long(zCClassDef::*)(zCObject*), 0x0058B200);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::InsertHashTable, 0x0058B230);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::RemoveHashTable, 0x0058B270);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::SearchHashTable, 0x0058B2B0);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::CalcHashTableSpread, 0x0058B340);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::ReportLeaks, 0x0058B640);

	ZENGIN_REGISTER_CLASS(zCObject);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::zCObject_OnInit, 0x00401C20);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::Release, 0x0042AC30);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::CreateCopy, 0x00589630);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::GetObjectName, 0x0058A160);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::SetObjectName, 0x0058A170);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::_GetClassDef, 0x00401D80);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::Archive, 0x00401D90);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::Unarchive, 0x00401DA0);

	ZENGIN_REGISTER_CLASS(zCObjectFactory);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::_GetClassDef, 0x00425DA0);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateEventManager, 0x0058BDE0);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateZFile, 0x0058BD60);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateSession, 0x0058C130);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateCSManager, 0x0058C1A0);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateNetVobControl, 0x0058BF10);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateGameInfo, 0x00425DB0);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreatePlayerInfo, 0x00425DC0);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateWorld, 0x0058C210);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateWaypoint, 0x0058BFA0);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateWay, 0x0058C0C0);

} // namespace Gothic_I_Classic
