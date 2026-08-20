namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCInformationManager);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::oCInformationManager_OnInit, 0x0065F930);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::UpdateViewSettings, 0x0065F7E0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::ToggleStatus, 0x0065FF20);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::PrintStatus, 0x0065FF70);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::HasFinished, 0x006609D0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::WaitingForEnd, 0x006609E0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::SetNpc, 0x006609F0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::Update, 0x00660BB0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::Exit, 0x00661240);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CameraStart, 0x006613A0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CameraStop, 0x00661520);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CameraRefresh, 0x00661590);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::ProcessImportant, 0x006615B0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::ProcessNextImportant, 0x006617B0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::InfoWaitForEnd, 0x00661990);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CollectInfos, 0x00661AA0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CollectChoices, 0x00661CD0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnImportantBegin, 0x00661DB0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnImportantEnd, 0x00661E90);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnInfoBegin, 0x00661FF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInformationManager, &oCInformationManager::OnInfo, void(__fastcall oCInformationManager::*)(int), 0x006620B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInformationManager, &oCInformationManager::OnInfo, void(__fastcall oCInformationManager::*)(oCInfo*), 0x00662290);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnChoiceBegin, 0x00662570);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInformationManager, &oCInformationManager::OnChoice, void(__fastcall oCInformationManager::*)(int), 0x00662780);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInformationManager, &oCInformationManager::OnChoice, void(__fastcall oCInformationManager::*)(oCInfoChoice*), 0x006629A0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnChoiceEnd, 0x00662B90);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnInfoEnd, 0x00662CF0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnTradeBegin, 0x00662E60);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnTradeEnd, 0x00662F60);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnExit, 0x006630D0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnTermination, 0x006631A0);

} // namespace Gothic_II_Addon
