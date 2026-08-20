namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCRenderManager);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::zCRenderManager_OnInit, 0x005D0810);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::InitRenderManager, 0x005D0910);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::CleanupRenderManager, 0x005D0A20);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::AddPolyAlphaSimple, 0x005D0C70);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::FlushSimpleAlphaPolys, 0x005D0D40);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::Flush, 0x005D0E30);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SortMaterialPolys, 0x005D10F0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::BuildShader, 0x005D1110);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::GetFreeDynVertexBuffer, 0x005D1DA0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetRGBA, 0x005D1EB0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetStageColorOp, 0x005D1F90);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetTextureStage0, 0x005D2010);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetTextureTransform, 0x005D2160);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetAlphaFunc, 0x005D2430);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCRenderManager, &zCRenderManager::DrawVertexBuffer, void(__fastcall zCRenderManager::*)(zCVertexBuffer*, int, int, unsigned short*, unsigned long, zCMaterial*, int), 0x005D2570);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCRenderManager, &zCRenderManager::DrawVertexBuffer, void(__fastcall zCRenderManager::*)(zCVertexBuffer*, int, int, unsigned short*, unsigned long, zCShader*), 0x005D25D0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::DrawVertexBufferSingleMaterial, 0x005D2930);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::PackVB, 0x005D2940);

	ZENGIN_REGISTER_CLASS(zCShaderStage);
	ZENGIN_REGISTER_METHOD(zCShaderStage, &zCShaderStage::zCShaderStage_OnInit, 0x005D02F0);

	ZENGIN_REGISTER_CLASS(zCShader);
	ZENGIN_REGISTER_METHOD(zCShader, &zCShader::zCShader_OnInit, 0x005D0290);
	ZENGIN_REGISTER_METHOD(zCShader, &zCShader::Clear, 0x005C6E20);
	ZENGIN_REGISTER_METHOD(zCShader, &zCShader::InsertStage, 0x005D02C0);

	ZENGIN_REGISTER_CLASS(zCMapDetailTexture);

} // namespace Gothic_II_Classic
