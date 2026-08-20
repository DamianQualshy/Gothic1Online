namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCViewDialog);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::zCViewDialog_OnInit, 0x007A5310);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::_GetClassDef, 0x00771560);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::IsActive, 0x00771570);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::Activate, 0x00771580);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::HasFinished, 0x00771590);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::StartSelection, 0x007715A0);
	ZENGIN_REGISTER_METHOD(zCViewDialog, &zCViewDialog::StopSelection, 0x007715B0);

} // namespace Gothic_II_Classic
