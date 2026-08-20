namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCViewStatusBar);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewStatusBar, &zCViewStatusBar::zCViewStatusBar_OnInit, void(zCViewStatusBar::*)(), 0x0046F5A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewStatusBar, &zCViewStatusBar::zCViewStatusBar_OnInit, void(zCViewStatusBar::*)(int, int, int, int, zTviewID), 0x0046F610);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::Init, 0x0046F680);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::SetMaxRange, 0x0046F6D0);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::SetRange, 0x0046F770);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::SetPreview, 0x0046F810);
	ZENGIN_REGISTER_METHOD(zCViewStatusBar, &zCViewStatusBar::SetValue, 0x0046F860);

} // namespace Gothic_II_Addon
