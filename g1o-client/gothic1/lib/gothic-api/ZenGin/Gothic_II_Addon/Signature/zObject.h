namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCClassDef);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCClassDef, &zCClassDef::zCClassDef_OnInit, void(zCClassDef::*)(), 0x005AA2E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCClassDef, &zCClassDef::zCClassDef_OnInit, void(zCClassDef::*)(zSTRING const&, zSTRING const&, zCObject*( __cdecl* )(), unsigned long, unsigned long, unsigned short, zSTRING const&), 0x005AA8E0);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::Init, 0x005AA470);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::CreateNewInstance, 0x005AAB80);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::OverwriteCreateNewInstance, 0x005AAC40);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::ResetCreateNewInstance, 0x005AAC60);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::GetClassID, 0x005AAC70);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCClassDef, &zCClassDef::GetHashIndex, unsigned long(zCClassDef::*)(zSTRING const&), 0x005AAD00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCClassDef, &zCClassDef::GetHashIndex, unsigned long(zCClassDef::*)(zCObject*), 0x005AAD30);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::InsertHashTable, 0x005AAD60);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::RemoveHashTable, 0x005AADA0);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::SearchHashTable, 0x005AADE0);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::CalcHashTableSpread, 0x005AAE70);
	ZENGIN_REGISTER_METHOD(zCClassDef, &zCClassDef::ReportLeaks, 0x005AB170);

	ZENGIN_REGISTER_CLASS(zCObject);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::zCObject_OnInit, 0x00401D60);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::Release, 0x0040C310);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::CreateCopy, 0x005A90A0);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::GetObjectName, 0x005A9CD0);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::SetObjectName, 0x005A9CE0);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::_GetClassDef, 0x00401EC0);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::Archive, 0x00401ED0);
	ZENGIN_REGISTER_METHOD(zCObject, &zCObject::Unarchive, 0x00401EE0);

	ZENGIN_REGISTER_CLASS(zCObjectFactory);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::_GetClassDef, 0x00426C80);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateEventManager, 0x005AB9B0);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateZFile, 0x005AB940);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateSession, 0x005ABDD0);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateCSManager, 0x005ABE30);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateNetVobControl, 0x005ABB30);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateGameInfo, 0x00426C90);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreatePlayerInfo, 0x00426CA0);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateWorld, 0x005ABEF0);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateWaypoint, 0x005ABC00);
	ZENGIN_REGISTER_METHOD(zCObjectFactory, &zCObjectFactory::CreateWay, 0x005ABD70);

} // namespace Gothic_II_Addon
