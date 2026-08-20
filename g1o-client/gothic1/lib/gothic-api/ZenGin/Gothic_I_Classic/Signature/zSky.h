namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCSkyLayerData);
	ZENGIN_REGISTER_METHOD(zCSkyLayerData, &zCSkyLayerData::zCSkyLayerData_OnInit, 0x005BB830);

	ZENGIN_REGISTER_CLASS(zCSkyState);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::zCSkyState_OnInit, 0x005BB960);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetDay0, 0x005BB9B0);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetDay1, 0x005BBB50);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetDay2, 0x005BBCD0);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetEvening, 0x005BBDA0);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetNight0, 0x005BBE70);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetNight1, 0x005BC070);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetNight2, 0x005BC1F0);
	ZENGIN_REGISTER_METHOD(zCSkyState, &zCSkyState::PresetDawn, 0x005BC370);

	ZENGIN_REGISTER_CLASS(zCSkyLayer);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::zCSkyLayer_OnInit, 0x005BEC80);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::SetSkyBoxTexture, 0x005BED20);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::SetSkyPolyTexture, 0x005BED60);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::RenderSkyLayer, 0x005BED70);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::RenderSkyPoly, 0x005BEE20);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::RenderRainCloudLayer, 0x005BF230);
	ZENGIN_REGISTER_METHOD(zCSkyLayer, &zCSkyLayer::RenderSkyBox, 0x005BFEF0);

	ZENGIN_REGISTER_CLASS(zCSkyPlanet);
	ZENGIN_REGISTER_METHOD(zCSkyPlanet, &zCSkyPlanet::zCSkyPlanet_OnInit, 0x005BC750);

	ZENGIN_REGISTER_CLASS(zCUnderwaterPFX);
	ZENGIN_REGISTER_METHOD(zCUnderwaterPFX, &zCUnderwaterPFX::ProcessParticles, 0x005BADC0);
	ZENGIN_REGISTER_METHOD(zCUnderwaterPFX, &zCUnderwaterPFX::CreateParticles, 0x005BB1C0);
	ZENGIN_REGISTER_METHOD(zCUnderwaterPFX, &zCUnderwaterPFX::Render, 0x005BADA0);

	ZENGIN_REGISTER_CLASS(zCSkyControler);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::zCSkyControler_OnInit, 0x005BA160);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::ClearBackground, 0x005BA2F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::_GetClassDef, 0x005B80A0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::SetFillBackground, 0x005B7EE0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetFillBackground, 0x005B7EF0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetRelightCtr, 0x005B7F00);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetDaylightColorFromIntensity, 0x005B7F10);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::SetCameraLocationHint, 0x005B7F30);

	ZENGIN_REGISTER_CLASS(zCSkyControler_Mid);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::zCSkyControler_Mid_OnInit, 0x005BA5A0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::InitUnderwaterPFX, 0x005BA6A0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::InitScreenBlend, 0x005BB2A0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::RenderScreenBlend, 0x005BB3D0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::SetScreenBlendAlpha, 0x005BB5A0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::SetScreenBlendColor, 0x005BB5B0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::SetScreenBlendAlphaFunc, 0x005BB5C0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::_GetClassDef, 0x005B7F40);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::SetUnderwaterFX, 0x005BAA30);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::GetUnderwaterFX, 0x005BAAA0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::RenderSkyPre, 0x005BAAB0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::RenderSkyPost, 0x005BAB80);

	ZENGIN_REGISTER_CLASS(zCSkyControler_Indoor);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::zCSkyControler_Indoor_OnInit, 0x005BB5D0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::_GetClassDef, 0x005B7F70);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetTime, 0x005BB690);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::GetTime, 0x005B7F80);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::ResetTime, 0x005B7F90);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetFarZ, 0x005BB700);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::GetFarZ, 0x005BB710);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetFarZScalability, 0x005BB720);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::GetFarZScalability, 0x005BB760);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetBackgroundColor, 0x005BB770);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::GetBackgroundColor, 0x005BB780);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::UpdateWorldDependencies, 0x005B7FA0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::RenderSkyPre, 0x005BB790);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::RenderSkyPost, 0x005BB820);

	ZENGIN_REGISTER_CLASS(zCSkyControler_Outdoor);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::zCSkyControler_Outdoor_OnInit, 0x005BC440);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::Init, 0x005BCA80);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetStateTextureSearch, 0x005BCFA0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ApplyStateTexToLayer, 0x005BCFF0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderPlanets, 0x005BD430);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ReadFogColorsFromINI, 0x005BD970);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ApplyFogColorsFromINI, 0x005BDE40);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::CreateDefault, 0x005BDEC0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::Interpolate, 0x005BE4F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::CalcPolyLightCLUT, 0x005BE980);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ColorizeSkySphere, 0x005BF4B0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::TextureSkySphere, 0x005BF6F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSetup, 0x005BFBE0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSkyPlane, 0x005BFC30);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSkyDome, 0x005BFED0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::InitSkyPFX, 0x005BFF80);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::CalcFog, 0x005C01A0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSkyPFX, 0x005C05C0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ProcessRainFX, 0x005C0DC0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetRainFXWeight, 0x005C1090);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::_GetClassDef, 0x005BC790);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::Archive, 0x005C1170);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::Unarchive, 0x005C1220);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetTime, 0x005BE8F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetTime, 0x005BC7A0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::ResetTime, 0x005BE930);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetFarZ, 0x005C0540);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetFarZ, 0x005C0550);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetFarZScalability, 0x005C0560);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetFarZScalability, 0x005C05B0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetBackgroundColor, 0x005BC7B0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetBackgroundColor, 0x005BC7C0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::UpdateWorldDependencies, 0x005BCF50);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetRelightCtr, 0x005BE950);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::GetDaylightColorFromIntensity, 0x005BE960);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSkyPre, 0x005C0900);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::RenderSkyPost, 0x005C1160);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Outdoor, &zCSkyControler_Outdoor::SetCameraLocationHint, 0x005BC7D0);

} // namespace Gothic_I_Classic
