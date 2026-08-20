namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCMagFrontier);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::oCMagFrontier_OnInit, 0x0046D590);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::SetNPC, 0x0046D620);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DoCheck, 0x0046D630);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::GetDistance, 0x0046DC00);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::StartLightningAtPos, 0x0046DDA0);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DoWarningFX, 0x0046E380);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DisposeWarningFX, 0x0046E550);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DoShootFX, 0x0046E590);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DisposeShootFX, 0x0046E8A0);

} // namespace Gothic_I_Classic
