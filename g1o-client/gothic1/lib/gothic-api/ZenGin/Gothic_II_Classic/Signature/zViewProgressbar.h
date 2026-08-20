namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCViewProgressBar);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::zCViewProgressBar_OnInit, 0x0046DDA0);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::CalcPercentOf, 0x0046E270);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::SetPercent, 0x0046E290);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::SetRange, 0x0046E710);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::ResetRange, 0x0046E7D0);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::Init, 0x0046E110);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::HandleChange, 0x0046E560);
	ZENGIN_REGISTER_METHOD(zCViewProgressBar, &zCViewProgressBar::Draw, 0x0046E6D0);

} // namespace Gothic_II_Classic
