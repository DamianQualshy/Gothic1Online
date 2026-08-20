namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCClassDef);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCClassDef, &zCClassDef::zCClassDef_OnInit, void(zCClassDef::*)(), 0x005A4D80);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCClassDef, &zCClassDef::zCClassDef_OnInit, void(zCClassDef::*)(zSTRING const&, zSTRING const&, zCObject*( __cdecl* )(), unsigned long, unsigned long, unsigned short, zSTRING const&), 0x005A5380);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::Init, 0x005A4F10);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::CreateNewInstance, 0x005A5620);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::OverwriteCreateNewInstance, 0x005A56E0);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::ResetCreateNewInstance, 0x005A5700);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::GetClassID, 0x005A5710);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCClassDef, &zCClassDef::GetHashIndex, unsigned long(zCClassDef::*)(zSTRING const&), 0x005A57A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCClassDef, &zCClassDef::GetHashIndex, unsigned long(zCClassDef::*)(zCObject*), 0x005A57D0);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::InsertHashTable, 0x005A5800);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::RemoveHashTable, 0x005A5840);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::SearchHashTable, 0x005A5880);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::CalcHashTableSpread, 0x005A5910);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::ReportLeaks, 0x005A5C10);

	ZENGIN_REGISTER_CLASS(zCObject);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::zCObject_OnInit, 0x00401D60);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::Release, 0x0040C310);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::CreateCopy, 0x005A3B40);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::GetObjectName, 0x005A4770);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::SetObjectName, 0x005A4780);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::_GetClassDef, 0x00401EC0);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::Archive, 0x00401ED0);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::Unarchive, 0x00401EE0);

	ZENGIN_REGISTER_CLASS(zCObjectFactory);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::_GetClassDef, 0x00426940);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateEventManager, 0x005A6450);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateZFile, 0x005A63E0);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateSession, 0x005A6870);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateCSManager, 0x005A68D0);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateNetVobControl, 0x005A65D0);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateGameInfo, 0x00426950);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreatePlayerInfo, 0x00426960);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateWorld, 0x005A6990);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateWaypoint, 0x005A66A0);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateWay, 0x005A6810);

} // namespace Gothic_II_Classic
