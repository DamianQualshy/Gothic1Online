namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCMagFrontier);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::oCMagFrontier_OnInit, 0x004736A0);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::SetNPC, 0x00473730);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DoCheck, 0x00473740);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::GetDistanceNewWorld, 0x00473F20);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::GetDistanceDragonIsland, 0x00474460);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::GetDistanceAddonWorld, 0x00474620);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::StartLightningAtPos, 0x00474750);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DoWarningFX, 0x00474CB0);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DisposeWarningFX, 0x00474E70);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DoShootFX, 0x00474EB0);
	ZENGIN_REGISTER_METHOD(oCMagFrontier, &oCMagFrontier::DisposeShootFX, 0x004751A0);

} // namespace Gothic_II_Addon
