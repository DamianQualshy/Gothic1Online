namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCLensFlareFX);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCLensFlareFX, &zCLensFlareFX::RenderLensFlares, void(zCLensFlareFX::*)(zCVob*), 0x0054C290);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCLensFlareFX, &zCLensFlareFX::RenderLensFlares, void(zCLensFlareFX::*)(zVEC2&), 0x0054CA10);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX, &zCLensFlareFX::SetAlpha, 0x0054CBA0);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX, &zCLensFlareFX::_GetClassDef, 0x0054B8A0);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX, &zCLensFlareFX::Archive, 0x0054BD10);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX, &zCLensFlareFX::Unarchive, 0x0054BE30);

	ZENGIN_REGISTER_CLASS(zCLensFlareFX::zTVobLightLensFlare);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX::zTVobLightLensFlare, &zCLensFlareFX::zTVobLightLensFlare::zTVobLightLensFlare_OnInit, 0x0054C270);

} // namespace Gothic_I_Classic
