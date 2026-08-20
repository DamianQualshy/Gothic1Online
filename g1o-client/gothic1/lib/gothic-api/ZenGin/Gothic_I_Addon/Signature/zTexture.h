namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCTextureFileFormat);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormat, &zCTextureFileFormat::_GetClassDef, 0x005E4720);

	ZENGIN_REGISTER_CLASS(zCTextureFileFormatTGA);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::zCTextureFileFormatTGA_OnInit, 0x005E45C0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGAHeader, 0x005E47C0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGAColorMap, 0x005E4F00);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGARLEPixel, 0x005E55C0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGASpan, 0x005E58C0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGAData, 0x005E5A00);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::_GetClassDef, 0x005E4220);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::LoadTexture, int(zCTextureFileFormatTGA::*)(zSTRING const&, zCTextureExchange*), 0x005E5E10);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::LoadTexture, int(zCTextureFileFormatTGA::*)(zFILE&, zCTextureExchange*), 0x005E5C90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::SaveTexture, int(zCTextureFileFormatTGA::*)(zSTRING const&, zCTextureExchange*), 0x005E4230);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::SaveTexture, int(zCTextureFileFormatTGA::*)(zFILE&, zCTextureExchange*), 0x005E4240);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::GetFileExtension, 0x005E4770);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::CanSave, 0x005E4250);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::CanLoad, 0x005E4260);

	ZENGIN_REGISTER_CLASS(zCTextureFileFormatInternal);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::zCTextureFileFormatInternal_OnInit, 0x005E6070);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::ReadHeader, 0x005E6210);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::ReadData, 0x005E6270);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::WriteHeader, 0x005E66C0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::WriteData, 0x005E6730);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::_GetClassDef, 0x005E4590);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::LoadTexture, int(zCTextureFileFormatInternal::*)(zSTRING const&, zCTextureExchange*), 0x005E6560);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::LoadTexture, int(zCTextureFileFormatInternal::*)(zFILE&, zCTextureExchange*), 0x005E64E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::SaveTexture, int(zCTextureFileFormatInternal::*)(zSTRING const&, zCTextureExchange*), 0x005E6940);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::SaveTexture, int(zCTextureFileFormatInternal::*)(zFILE&, zCTextureExchange*), 0x005E6880);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::GetFileExtension, 0x005E61C0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::CanSave, 0x005E45A0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::CanLoad, 0x005E45B0);

	ZENGIN_REGISTER_CLASS(zCTextureExchange);
	ZENGIN_REGISTER_METHOD(zCTextureExchange, &zCTextureExchange::GetMemSizeBytes, 0x005EBE10);
	ZENGIN_REGISTER_METHOD(zCTextureExchange, &zCTextureExchange::GetRGBAAtPtr, 0x005EC350);
	ZENGIN_REGISTER_METHOD(zCTextureExchange, &zCTextureExchange::GetRGBAAtTexel, 0x005EBEC0);

	ZENGIN_REGISTER_CLASS(zCTextureConvert);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureConvert, &zCTextureConvert::LoadFromFileFormat, int(zCTextureConvert::*)(zSTRING const&), 0x005E8A30);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureConvert, &zCTextureConvert::SaveToFileFormat, int(zCTextureConvert::*)(zSTRING const&), 0x005E8B10);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureConvert, &zCTextureConvert::LoadFromFileFormat, int(zCTextureConvert::*)(zFILE&, zCTextureFileFormat*), 0x005E8BF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureConvert, &zCTextureConvert::SaveToFileFormat, int(zCTextureConvert::*)(zFILE&, zCTextureFileFormat*), 0x005E8C20);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::SaveInternal, 0x005E8C50);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::LoadInternal, 0x005E8D00);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::ConvertToNewFormat, 0x005E8DB0);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::ConvertToNewSize, 0x005E8DF0);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::GenerateMipMaps, 0x005E8EE0);

	ZENGIN_REGISTER_CLASS(zCTexture);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::zCTexture_OnInit, 0x005E70B0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::InitValues, 0x005E7190);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::IsLightmap, 0x005E72A0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetAniTexture, 0x005E72F0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::AddAniTex, 0x005E7340);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::PrecacheTexAniFrames, 0x005E7370);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::ForceConvertAndReloadTexture, 0x005E9B60);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::LoadAndConvertInternal, 0x005E9EE0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::SaveAndConvertInternal, 0x005EA2E0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::CacheInNamed, 0x005EA4D0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::IsTextureTileBaseSlice, 0x005EB040);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::CreateTextureTile, 0x005EB070);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetPixelSize, 0x005EB740);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::_GetClassDef, 0x005E7120);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::LoadResourceData, 0x005E9020);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::ReleaseResourceData, 0x005E9080);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetResSizeBytes, 0x005E90F0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetCacheConfig, 0x005E9120);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetChromaKeyingEnabled, 0x005E7140);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::SetChromaKeyingEnabled, 0x005E7150);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::HasAlpha, 0x005E7130);

	ZENGIN_REGISTER_CLASS(zCLightMap);
	ZENGIN_REGISTER_METHOD(zCLightMap, &zCLightMap::zCLightMap_OnInit, 0x005ECA60);
	ZENGIN_REGISTER_METHOD(zCLightMap, &zCLightMap::SetTexture, 0x005ECB90);
	ZENGIN_REGISTER_METHOD(zCLightMap, &zCLightMap::CalcLightmapOriginUpRight, 0x005ECBE0);
	ZENGIN_REGISTER_METHOD(zCLightMap, &zCLightMap::_GetClassDef, 0x005ECA50);

	ZENGIN_REGISTER_CLASS(zCTextureFileHandler);
	ZENGIN_REGISTER_METHOD(zCTextureFileHandler, &zCTextureFileHandler::HandleFile, 0x005EB780);

} // namespace Gothic_I_Addon
