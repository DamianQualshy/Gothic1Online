namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCViewStatusBar);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewStatusBar, &oCViewStatusBar::oCViewStatusBar_OnInit, void(oCViewStatusBar::*)(), 0x0043D410);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewStatusBar, &oCViewStatusBar::oCViewStatusBar_OnInit, void(oCViewStatusBar::*)(int, int, int, int, zTviewID), 0x0043D540);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::Init, 0x0043D620);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetTextures, 0x0043D7B0);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetMaxRange, 0x0043DBA0);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetRange, 0x0043DCB0);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetPreview, 0x0043DD80);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetValue, 0x0043DD90);

} // namespace Gothic_II_Addon
