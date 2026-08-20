namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCTextureFileFormat);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormat, &zCTextureFileFormat::_GetClassDef, 0x005C62F0);

	ZENGIN_REGISTER_CLASS(zCTextureFileFormatTGA);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::zCTextureFileFormatTGA_OnInit, 0x005C61A0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGAHeader, 0x005C6390);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGAColorMap, 0x005C69C0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGARLEPixel, 0x005C6F40);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGASpan, 0x005C71B0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGAData, 0x005C72C0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::_GetClassDef, 0x005C5E20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::LoadTexture, int(zCTextureFileFormatTGA::*)(zSTRING const&, zCTextureExchange*), 0x005C7690);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::LoadTexture, int(zCTextureFileFormatTGA::*)(zFILE&, zCTextureExchange*), 0x005C7520);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::SaveTexture, int(zCTextureFileFormatTGA::*)(zSTRING const&, zCTextureExchange*), 0x005C5E30);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::SaveTexture, int(zCTextureFileFormatTGA::*)(zFILE&, zCTextureExchange*), 0x005C5E40);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::GetFileExtension, 0x005C6340);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::CanSave, 0x005C5E50);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::CanLoad, 0x005C5E60);

	ZENGIN_REGISTER_CLASS(zCTextureFileFormatInternal);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::zCTextureFileFormatInternal_OnInit, 0x005C7890);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::ReadHeader, 0x005C7A30);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::ReadData, 0x005C7A90);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::WriteHeader, 0x005C7EC0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::WriteData, 0x005C7F30);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::_GetClassDef, 0x005C6170);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::LoadTexture, int(zCTextureFileFormatInternal::*)(zSTRING const&, zCTextureExchange*), 0x005C7D90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::LoadTexture, int(zCTextureFileFormatInternal::*)(zFILE&, zCTextureExchange*), 0x005C7D10);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::SaveTexture, int(zCTextureFileFormatInternal::*)(zSTRING const&, zCTextureExchange*), 0x005C8150);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::SaveTexture, int(zCTextureFileFormatInternal::*)(zFILE&, zCTextureExchange*), 0x005C8090);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::GetFileExtension, 0x005C79E0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::CanSave, 0x005C6180);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::CanLoad, 0x005C6190);

	ZENGIN_REGISTER_CLASS(zCTextureExchange);
	ZENGIN_REGISTER_METHOD(zCTextureExchange, &zCTextureExchange::GetMemSizeBytes, 0x005CD220);
	ZENGIN_REGISTER_METHOD(zCTextureExchange, &zCTextureExchange::GetRGBAAtPtr, 0x005CD760);
	ZENGIN_REGISTER_METHOD(zCTextureExchange, &zCTextureExchange::GetRGBAAtTexel, 0x005CD2D0);

	ZENGIN_REGISTER_CLASS(zCTextureConvert);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureConvert, &zCTextureConvert::LoadFromFileFormat, int(zCTextureConvert::*)(zSTRING const&), 0x005CA000);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureConvert, &zCTextureConvert::SaveToFileFormat, int(zCTextureConvert::*)(zSTRING const&), 0x005CA0E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureConvert, &zCTextureConvert::LoadFromFileFormat, int(zCTextureConvert::*)(zFILE&, zCTextureFileFormat*), 0x005CA1C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureConvert, &zCTextureConvert::SaveToFileFormat, int(zCTextureConvert::*)(zFILE&, zCTextureFileFormat*), 0x005CA1F0);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::SaveInternal, 0x005CA220);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::LoadInternal, 0x005CA2D0);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::ConvertToNewFormat, 0x005CA380);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::ConvertToNewSize, 0x005CA3B0);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::GenerateMipMaps, 0x005CA4A0);

	ZENGIN_REGISTER_CLASS(zCTexture);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::zCTexture_OnInit, 0x005C87E0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::InitValues, 0x005C88C0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::IsLightmap, 0x005C89C0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetAniTexture, 0x005C8A10);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::AddAniTex, 0x005C8A70);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::PrecacheTexAniFrames, 0x005C8AB0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::ForceConvertAndReloadTexture, 0x005CB1A0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::LoadAndConvertInternal, 0x005CB4F0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::SaveAndConvertInternal, 0x005CB890);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::CacheInNamed, 0x005CBA70);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::IsTextureTileBaseSlice, 0x005CC470);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::CreateTextureTile, 0x005CC4A0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetPixelSize, 0x005CCBD0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::_GetClassDef, 0x005C8850);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::LoadResourceData, 0x005CA5E0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::ReleaseResourceData, 0x005CA640);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetResSizeBytes, 0x005CA6A0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetCacheConfig, 0x005CA830);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetChromaKeyingEnabled, 0x005C8870);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::SetChromaKeyingEnabled, 0x005C8880);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::HasAlpha, 0x005C8860);

	ZENGIN_REGISTER_CLASS(zCLightMap);
	ZENGIN_REGISTER_METHOD(zCLightMap, &zCLightMap::zCLightMap_OnInit, 0x005CDD70);
	ZENGIN_REGISTER_METHOD(zCLightMap, &zCLightMap::SetTexture, 0x005CDEA0);
	ZENGIN_REGISTER_METHOD(zCLightMap, &zCLightMap::CalcLightmapOriginUpRight, 0x005CDEE0);
	ZENGIN_REGISTER_METHOD(zCLightMap, &zCLightMap::_GetClassDef, 0x005CDD60);

	ZENGIN_REGISTER_CLASS(zCTextureFileHandler);
	ZENGIN_REGISTER_METHOD(zCTextureFileHandler, &zCTextureFileHandler::HandleFile, 0x005CCC00);

} // namespace Gothic_I_Classic
