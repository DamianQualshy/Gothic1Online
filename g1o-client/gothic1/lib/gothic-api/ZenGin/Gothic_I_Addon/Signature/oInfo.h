namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCInfo);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::oCInfo_OnInit, 0x006927A0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::SetInstance, 0x00692950);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetInstance, 0x00692AF0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::DoCheck, 0x00692B00);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetNpcID, 0x00692D30);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetConditionFunc, 0x00692D40);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::WasTold, 0x00692D50);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::SetTold, 0x00692D60);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetDataSize, 0x00692D70);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetDataAdr, 0x00692D80);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetText, 0x00692D90);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::InfoConditions, 0x00692DA0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::Info, 0x00692DC0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::AddChoice, 0x00692F70);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::RemoveChoice, 0x006930A0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::RemoveAllChoices, 0x00693220);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::Archive, 0x00692DE0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::Unarchive, 0x00692E20);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::RestoreParserInstance, 0x00692F50);

	ZENGIN_REGISTER_CLASS(oCInfoManager);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::oCInfoManager_OnInit, 0x00691730);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInfoManager, &oCInfoManager::GetInformation, oCInfo*(oCInfoManager::*)(oCNpc*, oCNpc*, int), 0x00691B10);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInfoManager, &oCInfoManager::GetInformation, oCInfo*(oCInfoManager::*)(int), 0x00691C80);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoCount, 0x00691CB0);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoCountImportant, 0x00691E20);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoCountUnimportant, 0x00691F90);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfo, 0x00692100);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoImportant, 0x00692270);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoUnimportant, 0x006923F0);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::InformationTold, 0x00692570);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::Archive, 0x006925B0);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::Unarchive, 0x00692610);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::RestoreParserInstances, 0x00692780);

} // namespace Gothic_I_Addon
