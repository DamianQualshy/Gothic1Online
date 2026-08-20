namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCTexConGeneric);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::zCTexConGeneric_OnInit, 0x00722B70);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::GetAverageColor, 0x00722B10);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::Lock, 0x00722C70);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::Unlock, 0x00722C90);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::SetTextureInfo, 0x007225E0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::GetPaletteBuffer, 0x007226C0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::GetTextureBuffer, 0x007226E0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::GetTextureInfo, 0x007226A0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::CopyPaletteDataTo, 0x00722AE0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::CopyTextureDataTo, 0x007228B0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::HasAlpha, 0x00722B20);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::ConvertTextureFormat, 0x00720DC0);
	ZENGIN_REGISTER_METHOD(zCTexConGeneric, &zCTexConGeneric::SetDetailTextureMode, 0x00722BD0);

} // namespace Gothic_I_Classic
