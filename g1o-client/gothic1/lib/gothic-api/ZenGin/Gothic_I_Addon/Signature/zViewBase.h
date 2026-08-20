namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCViewBase);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::zCViewBase_OnInit, 0x007952F0);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::anx, 0x00795300);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::any, 0x00795310);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::nax, 0x00795320);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::nay, 0x00795330);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::ClipLine, 0x00795340);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::Line, 0x00795350);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::GetViewport, 0x00795360);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::GetCode, 0x00795370);

} // namespace Gothic_I_Addon
