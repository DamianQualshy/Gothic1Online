namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCSkyLayerData);
	ZENGIN_REGISTER_METHOD(zCSkyLayerData, &zCSkyLayerData::zCSkyLayerData_OnInit, 0x005DD450);

	ZENGIN_REGISTER_CLASS(zCSkyState);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::zCSkyState_OnInit, 0x005DD600);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetDay0, 0x005DC9E0);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetDay1, 0x005DCB70);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetDay2, 0x005DCCF0);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetEvening, 0x005DCDC0);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetNight0, 0x005DCE90);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetNight1, 0x005DD080);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetNight2, 0x005DD200);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetDawn, 0x005DD380);

	ZENGIN_REGISTER_CLASS(zCSkyLayer);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::zCSkyLayer_OnInit, 0x005DD820);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::SetDomeMeshEnabled, 0x005DDF90);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::SetSkyDomeTexture, 0x005DDFF0);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::SetSkyPolyTexture, 0x005DE040);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::RenderSkyLayer, 0x005DE050);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::RenderSkyPoly, 0x005DE080);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::RenderSkyDome, 0x005DE490);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::ColorizeSkyDome, 0x005DE920);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::RenderRainCloudLayer, 0x005DEF50);

	ZENGIN_REGISTER_CLASS(zCSkyPlanet);
	ZENGIN_REGISTER_METHOD(zCSkyPlanet, &zCSkyPlanet::zCSkyPlanet_OnInit, 0x005DF8F0);

	ZENGIN_REGISTER_CLASS(zCSkyControler_Outdoor);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::zCSkyControler_Outdoor_OnInit, 0x005DF470);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::Init, 0x005DFC50);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetStateTextureSearch, 0x005E0560);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ApplyStateTexToLayer, 0x005E05B0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderPlanets, 0x005E0A80);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ReadFogColorsFromINI, 0x005E10F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ApplyFogColorsFromINI, 0x005E1840);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::CreateDefault, 0x005E1920);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::Interpolate, 0x005E1E70);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::CalcPolyLightCLUT, 0x005E2610);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::InitSkyPFX, 0x005E2730);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::CalcFog, 0x005E2910);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSkyPFX, 0x005E3120);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::CalcGlobalWind, 0x005E3460);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ProcessRainFX, 0x005E4180);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetRainFXWeight, 0x005E4480);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSetup, 0x005E45B0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSky, 0x005E4620);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::_GetClassDef, 0x005DF930);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::Archive, 0x005E4890);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::Unarchive, 0x005E4980);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetTime, 0x005E25A0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetTime, 0x005DF940);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ResetTime, 0x005E25D0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetFarZ, 0x005E30A0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetFarZ, 0x005E30B0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetFarZScalability, 0x005E30C0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetFarZScalability, 0x005E3110);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetBackgroundColor, 0x005DF950);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetBackgroundColor, 0x005DF960);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetBackgroundColorDef, 0x005DF990);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetOverrideColor, 0x005DF9A0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetOverrideColorFlag, 0x005DF9C0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetCloudShadowScale, 0x005E3A40);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetCloudShadowScale, 0x005E3A60);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::UpdateWorldDependencies, 0x005E0510);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetDaylightColorFromIntensity, 0x005E25F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSkyPre, 0x005E3AA0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSkyPost, 0x005E47D0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetGlobalWindVec, 0x005E3A00);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetGlobalSkyScale, 0x005E04E0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetGlobalSkyScale, 0x005DF9F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetGlobalSkyScaleChanged, 0x005DFA00);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetCameraLocationHint, 0x005DF9E0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetWeatherType, 0x005E4A80);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetRenderLightning, 0x005DF9D0);

	ZENGIN_REGISTER_CLASS(zCOutdoorRainFX);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::zCOutdoorRainFX_OnInit, 0x005DA2F0);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::UpdateSound, 0x005DA5A0);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::SetWeatherType, 0x005DA7C0);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::SetEffectWeight, 0x005DAB30);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::CheckCameraBeam, 0x005DACC0);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::CreateParticles, 0x005DAEC0);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::UpdateParticles, 0x005DB650);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::RenderParticles, 0x005DB820);

} // namespace Gothic_II_Classic
