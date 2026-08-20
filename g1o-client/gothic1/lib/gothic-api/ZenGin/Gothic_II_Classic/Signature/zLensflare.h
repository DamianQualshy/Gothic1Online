namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCLensFlareFX);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCLensFlareFX, &zCLensFlareFX::RenderLensFlares, void(zCLensFlareFX::*)(zCVob*), 0x0055DE20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCLensFlareFX, &zCLensFlareFX::RenderLensFlares, void(zCLensFlareFX::*)(zVEC2&), 0x0055E660);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX, &zCLensFlareFX::SetAlpha, 0x0055E7F0);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX, &zCLensFlareFX::_GetClassDef, 0x0055D3F0);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX, &zCLensFlareFX::Archive, 0x0055D880);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX, &zCLensFlareFX::Unarchive, 0x0055D9D0);

	ZENGIN_REGISTER_CLASS(zCLensFlareFX::zTVobLightLensFlare);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX::zTVobLightLensFlare, &zCLensFlareFX::zTVobLightLensFlare::zTVobLightLensFlare_OnInit, 0x0055DE00);

} // namespace Gothic_II_Classic
