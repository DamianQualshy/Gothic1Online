namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCTexConGeneric);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::zCTexConGeneric_OnInit, 0x0075F640);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::GetAverageColor, 0x0075F5D0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::Lock, 0x0075F740);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::Unlock, 0x0075F760);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::SetTextureInfo, 0x0075F010);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::GetPaletteBuffer, 0x0075F0F0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::GetTextureBuffer, 0x0075F110);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::GetTextureInfo, 0x0075F0D0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::CopyPaletteDataTo, 0x0075F5A0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::CopyTextureDataTo, 0x0075F300);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::HasAlpha, 0x0075F5E0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::ConvertTextureFormat, 0x0075D770);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::SetDetailTextureMode, 0x0075F6A0);

} // namespace Gothic_I_Addon
