namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCViewStatusBar);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewStatusBar, &oCViewStatusBar::oCViewStatusBar_OnInit, void(oCViewStatusBar::*)(), 0x00439990);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewStatusBar, &oCViewStatusBar::oCViewStatusBar_OnInit, void(oCViewStatusBar::*)(int, int, int, int, zTviewID), 0x00439AC0);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::Init, 0x00439BA0);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetTextures, 0x00439D40);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetMaxRange, 0x0043A130);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetRange, 0x0043A240);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetValue, 0x0043A300);

} // namespace Gothic_I_Classic
