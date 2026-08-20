namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCInformationManager);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::oCInformationManager_OnInit, 0x00776730);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::UpdateViewSettings, 0x007765E0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::ToggleStatus, 0x00776D00);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::PrintStatus, 0x00776D50);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::HasFinished, 0x007777B0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::WaitingForEnd, 0x007777C0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::SetNpc, 0x007777D0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::Update, 0x00777990);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::Exit, 0x00778020);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CameraStart, 0x00778180);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CameraStop, 0x00778300);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CameraRefresh, 0x00778370);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::ProcessImportant, 0x00778390);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::ProcessNextImportant, 0x00778590);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::InfoWaitForEnd, 0x00778770);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CollectInfos, 0x00778880);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CollectChoices, 0x00778AB0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnImportantBegin, 0x00778B90);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnImportantEnd, 0x00778C70);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnInfoBegin, 0x00778DD0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInformationManager, &oCInformationManager::OnInfo, void(__fastcall oCInformationManager::*)(int), 0x00778E90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInformationManager, &oCInformationManager::OnInfo, void(__fastcall oCInformationManager::*)(oCInfo*), 0x00779070);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnChoiceBegin, 0x00779350);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInformationManager, &oCInformationManager::OnChoice, void(__fastcall oCInformationManager::*)(int), 0x00779560);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInformationManager, &oCInformationManager::OnChoice, void(__fastcall oCInformationManager::*)(oCInfoChoice*), 0x00779780);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnChoiceEnd, 0x00779970);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnInfoEnd, 0x00779AD0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnTradeBegin, 0x00779C40);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnTradeEnd, 0x00779D40);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnExit, 0x00779EB0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnTermination, 0x00779F80);

} // namespace Gothic_II_Classic
