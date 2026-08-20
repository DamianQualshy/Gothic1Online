namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCViewDialog);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::zCViewDialog_OnInit, 0x0079A9A0);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::_GetClassDef, 0x00762350);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::IsActive, 0x00762360);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::Activate, 0x00762370);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::HasFinished, 0x00762380);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::StartSelection, 0x00762390);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::StopSelection, 0x007623A0);

} // namespace Gothic_I_Addon
