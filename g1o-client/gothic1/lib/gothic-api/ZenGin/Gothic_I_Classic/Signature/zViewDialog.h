namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCViewDialog);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::zCViewDialog_OnInit, 0x00758450);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::_GetClassDef, 0x007250D0);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::IsActive, 0x007250E0);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::Activate, 0x007250F0);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::HasFinished, 0x00725100);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::StartSelection, 0x00725110);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::StopSelection, 0x00725120);

} // namespace Gothic_I_Classic
