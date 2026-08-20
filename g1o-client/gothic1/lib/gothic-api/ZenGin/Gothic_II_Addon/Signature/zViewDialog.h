namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCViewDialog);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::zCViewDialog_OnInit, 0x0068E5A0);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::_GetClassDef, 0x0068C5E0);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::IsActive, 0x00688FD0);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::Activate, 0x006895B0);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::HasFinished, 0x00688FE0);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::StartSelection, 0x006895C0);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::StopSelection, 0x006895D0);

} // namespace Gothic_II_Addon
