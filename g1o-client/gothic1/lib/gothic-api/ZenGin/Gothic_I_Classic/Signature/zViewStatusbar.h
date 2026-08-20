namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCViewStatusBar);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewStatusBar, &zCViewStatusBar::zCViewStatusBar_OnInit, void(zCViewStatusBar::*)(), 0x0046A200);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewStatusBar, &zCViewStatusBar::zCViewStatusBar_OnInit, void(zCViewStatusBar::*)(int, int, int, int, zTviewID), 0x0046A270);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::Init, 0x0046A2D0);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::SetMaxRange, 0x0046A320);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::SetRange, 0x0046A3C0);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::SetValue, 0x0046A460);

} // namespace Gothic_I_Classic
