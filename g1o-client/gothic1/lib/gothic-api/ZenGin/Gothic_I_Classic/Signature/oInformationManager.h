namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCInformationManager);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::oCInformationManager_OnInit, 0x0072AD70);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::UpdateViewSettings, 0x0072AC20);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::ToggleStatus, 0x0072B360);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::PrintStatus, 0x0072B3B0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::HasFinished, 0x0072BCC0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::WaitingForEnd, 0x0072BCD0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::SetNpc, 0x0072BCE0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::Update, 0x0072BE90);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::Exit, 0x0072C530);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CameraStart, 0x0072C690);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CameraStop, 0x0072C810);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CameraRefresh, 0x0072C880);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::ProcessImportant, 0x0072C8A0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::ProcessNextImportant, 0x0072CAA0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::InfoWaitForEnd, 0x0072CC80);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CollectInfos, 0x0072CD90);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::CollectChoices, 0x0072CFC0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnImportantBegin, 0x0072D0A0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnImportantEnd, 0x0072D180);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnInfoBegin, 0x0072D2E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInformationManager, &oCInformationManager::OnInfo, void(__fastcall oCInformationManager::*)(int), 0x0072D3A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInformationManager, &oCInformationManager::OnInfo, void(__fastcall oCInformationManager::*)(oCInfo*), 0x0072D560);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnChoiceBegin, 0x0072D840);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInformationManager, &oCInformationManager::OnChoice, void(__fastcall oCInformationManager::*)(int), 0x0072DA50);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCInformationManager, &oCInformationManager::OnChoice, void(__fastcall oCInformationManager::*)(oCInfoChoice*), 0x0072DC70);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnChoiceEnd, 0x0072DE60);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnInfoEnd, 0x0072DFC0);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnTradeBegin, 0x0072E130);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnTradeEnd, 0x0072E200);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnExit, 0x0072E360);
	ZENGIN_REGISTER_METHOD(oCInformationManager, &oCInformationManager::OnTermination, 0x0072E430);

} // namespace Gothic_I_Classic
