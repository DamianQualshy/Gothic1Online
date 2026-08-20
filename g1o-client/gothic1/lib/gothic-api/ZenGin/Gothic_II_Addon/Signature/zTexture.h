namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCTextureFileFormat);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormat, &zCTextureFileFormat::_GetClassDef, 0x005F0D70);

	ZENGIN_REGISTER_CLASS(zCTextureFileFormatTGA);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::zCTextureFileFormatTGA_OnInit, 0x005F0C20);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGAHeader, 0x005F0E10);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGAColorMap, 0x005F14F0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGARLEPixel, 0x005F1A70);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGASpan, 0x005F1CE0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::ReadTGAData, 0x005F1DF0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::_GetClassDef, 0x005F08A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::LoadTexture, int(zCTextureFileFormatTGA::*)(zSTRING const&, zCTextureExchange*), 0x005F21C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::LoadTexture, int(zCTextureFileFormatTGA::*)(zFILE&, zCTextureExchange*), 0x005F2050);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::SaveTexture, int(zCTextureFileFormatTGA::*)(zSTRING const&, zCTextureExchange*), 0x005F08B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::SaveTexture, int(zCTextureFileFormatTGA::*)(zFILE&, zCTextureExchange*), 0x005F08C0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::GetFileExtension, 0x005F0DC0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::CanSave, 0x005F08D0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatTGA, &zCTextureFileFormatTGA::CanLoad, 0x005F08E0);

	ZENGIN_REGISTER_CLASS(zCTextureFileFormatInternal);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::zCTextureFileFormatInternal_OnInit, 0x005F23C0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::ReadHeader, 0x005F2560);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::ReadData, 0x005F25C0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::WriteHeader, 0x005F29F0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::WriteData, 0x005F2A60);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::_GetClassDef, 0x005F0BF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::LoadTexture, int(zCTextureFileFormatInternal::*)(zSTRING const&, zCTextureExchange*), 0x005F28C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::LoadTexture, int(zCTextureFileFormatInternal::*)(zFILE&, zCTextureExchange*), 0x005F2840);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::SaveTexture, int(zCTextureFileFormatInternal::*)(zSTRING const&, zCTextureExchange*), 0x005F2C80);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::SaveTexture, int(zCTextureFileFormatInternal::*)(zFILE&, zCTextureExchange*), 0x005F2BC0);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::GetFileExtension, 0x005F2510);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::CanSave, 0x005F0C00);
	ZENGIN_REGISTER_METHOD(zCTextureFileFormatInternal, &zCTextureFileFormatInternal::CanLoad, 0x005F0C10);

	ZENGIN_REGISTER_CLASS(zCTextureExchange);
	ZENGIN_REGISTER_METHOD(zCTextureExchange, &zCTextureExchange::GetMemSizeBytes, 0x005F8290);
	ZENGIN_REGISTER_METHOD(zCTextureExchange, &zCTextureExchange::GetRGBAAtPtr, 0x005F88A0);
	ZENGIN_REGISTER_METHOD(zCTextureExchange, &zCTextureExchange::GetRGBAAtTexel, 0x005F8340);

	ZENGIN_REGISTER_CLASS(zCTextureConvert);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureConvert, &zCTextureConvert::LoadFromFileFormat, int(zCTextureConvert::*)(zSTRING const&), 0x005F4F30);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureConvert, &zCTextureConvert::SaveToFileFormat, int(zCTextureConvert::*)(zSTRING const&), 0x005F5010);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureConvert, &zCTextureConvert::LoadFromFileFormat, int(zCTextureConvert::*)(zFILE&, zCTextureFileFormat*), 0x005F50F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCTextureConvert, &zCTextureConvert::SaveToFileFormat, int(zCTextureConvert::*)(zFILE&, zCTextureFileFormat*), 0x005F5120);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::SaveInternal, 0x005F5150);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::LoadInternal, 0x005F51E0);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::ConvertToNewFormat, 0x005F5270);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::ConvertToNewSize, 0x005F52A0);
	ZENGIN_REGISTER_METHOD(zCTextureConvert, &zCTextureConvert::GenerateMipMaps, 0x005F5390);

	ZENGIN_REGISTER_CLASS(zCTexture);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::zCTexture_OnInit, 0x005F3390);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::InitValues, 0x005F3470);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::IsLightmap, 0x005F3570);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetAniTexture, 0x005F35C0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::AddAniTex, 0x005F3620);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::PrecacheTexAniFrames, 0x005F3660);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::ForceConvertAndReloadTexture, 0x005F6170);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::LoadAndConvertInternal, 0x005F64C0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::SaveAndConvertInternal, 0x005F6840);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::CacheInNamed, 0x005F69E0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::IsTextureTileBaseSlice, 0x005F73F0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::CreateTextureTile, 0x005F7420);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetPixelSize, 0x005F7C10);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::_GetClassDef, 0x005F3400);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::LoadResourceData, 0x005F54D0);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::ReleaseResourceData, 0x005F5530);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetResSizeBytes, 0x005F5590);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetCacheConfig, 0x005F5720);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::GetChromaKeyingEnabled, 0x005F3420);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::SetChromaKeyingEnabled, 0x005F3430);
	ZENGIN_REGISTER_METHOD(zCTexture, &zCTexture::HasAlpha, 0x005F3410);

	ZENGIN_REGISTER_CLASS(zCLightMap);
	ZENGIN_REGISTER_METHOD(zCLightMap, &zCLightMap::zCLightMap_OnInit, 0x005F8EA0);
	ZENGIN_REGISTER_METHOD(zCLightMap, &zCLightMap::SetTexture, 0x005F8FD0);
	ZENGIN_REGISTER_METHOD(zCLightMap, &zCLightMap::CalcLightmapOriginUpRight, 0x005F9010);
	ZENGIN_REGISTER_METHOD(zCLightMap, &zCLightMap::_GetClassDef, 0x005F8E90);

	ZENGIN_REGISTER_CLASS(zCTextureFileHandler);
	ZENGIN_REGISTER_METHOD(zCTextureFileHandler, &zCTextureFileHandler::HandleFile, 0x005F7C40);

} // namespace Gothic_II_Addon
