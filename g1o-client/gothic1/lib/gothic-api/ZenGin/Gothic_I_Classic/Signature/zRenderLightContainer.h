namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCRenderLightContainer);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CreatePrelightConfig, 0x005AF3A0);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CollectLights_FastPath, 0x005AF550);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CollectLights_DynLights, 0x005AF7A0);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CollectLights_StatLights, 0x005AFCF0);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CollectLights, 0x005B0160);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CalcStatLightDir, 0x005B02B0);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::LightVertex, 0x005B0420);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::Activate, 0x005B0680);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::SetupRendererLights, 0x005B07A0);

} // namespace Gothic_I_Classic
