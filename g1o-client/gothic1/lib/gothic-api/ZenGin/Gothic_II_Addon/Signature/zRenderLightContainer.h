namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCRenderLightContainer);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::Clear, 0x005C1830);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CreatePrelightConfig, 0x005D4650);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CollectLights_FastPath, 0x005D4830);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CollectLights_DynLights, 0x005D4A90);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CollectLights_StatLights, 0x005D5020);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CollectLights, 0x005D58C0);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CalcStatLightDir, 0x005D5C10);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::LightVertex, 0x005D5D80);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::Activate, 0x005D5FE0);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::SetupRendererLights, 0x005D6100);

} // namespace Gothic_II_Addon
