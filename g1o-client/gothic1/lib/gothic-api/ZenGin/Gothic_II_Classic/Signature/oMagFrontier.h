namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCMagFrontier);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::oCMagFrontier_OnInit, 0x00472580);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::SetNPC, 0x00472610);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DoCheck, 0x00472620);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::GetDistanceNewWorld, 0x00472D40);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::GetDistanceDragonIsland, 0x00473280);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::StartLightningAtPos, 0x004733B0);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DoWarningFX, 0x00473910);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DisposeWarningFX, 0x00473AD0);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DoShootFX, 0x00473B10);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DisposeShootFX, 0x00473E00);

} // namespace Gothic_II_Classic
