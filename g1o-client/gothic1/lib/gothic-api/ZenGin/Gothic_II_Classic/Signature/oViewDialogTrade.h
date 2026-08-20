namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCViewDialogTrade);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::oCViewDialogTrade_OnInit, 0x00775080);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::UpdateViewSettings, 0x00774FE0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::AllDialogsStop, 0x00775410);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::AllDialogsDisable, 0x00775430);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::SetNpcLeft, 0x00775450);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::SetNpcRight, 0x00775560);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::Update, 0x00775A20);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnKeyEnter, 0x00775A40);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnKeyEsc, 0x00775A50);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnMoveLeft, 0x00775A60);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnTransferLeft, 0x00775B10);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnMoveRight, 0x00775D30);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnTransferRight, 0x00775DE0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnSectionPrevious, 0x00776170);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnSectionNext, 0x007761F0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnSection, 0x00776270);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::OnExit, 0x007762D0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::_GetClassDef, 0x007752E0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::StartSelection, 0x00775610);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::GetTransferCount, 0x007752F0);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::SetTransferCount, 0x00775300);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::IncTransferCount, 0x00775310);
	ZENGIN_REGISTER_METHOD(oCViewDialogTrade, &oCViewDialogTrade::HandleEvent, 0x007756B0);

} // namespace Gothic_II_Classic
