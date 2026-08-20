namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCViewDialogTrade);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::oCViewDialogTrade_OnInit, 0x0068ADB0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::UpdateViewSettings, 0x0068AD10);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::AllDialogsStop, 0x0068B140);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::AllDialogsDisable, 0x0068B160);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::SetNpcLeft, 0x0068B180);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::SetNpcRight, 0x0068B290);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::Update, 0x0068B750);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnKeyEnter, 0x0068B770);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnKeyEsc, 0x0068B780);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnMoveLeft, 0x0068B790);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnTransferLeft, 0x0068B840);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnMoveRight, 0x0068BA60);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnTransferRight, 0x0068BB10);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnSectionPrevious, 0x0068BEA0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnSectionNext, 0x0068BF20);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnSection, 0x0068BFA0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnExit, 0x0068C000);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::_GetClassDef, 0x0068B010);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::StartSelection, 0x0068B340);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::GetTransferCount, 0x0068B020);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::SetTransferCount, 0x0068B030);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::IncTransferCount, 0x0068B040);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::HandleEvent, 0x0068B3E0);

} // namespace Gothic_II_Addon
