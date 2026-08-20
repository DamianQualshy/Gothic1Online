namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCRenderManager);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::zCRenderManager_OnInit, 0x005CE830);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::InitRenderManager, 0x005CE910);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::CleanupRenderManager, 0x005CEA20);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::AddPoly, 0x005CECA0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::Flush, 0x005CEDD0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SortMaterialPolys, 0x005CF090);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::BuildShader, 0x005CF0B0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::GetFreeDynVertexBuffer, 0x005CF540);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetRGBA, 0x005CF680);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetStageColorOp, 0x005CF760);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetTextureStage0, 0x005CF7E0);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetTextureTransform, 0x005CF940);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::SetAlphaFunc, 0x005CFBE0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCRenderManager, &zCRenderManager::DrawVertexBuffer, void(__fastcall zCRenderManager::*)(zCVertexBuffer*, int, int, unsigned short*, unsigned long, zCMaterial*), 0x005CFCC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCRenderManager, &zCRenderManager::DrawVertexBuffer, void(__fastcall zCRenderManager::*)(zCVertexBuffer*, int, int, unsigned short*, unsigned long, zCShader*), 0x005CFD10);
	ZENGIN_REGISTER_METHOD(zCRenderManager, &zCRenderManager::PackVB, 0x005CFFD0);

	ZENGIN_REGISTER_CLASS(zCShaderStage);
	ZENGIN_REGISTER_METHOD(zCShaderStage, &zCShaderStage::zCShaderStage_OnInit, 0x005CE2F0);

	ZENGIN_REGISTER_CLASS(zCShader);
	ZENGIN_REGISTER_METHOD(zCShader, &zCShader::zCShader_OnInit, 0x005CE290);
	ZENGIN_REGISTER_METHOD(zCShader, &zCShader::InsertStage, 0x005CE2C0);

	ZENGIN_REGISTER_CLASS(zCMapDetailTexture);

} // namespace Gothic_I_Addon
