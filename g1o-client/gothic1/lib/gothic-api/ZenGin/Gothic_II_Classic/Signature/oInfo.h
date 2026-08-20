namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCInfo);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::oCInfo_OnInit, 0x006A5920);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::SetInstance, 0x006A5AB0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetInstance, 0x006A5C50);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::DoCheck, 0x006A5C60);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetNpcID, 0x006A5E50);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetConditionFunc, 0x006A5E60);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::WasTold, 0x006A5E70);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::SetTold, 0x006A5E80);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetDataSize, 0x006A5E90);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetDataAdr, 0x006A5EA0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetText, 0x006A5EB0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::InfoConditions, 0x006A5EC0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::Info, 0x006A5EE0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::AddChoice, 0x006A6090);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::RemoveChoice, 0x006A6190);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::RemoveAllChoices, 0x006A62E0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::Archive, 0x006A5F00);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::Unarchive, 0x006A5F40);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::RestoreParserInstance, 0x006A6070);

	ZENGIN_REGISTER_CLASS(oCInfoManager);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::oCInfoManager_OnInit, 0x006A4960);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInfoManager, &oCInfoManager::GetInformation, oCInfo*(oCInfoManager::*)(oCNpc*, oCNpc*, int), 0x006A4D20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInfoManager, &oCInfoManager::GetInformation, oCInfo*(oCInfoManager::*)(int), 0x006A4E80);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoCount, 0x006A4EB0);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoCountImportant, 0x006A5010);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoCountUnimportant, 0x006A5170);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfo, 0x006A52D0);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoImportant, 0x006A5430);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoUnimportant, 0x006A55A0);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::InformationTold, 0x006A5710);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::Archive, 0x006A5750);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::Unarchive, 0x006A57B0);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::RestoreParserInstances, 0x006A5900);

} // namespace Gothic_II_Classic
