namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCLensFlareFX);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCLensFlareFX, &zCLensFlareFX::RenderLensFlares, void(zCLensFlareFX::*)(zCVob*), 0x005645C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCLensFlareFX, &zCLensFlareFX::RenderLensFlares, void(zCLensFlareFX::*)(zVEC2&), 0x00564D40);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX, &zCLensFlareFX::SetAlpha, 0x00564F20);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX, &zCLensFlareFX::_GetClassDef, 0x00563B50);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX, &zCLensFlareFX::Archive, 0x00564000);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX, &zCLensFlareFX::Unarchive, 0x00564120);

	ZENGIN_REGISTER_CLASS(zCLensFlareFX::zTVobLightLensFlare);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX::zTVobLightLensFlare, &zCLensFlareFX::zTVobLightLensFlare::zTVobLightLensFlare_OnInit, 0x005645A0);

} // namespace Gothic_I_Addon
