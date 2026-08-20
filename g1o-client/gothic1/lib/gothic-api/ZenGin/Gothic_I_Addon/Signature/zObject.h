namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCClassDef);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCClassDef, &zCClassDef::zCClassDef_OnInit, void(zCClassDef::*)(), 0x005A5BF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCClassDef, &zCClassDef::zCClassDef_OnInit, void(zCClassDef::*)(zSTRING const&, zSTRING const&, zCObject*( __cdecl* )(), unsigned long, unsigned long, unsigned short, zSTRING const&), 0x005A6240);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::Init, 0x005A5D80);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::CreateNewInstance, 0x005A6540);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::OverwriteCreateNewInstance, 0x005A6600);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::ResetCreateNewInstance, 0x005A6620);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::GetClassID, 0x005A6630);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCClassDef, &zCClassDef::GetHashIndex, unsigned long(zCClassDef::*)(zSTRING const&), 0x005A66E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCClassDef, &zCClassDef::GetHashIndex, unsigned long(zCClassDef::*)(zCObject*), 0x005A6710);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::InsertHashTable, 0x005A6740);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::RemoveHashTable, 0x005A6780);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::SearchHashTable, 0x005A67C0);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::CalcHashTableSpread, 0x005A6860);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::ReportLeaks, 0x005A6B70);

	ZENGIN_REGISTER_CLASS(zCObject);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::zCObject_OnInit, 0x00402020);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::Release, 0x0042DB30);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::CreateCopy, 0x005A4830);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::GetObjectName, 0x005A54F0);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::SetObjectName, 0x005A5500);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::_GetClassDef, 0x00402190);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::Archive, 0x004021A0);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::Unarchive, 0x004021B0);

	ZENGIN_REGISTER_CLASS(zCObjectFactory);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::_GetClassDef, 0x00428760);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateEventManager, 0x005A73B0);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateZFile, 0x005A7330);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateSession, 0x005A7720);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateCSManager, 0x005A7790);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateNetVobControl, 0x005A74F0);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateGameInfo, 0x00428770);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreatePlayerInfo, 0x00428780);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateWorld, 0x005A7800);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateWaypoint, 0x005A7580);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateWay, 0x005A76B0);

} // namespace Gothic_I_Addon
