namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCTexConGeneric);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::zCTexConGeneric_OnInit, 0x0076EC10);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::GetAverageColor, 0x0076EBB0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::Lock, 0x0076ED10);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::Unlock, 0x0076ED30);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::SetTextureInfo, 0x0076E690);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::GetPaletteBuffer, 0x0076E760);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::GetTextureBuffer, 0x0076E780);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::GetTextureInfo, 0x0076E740);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::CopyPaletteDataTo, 0x0076EB80);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::CopyTextureDataTo, 0x0076E950);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::HasAlpha, 0x0076EBC0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::ConvertTextureFormat, 0x0076CDB0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::SetDetailTextureMode, 0x0076EC70);

} // namespace Gothic_II_Classic
