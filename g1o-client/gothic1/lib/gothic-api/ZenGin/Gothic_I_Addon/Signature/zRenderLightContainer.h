namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCRenderLightContainer);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CreatePrelightConfig, 0x005CC2B0);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CollectLights_FastPath, 0x005CC4F0);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CollectLights_DynLights, 0x005CC780);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CollectLights_StatLights, 0x005CCD00);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CollectLights, 0x005CD230);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CalcStatLightDir, 0x005CD3C0);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::LightVertex, 0x005CD570);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::Activate, 0x005CD7F0);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::SetupRendererLights, 0x005CD920);

} // namespace Gothic_I_Addon
