namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCSkyLayerData);
	ZENGIN_REGISTER_METHOD(zCSkyLayerData, &zCSkyLayerData::zCSkyLayerData_OnInit, 0x005E4200);

	ZENGIN_REGISTER_CLASS(zCSkyState);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::zCSkyState_OnInit, 0x005E43B0);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetDay0, 0x005E3790);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetDay1, 0x005E3920);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetDay2, 0x005E3AA0);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetEvening, 0x005E3B70);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetNight0, 0x005E3C40);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetNight1, 0x005E3E30);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetNight2, 0x005E3FB0);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetDawn, 0x005E4130);

	ZENGIN_REGISTER_CLASS(zCSkyLayer);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::zCSkyLayer_OnInit, 0x005E45D0);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::SetDomeMeshEnabled, 0x005E4D40);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::SetSkyDomeTexture, 0x005E4DA0);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::SetSkyPolyTexture, 0x005E4DF0);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::RenderSkyLayer, 0x005E4E00);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::RenderSkyPoly, 0x005E4E30);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::RenderSkyDome, 0x005E5240);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::ColorizeSkyDome, 0x005E56D0);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::RenderRainCloudLayer, 0x005E5D00);

	ZENGIN_REGISTER_CLASS(zCSkyPlanet);
	ZENGIN_REGISTER_METHOD(zCSkyPlanet, &zCSkyPlanet::zCSkyPlanet_OnInit, 0x005E66A0);

	ZENGIN_REGISTER_CLASS(zCSkyControler_Outdoor);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::zCSkyControler_Outdoor_OnInit, 0x005E6220);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::Init, 0x005E6A00);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetStateTextureSearch, 0x005E7310);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ApplyStateTexToLayer, 0x005E7360);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderPlanets, 0x005E7830);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ReadFogColorsFromINI, 0x005E7EA0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ApplyFogColorsFromINI, 0x005E85F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::CreateDefault, 0x005E86D0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::Interpolate, 0x005E8C20);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::CalcPolyLightCLUT, 0x005E93C0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::InitSkyPFX, 0x005E94E0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::CalcFog, 0x005E96C0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSkyPFX, 0x005E9ED0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::CalcGlobalWind, 0x005EA210);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ProcessRainFX, 0x005EAF30);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetRainFXWeight, 0x005EB230);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSetup, 0x005EB360);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSky, 0x005EB3D0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::_GetClassDef, 0x005E66E0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::Archive, 0x005EB640);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::Unarchive, 0x005EB730);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetTime, 0x005E9350);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetTime, 0x005E66F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ResetTime, 0x005E9380);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetFarZ, 0x005E9E50);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetFarZ, 0x005E9E60);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetFarZScalability, 0x005E9E70);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetFarZScalability, 0x005E9EC0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetBackgroundColor, 0x005E6700);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetBackgroundColor, 0x005E6710);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetBackgroundColorDef, 0x005E6740);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetOverrideColor, 0x005E6750);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetOverrideColorFlag, 0x005E6770);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetCloudShadowScale, 0x005EA7F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetCloudShadowScale, 0x005EA810);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::UpdateWorldDependencies, 0x005E72C0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetDaylightColorFromIntensity, 0x005E93A0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSkyPre, 0x005EA850);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSkyPost, 0x005EB580);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetGlobalWindVec, 0x005EA7B0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetGlobalSkyScale, 0x005E7290);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetGlobalSkyScale, 0x005E67A0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetGlobalSkyScaleChanged, 0x005E67B0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetCameraLocationHint, 0x005E6790);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetWeatherType, 0x005EB830);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetRenderLightning, 0x005E6780);

	ZENGIN_REGISTER_CLASS(zCOutdoorRainFX);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::zCOutdoorRainFX_OnInit, 0x005E10A0);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::UpdateSound, 0x005E1350);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::SetWeatherType, 0x005E1570);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::SetEffectWeight, 0x005E18E0);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::CheckCameraBeam, 0x005E1A70);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::CreateParticles, 0x005E1C70);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::UpdateParticles, 0x005E2400);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::RenderParticles, 0x005E25D0);

} // namespace Gothic_II_Addon
