namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCRenderManager);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::zCRenderManager_OnInit, 0x005D73D0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::InitRenderManager, 0x005D74D0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::CleanupRenderManager, 0x005D75E0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::AddPolyAlphaSimple, 0x005D7830);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::FlushSimpleAlphaPolys, 0x005D7900);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::Flush, 0x005D79F0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SortMaterialPolys, 0x005D7DF0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::BuildShader, 0x005D7ED0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::GetFreeDynVertexBuffer, 0x005D8B60);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetRGBA, 0x005D8C70);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetStageColorOp, 0x005D8D50);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetTextureStage0, 0x005D8DD0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetTextureTransform, 0x005D8F20);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetAlphaFunc, 0x005D91F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCRenderManager, &zCRenderManager::DrawVertexBuffer, void(__fastcall zCRenderManager::*)(zCVertexBuffer*, int, int, unsigned short*, unsigned long, zCMaterial*, int), 0x005D9330);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCRenderManager, &zCRenderManager::DrawVertexBuffer, void(__fastcall zCRenderManager::*)(zCVertexBuffer*, int, int, unsigned short*, unsigned long, zCShader*), 0x005D9390);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::DrawVertexBufferSingleMaterial, 0x005D96F0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::PackVB, 0x005D9700);

	ZENGIN_REGISTER_CLASS(zCShaderStage);
	ZENGIN_REGISTER_METHOD(zCShaderStage, &zCShaderStage::zCShaderStage_OnInit, 0x005D6EB0);

	ZENGIN_REGISTER_CLASS(zCShader);
	ZENGIN_REGISTER_METHOD(zCShader, &zCShader::zCShader_OnInit, 0x005D6E50);
	ZENGIN_REGISTER_METHOD(zCShader, &zCShader::Clear, 0x005CCDD0);
	ZENGIN_REGISTER_METHOD(zCShader, &zCShader::InsertStage, 0x005D6E80);

	ZENGIN_REGISTER_CLASS(zCMapDetailTexture);

} // namespace Gothic_II_Addon
