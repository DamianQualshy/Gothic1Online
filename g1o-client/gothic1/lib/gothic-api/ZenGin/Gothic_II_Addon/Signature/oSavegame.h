namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCSavegameInfo);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSavegameInfo, &oCSavegameInfo::oCSavegameInfo_OnInit, void(oCSavegameInfo::*)(), 0x00436BA0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSavegameInfo, &oCSavegameInfo::oCSavegameInfo_OnInit, void(oCSavegameInfo::*)(int), 0x00436D70);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetName, 0x0042A610);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetWorldName, 0x0042A660);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetSaveTime, 0x0042F130);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::Init, 0x00436F10);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::DoesSavegameExist, 0x004370E0);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::UpdateThumbPic, 0x004370F0);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetDir, 0x00437310);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::ReloadResources, 0x00437360);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::CleanResources, 0x00437550);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::SetSlot, 0x00437580);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::GetGameTime, 0x00438440);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::_GetClassDef, 0x00436D30);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::Archive, 0x00437970);
	ZENGIN_REGISTER_METHOD(oCSavegameInfo, &oCSavegameInfo::Unarchive, 0x00437EC0);

	ZENGIN_REGISTER_CLASS(oCSavegameManager);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::oCSavegameManager_OnInit, 0x004386F0);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::Init, 0x00438990);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::Reinit, 0x00439070);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::CleanResources, 0x00439080);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::SetAndWriteSavegame, 0x004390E0);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::GetSavegame, 0x004392E0);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::CopyToCurrent, 0x00439310);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::CopyFromCurrent, 0x004394C0);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::ClearCurrent, 0x00439670);
	ZENGIN_REGISTER_METHOD(oCSavegameManager, &oCSavegameManager::GetSlotDirName, 0x004397B0);

} // namespace Gothic_II_Addon
