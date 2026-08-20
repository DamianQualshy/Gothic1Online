namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCTexConGeneric);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::zCTexConGeneric_OnInit, 0x0065B740);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::GetAverageColor, 0x0065B6E0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::Lock, 0x0065B840);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::Unlock, 0x0065B860);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::SetTextureInfo, 0x0065B1C0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::GetPaletteBuffer, 0x0065B290);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::GetTextureBuffer, 0x0065B2B0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::GetTextureInfo, 0x0065B270);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::CopyPaletteDataTo, 0x0065B6B0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::CopyTextureDataTo, 0x0065B480);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::HasAlpha, 0x0065B6F0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::ConvertTextureFormat, 0x006598E0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::SetDetailTextureMode, 0x0065B7A0);

} // namespace Gothic_II_Addon
