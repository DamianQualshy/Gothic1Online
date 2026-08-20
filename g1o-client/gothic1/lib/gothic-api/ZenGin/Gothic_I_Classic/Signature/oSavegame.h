namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCSavegameInfo);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSavegameInfo, &oCSavegameInfo::oCSavegameInfo_OnInit, void(oCSavegameInfo::*)(), 0x00433E00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSavegameInfo, &oCSavegameInfo::oCSavegameInfo_OnInit, void(oCSavegameInfo::*)(int), 0x00433F30);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetName, 0x00428A60);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetWorldName, 0x00428AB0);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetSaveTime, 0x0042C7E0);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::Init, 0x004340D0);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::DoesSavegameExist, 0x004340F0);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::UpdateThumbPic, 0x00434100);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetDir, 0x00434330);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::ReloadResources, 0x00434380);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::CleanResources, 0x00434580);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::SetSlot, 0x004345B0);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetGameTime, 0x00435050);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::_GetClassDef, 0x00433DF0);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::Archive, 0x00434850);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::Unarchive, 0x00434C40);

	ZENGIN_REGISTER_CLASS(oCSavegameManager);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::oCSavegameManager_OnInit, 0x004352C0);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::Init, 0x004355B0);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::Reinit, 0x00435B20);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::CleanResources, 0x00435B30);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::SetAndWriteSavegame, 0x00435B90);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::GetSavegame, 0x00435D90);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::CopyToCurrent, 0x00435DC0);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::CopyFromCurrent, 0x00435F70);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::ClearCurrent, 0x00436120);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::GetSlotDirName, 0x00436260);

} // namespace Gothic_I_Classic
