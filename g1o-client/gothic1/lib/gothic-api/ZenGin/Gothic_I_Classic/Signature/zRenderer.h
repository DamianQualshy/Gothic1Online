namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCRenderLight);
	ZENGIN_REGISTER_METHOD(zCRenderLight, &zCRenderLight::zCRenderLight_OnInit, 0x00560A00);

	ZENGIN_REGISTER_CLASS(zCRndAlphaSortObject);
	ZENGIN_REGISTER_METHOD(zCRndAlphaSortObject, &zCRndAlphaSortObject::IsAlphaPoly, 0x00517D80);

	ZENGIN_REGISTER_CLASS(zCRenderer);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::AlphaBlendFuncStringToType, 0x005AE600);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::AlphaBlendFuncTypeToString, 0x005AE6F0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::Vid_SetMode_novt, 0x005AE970);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetTexFormatInfo, 0x005AEA10);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::DrawTile, 0x005AEA40);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::DrawLightmapList, 0x00713900);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::DrawLineZ, 0x00713910);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::DrawPolySimple, 0x00713920);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetFog, 0x00713930);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetFogColor, 0x00713940);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetFogRange, 0x00713970);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetPolyDrawMode, 0x00713980);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetPolyDrawMode, 0x00713990);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetTextureWrapEnabled, 0x007139A0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetTextureWrapEnabled, 0x007139B0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetDitherEnabled, 0x007139C0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetDitherEnabled, 0x007139D0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetPolySortMode, 0x007139E0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetPolySortMode, 0x007139F0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetZBufferWriteEnabled, 0x00713A00);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetZBufferWriteEnabled, 0x00713A10);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetZBufferCompare, 0x00713A20);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetZBufferCompare, 0x00713A30);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetPixelWriteEnabled, 0x00713A40);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetPixelWriteEnabled, 0x00713A50);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetAlphaBlendSource, 0x00713A60);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetAlphaBlendSource, 0x00713A70);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetAlphaBlendFunc, 0x00713A80);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetAlphaBlendFunc, 0x00713A90);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetAlphaBlendFactor, 0x00713AA0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetAlphaBlendFactor, 0x00713AB0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetCacheAlphaPolys, 0x00713AC0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetCacheAlphaPolys, 0x00713AD0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetRenderMode, 0x00713AE0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetRenderMode, 0x00713AF0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::HasCapability, 0x00713B00);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetGuardBandBorders, 0x00713B10);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::ResetZTest, 0x00713B20);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::HasPassedZTest, 0x00713B30);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::CreateTextureConvert, 0x00713B40);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SupportsTextureFormat, 0x00713B50);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SupportsTextureFormatHardware, 0x00713B60);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetMaxTextureSize, 0x00713B70);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetTransform, 0x00713B80);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetViewport, 0x00713B90);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetLight, 0x00713BA0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetMaterial, 0x00713BB0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetMaterial, 0x00713BC0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetTexture, 0x00713BD0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetTextureStageState, 0x00713BE0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetAlphaBlendFuncImmed, 0x00713BF0);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::SetRenderState, 0x00713C00);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::GetRenderState, 0x00713C10);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::AddAlphaSortObject, 0x00713C20);
	ZENGIN_REGISTER_METHOD(zCRenderer, &zCRenderer::RenderAlphaSortList, 0x00713C30);

} // namespace Gothic_I_Classic
