namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCSkyLayerData);
	ZENGIN_REGISTER_METHOD(zCSkyLayerData, &zCSkyLayerData::zCSkyLayerData_OnInit, 0x005D93C0);

	ZENGIN_REGISTER_CLASS(zCSkyState);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::zCSkyState_OnInit, 0x005D9500);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetDay0, 0x005D9550);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetDay1, 0x005D96F0);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetDay2, 0x005D9870);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetEvening, 0x005D9940);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetNight0, 0x005D9A10);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetNight1, 0x005D9C10);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetNight2, 0x005D9D90);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetDawn, 0x005D9F10);

	ZENGIN_REGISTER_CLASS(zCSkyLayer);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::zCSkyLayer_OnInit, 0x005DCA30);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::SetSkyBoxTexture, 0x005DCAE0);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::SetSkyPolyTexture, 0x005DCB30);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::RenderSkyLayer, 0x005DCB50);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::RenderSkyPoly, 0x005DCC00);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::RenderRainCloudLayer, 0x005DD010);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::RenderSkyBox, 0x005DDD70);

	ZENGIN_REGISTER_CLASS(zCSkyPlanet);
	ZENGIN_REGISTER_METHOD(zCSkyPlanet, &zCSkyPlanet::zCSkyPlanet_OnInit, 0x005DA300);

	ZENGIN_REGISTER_CLASS(zCUnderwaterPFX);
	ZENGIN_REGISTER_METHOD(zCUnderwaterPFX, &zCUnderwaterPFX::ProcessParticles, 0x005D8930);
	ZENGIN_REGISTER_METHOD(zCUnderwaterPFX, &zCUnderwaterPFX::CreateParticles, 0x005D8CC0);
	ZENGIN_REGISTER_METHOD(zCUnderwaterPFX, &zCUnderwaterPFX::Render, 0x005D8910);

	ZENGIN_REGISTER_CLASS(zCSkyControler);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::zCSkyControler_OnInit, 0x005D7C90);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::ClearBackground, 0x005D7E20);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::_GetClassDef, 0x005D5A90);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::SetFillBackground, 0x005D58C0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetFillBackground, 0x005D58D0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetRelightCtr, 0x005D58E0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetDaylightColorFromIntensity, 0x005D58F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::SetCameraLocationHint, 0x005D5920);

	ZENGIN_REGISTER_CLASS(zCSkyControler_Mid);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::zCSkyControler_Mid_OnInit, 0x005D80E0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::InitUnderwaterPFX, 0x005D81E0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::InitScreenBlend, 0x005D8DE0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::RenderScreenBlend, 0x005D8F30);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::SetScreenBlendAlpha, 0x005D9140);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::SetScreenBlendColor, 0x005D9150);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::SetScreenBlendAlphaFunc, 0x005D9160);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::_GetClassDef, 0x005D5930);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::SetUnderwaterFX, 0x005D8590);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::GetUnderwaterFX, 0x005D8600);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::RenderSkyPre, 0x005D8610);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::RenderSkyPost, 0x005D86F0);

	ZENGIN_REGISTER_CLASS(zCSkyControler_Indoor);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::zCSkyControler_Indoor_OnInit, 0x005D9170);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::_GetClassDef, 0x005D5960);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetTime, 0x005D9230);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::GetTime, 0x005D5970);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::ResetTime, 0x005D5980);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetFarZ, 0x005D9290);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::GetFarZ, 0x005D92A0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetFarZScalability, 0x005D92B0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::GetFarZScalability, 0x005D92F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetBackgroundColor, 0x005D9300);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::GetBackgroundColor, 0x005D9310);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::UpdateWorldDependencies, 0x005D5990);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::RenderSkyPre, 0x005D9320);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::RenderSkyPost, 0x005D93B0);

	ZENGIN_REGISTER_CLASS(zCSkyControler_Outdoor);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::zCSkyControler_Outdoor_OnInit, 0x005D9FE0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::Init, 0x005DA640);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetStateTextureSearch, 0x005DABA0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ApplyStateTexToLayer, 0x005DAC00);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderPlanets, 0x005DB080);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ReadFogColorsFromINI, 0x005DB5F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ApplyFogColorsFromINI, 0x005DBB20);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::CreateDefault, 0x005DBBB0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::Interpolate, 0x005DC1F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::CalcPolyLightCLUT, 0x005DC720);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ColorizeSkySphere, 0x005DD2D0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::TextureSkySphere, 0x005DD560);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSetup, 0x005DDA70);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSkyPlane, 0x005DDAC0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSkyDome, 0x005DDD40);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::InitSkyPFX, 0x005DDE00);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::CalcFog, 0x005DE020);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSkyPFX, 0x005DE450);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ProcessRainFX, 0x005DECA0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetRainFXWeight, 0x005DEFA0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::_GetClassDef, 0x005DA340);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::Archive, 0x005DF090);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::Unarchive, 0x005DF140);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetTime, 0x005DC690);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetTime, 0x005DA350);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ResetTime, 0x005DC6D0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetFarZ, 0x005DE3D0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetFarZ, 0x005DE3E0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetFarZScalability, 0x005DE3F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetFarZScalability, 0x005DE440);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetBackgroundColor, 0x005DA360);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetBackgroundColor, 0x005DA370);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::UpdateWorldDependencies, 0x005DAB50);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetRelightCtr, 0x005DC6F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetDaylightColorFromIntensity, 0x005DC700);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSkyPre, 0x005DE790);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSkyPost, 0x005DF070);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetCameraLocationHint, 0x005DA380);

} // namespace Gothic_I_Addon
