namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCInformationManager);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::oCInformationManager_OnInit, 0x00769110);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::UpdateViewSettings, 0x00768FC0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::ToggleStatus, 0x00769740);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::PrintStatus, 0x00769790);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::HasFinished, 0x0076A210);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::WaitingForEnd, 0x0076A220);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::SetNpc, 0x0076A230);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::Update, 0x0076A3E0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::Exit, 0x0076AA80);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CameraStart, 0x0076ABE0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CameraStop, 0x0076ADE0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CameraRefresh, 0x0076AE50);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::ProcessImportant, 0x0076AE70);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::ProcessNextImportant, 0x0076B070);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::InfoWaitForEnd, 0x0076B250);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CollectInfos, 0x0076B360);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CollectChoices, 0x0076B590);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnImportantBegin, 0x0076B670);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnImportantEnd, 0x0076B750);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnInfoBegin, 0x0076B8A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInformationManager, &oCInformationManager::OnInfo, void(__fastcall oCInformationManager::*)(int), 0x0076B960);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInformationManager, &oCInformationManager::OnInfo, void(__fastcall oCInformationManager::*)(oCInfo*), 0x0076BB30);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnChoiceBegin, 0x0076BE70);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInformationManager, &oCInformationManager::OnChoice, void(__fastcall oCInformationManager::*)(int), 0x0076C080);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInformationManager, &oCInformationManager::OnChoice, void(__fastcall oCInformationManager::*)(oCInfoChoice*), 0x0076C2A0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnChoiceEnd, 0x0076C4B0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnInfoEnd, 0x0076C600);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnTradeBegin, 0x0076C770);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnTradeEnd, 0x0076C840);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnExit, 0x0076C990);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnTermination, 0x0076CA60);

} // namespace Gothic_I_Addon
