namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCViewProgressBar);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::zCViewProgressBar_OnInit, 0x00471830);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::CalcPercentOf, 0x00471CF0);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::SetPercent, 0x00471D10);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::SetRange, 0x004720F0);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::ResetRange, 0x004721C0);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::Init, 0x00471BA0);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::HandleChange, 0x00471FB0);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::Draw, 0x004720B0);

} // namespace Gothic_I_Addon
