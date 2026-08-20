namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCViewDialogTrade);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::oCViewDialogTrade_OnInit, 0x00728B50);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::UpdateViewSettings, 0x00728990);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::AllDialogsStop, 0x00729300);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::AllDialogsDisable, 0x00729340);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::TransferAccept, 0x00729390);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::TransferReset, 0x007293F0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::SetNpcLeft, 0x00729440);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::SetNpcRight, 0x00729580);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::Update, 0x00729FD0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnKeyEnter, 0x00729FF0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnKeyEsc, 0x0072A100);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnKeyLeft, 0x0072A180);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnMoveLeft, 0x0072A230);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnTransferLeft, 0x0072A2B0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnKeyRight, 0x0072A400);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnMoveRight, 0x0072A4B0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnTransferRight, 0x0072A530);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnSectionPrevious, 0x0072A680);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnSectionNext, 0x0072A6A0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnSection, 0x0072A6C0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnChoice, 0x0072A7A0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnAccept, 0x0072A870);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnRecline, 0x0072A9E0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnBack, 0x0072AA40);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnReset, 0x0072AA50);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnExit, 0x0072AAB0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::_GetClassDef, 0x00729190);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::StartSelection, 0x00729660);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::HandleEvent, 0x007299A0);

} // namespace Gothic_I_Classic
