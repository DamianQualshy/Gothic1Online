namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCRenderManager);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::zCRenderManager_OnInit, 0x005B1650);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::InitRenderManager, 0x005B1730);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::CleanupRenderManager, 0x005B1840);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::AddPoly, 0x005B1A90);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::Flush, 0x005B1BD0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SortMaterialPolys, 0x005B1E70);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::BuildShader, 0x005B1E90);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::GetFreeDynVertexBuffer, 0x005B22F0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetRGBA, 0x005B2430);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetStageColorOp, 0x005B2510);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetTextureStage0, 0x005B2590);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetTextureTransform, 0x005B26E0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetAlphaFunc, 0x005B2970);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCRenderManager, &zCRenderManager::DrawVertexBuffer, void(__fastcall zCRenderManager::*)(zCVertexBuffer*, int, int, unsigned short*, unsigned long, zCMaterial*), 0x005B2A50);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCRenderManager, &zCRenderManager::DrawVertexBuffer, void(__fastcall zCRenderManager::*)(zCVertexBuffer*, int, int, unsigned short*, unsigned long, zCShader*), 0x005B2AA0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::PackVB, 0x005B2D60);

	ZENGIN_REGISTER_CLASS(zCShaderStage);
	ZENGIN_REGISTER_METHOD(zCShaderStage, &zCShaderStage::zCShaderStage_OnInit, 0x005B1130);

	ZENGIN_REGISTER_CLASS(zCShader);
	ZENGIN_REGISTER_METHOD(zCShader, &zCShader::zCShader_OnInit, 0x005B10D0);
	ZENGIN_REGISTER_METHOD(zCShader, &zCShader::InsertStage, 0x005B1100);

	ZENGIN_REGISTER_CLASS(zCMapDetailTexture);

} // namespace Gothic_I_Classic
