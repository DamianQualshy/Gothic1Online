namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCViewProgressBar);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::zCViewProgressBar_OnInit, 0x0046E9D0);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::CalcPercentOf, 0x0046EEA0);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::SetPercent, 0x0046EEC0);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::SetRange, 0x0046F340);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::ResetRange, 0x0046F400);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::Init, 0x0046ED40);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::HandleChange, 0x0046F190);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::Draw, 0x0046F300);

} // namespace Gothic_II_Addon
