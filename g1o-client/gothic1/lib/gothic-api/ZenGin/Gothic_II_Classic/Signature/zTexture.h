namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCTextureFileFormat);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormat, &zCTextureFileFormat::_GetClassDef, 0x005E9FC0);

	ZENGIN_REGISTER_CLASS(zCTextureFileFormatTGA);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::zCTextureFileFormatTGA_OnInit, 0x005E9E70);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGAHeader, 0x005EA060);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGAColorMap, 0x005EA740);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGARLEPixel, 0x005EACC0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGASpan, 0x005EAF30);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGAData, 0x005EB040);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::_GetClassDef, 0x005E9AF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::LoadTexture, int(zCTextureFileFormatTGA::*)(zSTRING const&, zCTextureExchange*), 0x005EB410);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::LoadTexture, int(zCTextureFileFormatTGA::*)(zFILE&, zCTextureExchange*), 0x005EB2A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::SaveTexture, int(zCTextureFileFormatTGA::*)(zSTRING const&, zCTextureExchange*), 0x005E9B00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::SaveTexture, int(zCTextureFileFormatTGA::*)(zFILE&, zCTextureExchange*), 0x005E9B10);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::GetFileExtension, 0x005EA010);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::CanSave, 0x005E9B20);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::CanLoad, 0x005E9B30);

	ZENGIN_REGISTER_CLASS(zCTextureFileFormatInternal);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::zCTextureFileFormatInternal_OnInit, 0x005EB610);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::ReadHeader, 0x005EB7B0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::ReadData, 0x005EB810);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::WriteHeader, 0x005EBC40);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::WriteData, 0x005EBCB0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::_GetClassDef, 0x005E9E40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::LoadTexture, int(zCTextureFileFormatInternal::*)(zSTRING const&, zCTextureExchange*), 0x005EBB10);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::LoadTexture, int(zCTextureFileFormatInternal::*)(zFILE&, zCTextureExchange*), 0x005EBA90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::SaveTexture, int(zCTextureFileFormatInternal::*)(zSTRING const&, zCTextureExchange*), 0x005EBED0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::SaveTexture, int(zCTextureFileFormatInternal::*)(zFILE&, zCTextureExchange*), 0x005EBE10);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::GetFileExtension, 0x005EB760);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::CanSave, 0x005E9E50);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::CanLoad, 0x005E9E60);

	ZENGIN_REGISTER_CLASS(zCTextureExchange);
	ZENGIN_REGISTER_METHOD(zCTextureExchange, &zCTextureExchange::GetMemSizeBytes, 0x005F14A0);
	ZENGIN_REGISTER_METHOD(zCTextureExchange, &zCTextureExchange::GetRGBAAtPtr, 0x005F1AB0);
	ZENGIN_REGISTER_METHOD(zCTextureExchange, &zCTextureExchange::GetRGBAAtTexel, 0x005F1550);

	ZENGIN_REGISTER_CLASS(zCTextureConvert);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureConvert, &zCTextureConvert::LoadFromFileFormat, int(zCTextureConvert::*)(zSTRING const&), 0x005EE180);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureConvert, &zCTextureConvert::SaveToFileFormat, int(zCTextureConvert::*)(zSTRING const&), 0x005EE260);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureConvert, &zCTextureConvert::LoadFromFileFormat, int(zCTextureConvert::*)(zFILE&, zCTextureFileFormat*), 0x005EE340);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureConvert, &zCTextureConvert::SaveToFileFormat, int(zCTextureConvert::*)(zFILE&, zCTextureFileFormat*), 0x005EE370);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::SaveInternal, 0x005EE3A0);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::LoadInternal, 0x005EE430);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::ConvertToNewFormat, 0x005EE4C0);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::ConvertToNewSize, 0x005EE4F0);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::GenerateMipMaps, 0x005EE5E0);

	ZENGIN_REGISTER_CLASS(zCTexture);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::zCTexture_OnInit, 0x005EC5E0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::InitValues, 0x005EC6C0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::IsLightmap, 0x005EC7C0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetAniTexture, 0x005EC810);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::AddAniTex, 0x005EC870);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::PrecacheTexAniFrames, 0x005EC8B0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::ForceConvertAndReloadTexture, 0x005EF3C0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::LoadAndConvertInternal, 0x005EF710);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::SaveAndConvertInternal, 0x005EFA90);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::CacheInNamed, 0x005EFC30);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::IsTextureTileBaseSlice, 0x005F0640);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::CreateTextureTile, 0x005F0670);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetPixelSize, 0x005F0E20);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::_GetClassDef, 0x005EC650);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::LoadResourceData, 0x005EE720);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::ReleaseResourceData, 0x005EE780);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetResSizeBytes, 0x005EE7E0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetCacheConfig, 0x005EE970);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetChromaKeyingEnabled, 0x005EC670);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::SetChromaKeyingEnabled, 0x005EC680);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::HasAlpha, 0x005EC660);

	ZENGIN_REGISTER_CLASS(zCLightMap);
	ZENGIN_REGISTER_METHOD(zCLightMap, &zCLightMap::zCLightMap_OnInit, 0x005F20B0);
	ZENGIN_REGISTER_METHOD(zCLightMap, &zCLightMap::SetTexture, 0x005F21E0);
	ZENGIN_REGISTER_METHOD(zCLightMap, &zCLightMap::CalcLightmapOriginUpRight, 0x005F2220);
	ZENGIN_REGISTER_METHOD(zCLightMap, &zCLightMap::_GetClassDef, 0x005F20A0);

	ZENGIN_REGISTER_CLASS(zCTextureFileHandler);
	ZENGIN_REGISTER_METHOD(zCTextureFileHandler, &zCTextureFileHandler::HandleFile, 0x005F0E50);

} // namespace Gothic_II_Classic
