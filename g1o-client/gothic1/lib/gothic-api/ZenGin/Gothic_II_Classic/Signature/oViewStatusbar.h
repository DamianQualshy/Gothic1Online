namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCViewStatusBar);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewStatusBar, &oCViewStatusBar::oCViewStatusBar_OnInit, void(oCViewStatusBar::*)(), 0x0043CDE0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewStatusBar, &oCViewStatusBar::oCViewStatusBar_OnInit, void(oCViewStatusBar::*)(int, int, int, int, zTviewID), 0x0043CF10);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::Init, 0x0043CFF0);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetTextures, 0x0043D180);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetMaxRange, 0x0043D570);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetRange, 0x0043D680);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetPreview, 0x0043D750);
	ZENGIN_REGISTER_METHOD(oCViewStatusBar, &oCViewStatusBar::SetValue, 0x0043D760);

} // namespace Gothic_II_Classic
