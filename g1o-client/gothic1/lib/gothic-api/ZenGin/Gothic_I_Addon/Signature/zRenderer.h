namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCRenderLight);
	ZENGIN_REGISTER_METHOD(zCRenderLight, &zCRenderLight::zCRenderLight_OnInit, 0x00578E60);

	ZENGIN_REGISTER_CLASS(zCRndAlphaSortObject);
	ZENGIN_REGISTER_METHOD(zCRndAlphaSortObject, &zCRndAlphaSortObject::IsAlphaPoly, 0x0052D790);

	ZENGIN_REGISTER_CLASS(zCRenderer);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::AlphaBlendFuncStringToType, 0x005CB5A0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::AlphaBlendFuncTypeToString, 0x005CB690);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::Vid_SetMode_novt, 0x005CB910);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetTexFormatInfo, 0x005CB9B0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::DrawTile, 0x005CB9E0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::DrawLightmapList, 0x0074F620);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::DrawLineZ, 0x0074F630);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::DrawPolySimple, 0x0074F640);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetFog, 0x0074F650);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetFogColor, 0x0074F660);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetFogRange, 0x0074F690);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetPolyDrawMode, 0x0074F6A0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetPolyDrawMode, 0x0074F6B0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetTextureWrapEnabled, 0x0074F6C0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetTextureWrapEnabled, 0x0074F6D0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetDitherEnabled, 0x0074F6E0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetDitherEnabled, 0x0074F6F0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetPolySortMode, 0x0074F700);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetPolySortMode, 0x0074F710);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetZBufferWriteEnabled, 0x0074F720);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetZBufferWriteEnabled, 0x0074F730);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetZBufferCompare, 0x0074F740);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetZBufferCompare, 0x0074F750);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetPixelWriteEnabled, 0x0074F760);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetPixelWriteEnabled, 0x0074F770);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetAlphaBlendSource, 0x0074F780);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetAlphaBlendSource, 0x0074F790);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetAlphaBlendFunc, 0x0074F7A0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetAlphaBlendFunc, 0x0074F7B0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetAlphaBlendFactor, 0x0074F7C0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetAlphaBlendFactor, 0x0074F7D0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetCacheAlphaPolys, 0x0074F7E0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetCacheAlphaPolys, 0x0074F7F0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetRenderMode, 0x0074F800);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetRenderMode, 0x0074F810);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::HasCapability, 0x0074F820);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetGuardBandBorders, 0x0074F830);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::ResetZTest, 0x0074F840);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::HasPassedZTest, 0x0074F850);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::CreateTextureConvert, 0x0074F860);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SupportsTextureFormat, 0x0074F870);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SupportsTextureFormatHardware, 0x0074F880);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetMaxTextureSize, 0x0074F890);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetTransform, 0x0074F8A0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetViewport, 0x0074F8B0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetLight, 0x0074F8C0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetMaterial, 0x0074F8D0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetMaterial, 0x0074F8E0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetTexture, 0x0074F8F0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetTextureStageState, 0x0074F900);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetAlphaBlendFuncImmed, 0x0074F910);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetRenderState, 0x0074F920);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetRenderState, 0x0074F930);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::AddAlphaSortObject, 0x0074F940);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::RenderAlphaSortList, 0x0074F950);

} // namespace Gothic_I_Addon
