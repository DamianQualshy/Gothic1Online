namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCRenderLightContainer);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::Clear, 0x005BBCC0);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CreatePrelightConfig, 0x005CDAA0);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CollectLights_FastPath, 0x005CDC80);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CollectLights_DynLights, 0x005CDEE0);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CollectLights_StatLights, 0x005CE460);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CollectLights, 0x005CED00);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::CalcStatLightDir, 0x005CF050);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::LightVertex, 0x005CF1C0);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::Activate, 0x005CF420);
	ZENGIN_REGISTER_METHOD(zCRenderLightContainer, &zCRenderLightContainer::SetupRendererLights, 0x005CF540);

} // namespace Gothic_II_Classic
