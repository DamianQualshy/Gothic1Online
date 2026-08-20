namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCViewProgressBar);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::zCViewProgressBar_OnInit, 0x004696F0);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::CalcPercentOf, 0x00469BC0);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::SetPercent, 0x00469BE0);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::SetRange, 0x00469F70);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::ResetRange, 0x0046A050);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::Init, 0x00469A60);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::HandleChange, 0x00469E40);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::Draw, 0x00469F30);

} // namespace Gothic_I_Classic
