namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCMagFrontier);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::oCMagFrontier_OnInit, 0x00475CD0);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::SetNPC, 0x00475D60);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DoCheck, 0x00475D70);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::GetDistance, 0x00476500);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::StartLightningAtPos, 0x00476790);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DoWarningFX, 0x00476DB0);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DisposeWarningFX, 0x00476FD0);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DoShootFX, 0x00477010);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DisposeShootFX, 0x00477440);

} // namespace Gothic_I_Addon
