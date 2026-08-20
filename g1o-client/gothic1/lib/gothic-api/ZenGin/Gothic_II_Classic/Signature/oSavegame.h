namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCSavegameInfo);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSavegameInfo, &oCSavegameInfo::oCSavegameInfo_OnInit, void(oCSavegameInfo::*)(), 0x004366A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSavegameInfo, &oCSavegameInfo::oCSavegameInfo_OnInit, void(oCSavegameInfo::*)(int), 0x00436870);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetName, 0x0042A2F0);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetWorldName, 0x0042A340);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetSaveTime, 0x0042EE10);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::Init, 0x00436A10);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::DoesSavegameExist, 0x00436BE0);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::UpdateThumbPic, 0x00436BF0);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetDir, 0x00436E10);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::ReloadResources, 0x00436E60);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::CleanResources, 0x00437050);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::SetSlot, 0x00437080);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetGameTime, 0x00437F40);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::_GetClassDef, 0x00436830);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::Archive, 0x00437470);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::Unarchive, 0x004379C0);

	ZENGIN_REGISTER_CLASS(oCSavegameManager);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::oCSavegameManager_OnInit, 0x004381F0);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::Init, 0x00438490);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::Reinit, 0x00438A40);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::CleanResources, 0x00438A50);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::SetAndWriteSavegame, 0x00438AB0);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::GetSavegame, 0x00438CB0);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::CopyToCurrent, 0x00438CE0);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::CopyFromCurrent, 0x00438E90);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::ClearCurrent, 0x00439040);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::GetSlotDirName, 0x00439180);

} // namespace Gothic_II_Classic
