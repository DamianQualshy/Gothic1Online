namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCSavegameInfo);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSavegameInfo, &oCSavegameInfo::oCSavegameInfo_OnInit, void(oCSavegameInfo::*)(), 0x00437D70);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSavegameInfo, &oCSavegameInfo::oCSavegameInfo_OnInit, void(oCSavegameInfo::*)(int), 0x00437EA0);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetName, 0x0042B8B0);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetWorldName, 0x0042B900);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetSaveTime, 0x0042F920);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::Init, 0x00437FB0);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::DoesSavegameExist, 0x00437FD0);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::UpdateThumbPic, 0x00437FE0);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetDir, 0x00438270);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::ReloadResources, 0x004382C0);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::CleanResources, 0x004384F0);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::SetSlot, 0x00438520);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetGameTime, 0x00439270);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::_GetClassDef, 0x00437D60);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::Archive, 0x00438920);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::Unarchive, 0x00438DC0);

	ZENGIN_REGISTER_CLASS(oCSavegameManager);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::oCSavegameManager_OnInit, 0x00439550);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::Init, 0x00439850);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::Reinit, 0x00439E80);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::CleanResources, 0x00439E90);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::SetAndWriteSavegame, 0x00439EF0);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::GetSavegame, 0x0043A130);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::CopyToCurrent, 0x0043A160);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::CopyFromCurrent, 0x0043A330);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::ClearCurrent, 0x0043A500);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::GetSlotDirName, 0x0043A650);

} // namespace Gothic_I_Addon
