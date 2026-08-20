namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCInfo);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::oCInfo_OnInit, 0x007033B0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::SetInstance, 0x00703540);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetInstance, 0x007036E0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::DoCheck, 0x007036F0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetNpcID, 0x007038E0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetConditionFunc, 0x007038F0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::WasTold, 0x00703900);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::SetTold, 0x00703910);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetDataSize, 0x00703920);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetDataAdr, 0x00703930);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetText, 0x00703940);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::InfoConditions, 0x00703950);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::Info, 0x00703970);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::AddChoice, 0x00703B20);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::RemoveChoice, 0x00703C20);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::RemoveAllChoices, 0x00703D70);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::Archive, 0x00703990);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::Unarchive, 0x007039D0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::RestoreParserInstance, 0x00703B00);

	ZENGIN_REGISTER_CLASS(oCInfoManager);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::oCInfoManager_OnInit, 0x007023F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInfoManager, &oCInfoManager::GetInformation, oCInfo*(oCInfoManager::*)(oCNpc*, oCNpc*, int), 0x007027B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInfoManager, &oCInfoManager::GetInformation, oCInfo*(oCInfoManager::*)(int), 0x00702910);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoCount, 0x00702940);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoCountImportant, 0x00702AA0);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoCountUnimportant, 0x00702C00);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfo, 0x00702D60);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoImportant, 0x00702EC0);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoUnimportant, 0x00703030);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::InformationTold, 0x007031A0);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::Archive, 0x007031E0);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::Unarchive, 0x00703240);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::RestoreParserInstances, 0x00703390);

} // namespace Gothic_II_Addon
