namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCLensFlareFX);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCLensFlareFX, &zCLensFlareFX::RenderLensFlares, void(zCLensFlareFX::*)(zCVob*), 0x00563040);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCLensFlareFX, &zCLensFlareFX::RenderLensFlares, void(zCLensFlareFX::*)(zVEC2&), 0x00563880);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX, &zCLensFlareFX::SetAlpha, 0x00563A10);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX, &zCLensFlareFX::_GetClassDef, 0x00562610);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX, &zCLensFlareFX::Archive, 0x00562AA0);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX, &zCLensFlareFX::Unarchive, 0x00562BF0);

	ZENGIN_REGISTER_CLASS(zCLensFlareFX::zTVobLightLensFlare);
	ZENGIN_REGISTER_METHOD(zCLensFlareFX::zTVobLightLensFlare, &zCLensFlareFX::zTVobLightLensFlare::zTVobLightLensFlare_OnInit, 0x00563020);

} // namespace Gothic_II_Addon
