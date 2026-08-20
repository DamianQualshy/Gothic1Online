namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCViewStatusBar);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewStatusBar, &oCViewStatusBar::oCViewStatusBar_OnInit, void(oCViewStatusBar::*)(), 0x0043E460);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewStatusBar, &oCViewStatusBar::oCViewStatusBar_OnInit, void(oCViewStatusBar::*)(int, int, int, int, zTviewID), 0x0043E5B0);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::Init, 0x0043E6C0);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetTextures, 0x0043E8E0);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetMaxRange, 0x0043EDC0);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetRange, 0x0043EEE0);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetPreview, 0x0043EFB0);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetValue, 0x0043F020);

} // namespace Gothic_I_Addon
