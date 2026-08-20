namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCViewDialogTrade);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::oCViewDialogTrade_OnInit, 0x00766910);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::UpdateViewSettings, 0x00766750);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::AllDialogsStop, 0x007671A0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::AllDialogsDisable, 0x007671E0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::TransferAccept, 0x00767230);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::TransferReset, 0x00767290);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::SetNpcLeft, 0x007672E0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::SetNpcRight, 0x00767420);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::Update, 0x00767EB0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnKeyEnter, 0x00767ED0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnKeyEsc, 0x00767FD0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnKeyLeft, 0x00768050);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnMoveLeft, 0x00768130);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewDialogTrade, &oCViewDialogTrade::OnTransferLeft, int(__fastcall oCViewDialogTrade::*)(int), 0x007681E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewDialogTrade, &oCViewDialogTrade::OnTransferLeft, int(__fastcall oCViewDialogTrade::*)(short), 0x00768300);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnKeyRight, 0x007683E0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnMoveRight, 0x007684C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewDialogTrade, &oCViewDialogTrade::OnTransferRight, int(__fastcall oCViewDialogTrade::*)(int), 0x00768570);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewDialogTrade, &oCViewDialogTrade::OnTransferRight, int(__fastcall oCViewDialogTrade::*)(short), 0x00768690);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnSectionPrevious, 0x00768770);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnSectionNext, 0x00768790);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnSection, 0x007687B0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnChoice, 0x00768890);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnAccept, 0x00768960);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnRecline, 0x00768AE0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnBack, 0x00768B40);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnReset, 0x00768B50);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnExit, 0x00768BB0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::_GetClassDef, 0x00766FF0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::StartSelection, 0x00767500);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::GetTransferCount, 0x00767000);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::SetTransferCount, 0x00767010);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::IncTransferCount, 0x00767020);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::HandleEvent, 0x00767890);

} // namespace Gothic_I_Addon
