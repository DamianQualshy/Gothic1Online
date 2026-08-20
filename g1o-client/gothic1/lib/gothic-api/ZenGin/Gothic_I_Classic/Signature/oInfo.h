namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCInfo);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::oCInfo_OnInit, 0x006654C0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::SetInstance, 0x00665650);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetInstance, 0x006657F0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::DoCheck, 0x00665800);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetNpcID, 0x00665810);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetConditionFunc, 0x00665820);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::WasTold, 0x00665830);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::SetTold, 0x00665840);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetDataSize, 0x00665850);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetDataAdr, 0x00665860);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::GetText, 0x00665870);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::InfoConditions, 0x00665880);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::Info, 0x006658A0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::AddChoice, 0x00665A50);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::RemoveChoice, 0x00665B70);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::RemoveAllChoices, 0x00665CC0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::Archive, 0x006658C0);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::Unarchive, 0x00665900);
	ZENGIN_REGISTER_METHOD(oCInfo, &oCInfo::RestoreParserInstance, 0x00665A30);

	ZENGIN_REGISTER_CLASS(oCInfoManager);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::oCInfoManager_OnInit, 0x00664520);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInfoManager, &oCInfoManager::GetInformation, oCInfo*(oCInfoManager::*)(oCNpc*, oCNpc*, int), 0x006648A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInfoManager, &oCInfoManager::GetInformation, oCInfo*(oCInfoManager::*)(int), 0x00664A00);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoCount, 0x00664A30);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoCountImportant, 0x00664B90);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoCountUnimportant, 0x00664CF0);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfo, 0x00664E50);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoImportant, 0x00664FB0);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::GetInfoUnimportant, 0x00665120);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::InformationTold, 0x00665290);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::Archive, 0x006652D0);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::Unarchive, 0x00665330);
	ZENGIN_REGISTER_METHOD(oCInfoManager, &oCInfoManager::RestoreParserInstances, 0x006654A0);

} // namespace Gothic_I_Classic
