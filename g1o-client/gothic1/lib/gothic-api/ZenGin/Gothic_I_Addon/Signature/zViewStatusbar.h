namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCViewStatusBar);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewStatusBar, &zCViewStatusBar::zCViewStatusBar_OnInit, void(zCViewStatusBar::*)(), 0x00472370);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewStatusBar, &zCViewStatusBar::zCViewStatusBar_OnInit, void(zCViewStatusBar::*)(int, int, int, int, zTviewID), 0x004723E0);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::Init, 0x00472450);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::SetMaxRange, 0x004724A0);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::SetRange, 0x00472540);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::SetPreview, 0x004725E0);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::SetValue, 0x00472630);

} // namespace Gothic_I_Addon
