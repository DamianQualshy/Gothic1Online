namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCViewStatusBar);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewStatusBar, &zCViewStatusBar::zCViewStatusBar_OnInit, void(zCViewStatusBar::*)(), 0x0046E970);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewStatusBar, &zCViewStatusBar::zCViewStatusBar_OnInit, void(zCViewStatusBar::*)(int, int, int, int, zTviewID), 0x0046E9E0);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::Init, 0x0046EA50);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::SetMaxRange, 0x0046EAA0);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::SetRange, 0x0046EB40);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::SetPreview, 0x0046EBE0);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::SetValue, 0x0046EC30);

} // namespace Gothic_II_Classic
