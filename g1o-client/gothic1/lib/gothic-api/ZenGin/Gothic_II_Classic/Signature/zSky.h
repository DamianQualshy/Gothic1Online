namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCUnderwaterPFX);
	ZENGIN_REGISTER_METHOD(zCUnderwaterPFX, &zCUnderwaterPFX::ProcessParticles, 0x005D9B40);
	ZENGIN_REGISTER_METHOD(zCUnderwaterPFX, &zCUnderwaterPFX::CreateParticles, 0x005D9F40);
	ZENGIN_REGISTER_METHOD(zCUnderwaterPFX, &zCUnderwaterPFX::Render, 0x005D9B20);

	ZENGIN_REGISTER_CLASS(zCSkyControler);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::zCSkyControler_OnInit, 0x005D88F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::ClearBackground, 0x005D8B80);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::_GetClassDef, 0x005D88E0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetCloudShadowScale, 0x005D8660);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::SetCloudShadowScale, 0x005D8670);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::SetFillBackground, 0x005D8680);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetFillBackground, 0x005D8690);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::SetLightDirty, 0x005D86A0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::SetRelightTime, 0x005D86B0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetRelightCtr, 0x005D86C0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetDaylightColorFromIntensity, 0x005D86D0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetGlobalWindVec, 0x005D86F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::SetGlobalSkyScale, 0x005D8700);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetGlobalSkyScale, 0x005D8710);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetGlobalSkyScaleChanged, 0x005D8720);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::SetCameraLocationHint, 0x005D8730);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::SetWeatherType, 0x005D8740);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetWeatherType, 0x005D8750);

	ZENGIN_REGISTER_CLASS(zCSkyControler_Mid);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::zCSkyControler_Mid_OnInit, 0x005D8E40);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::InitUnderwaterPFX, 0x005D8EE0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::InitScreenBlend, 0x005D9560);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::RenderScreenBlend, 0x005D9680);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::SetScreenBlendAlpha, 0x005D9840);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::SetScreenBlendColor, 0x005D9860);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::SetScreenBlendAlphaFunc, 0x005D9870);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::_GetClassDef, 0x005D8760);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::SetUnderwaterFX, 0x005D9230);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::GetUnderwaterFX, 0x005D92A0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::RenderSkyPre, 0x005D92B0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::RenderSkyPost, 0x005D9380);

	ZENGIN_REGISTER_CLASS(zCSkyControler_Indoor);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::zCSkyControler_Indoor_OnInit, 0x005D9880);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::_GetClassDef, 0x005D8790);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetTime, 0x005D9920);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::GetTime, 0x005D87A0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::ResetTime, 0x005D87B0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetFarZ, 0x005D99C0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::GetFarZ, 0x005D99D0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetFarZScalability, 0x005D99E0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::GetFarZScalability, 0x005D9A30);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetBackgroundColor, 0x005D9A40);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::GetBackgroundColor, 0x005D9A50);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::GetBackgroundColorDef, 0x005D9A60);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetOverrideColor, 0x005D87C0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetOverrideColorFlag, 0x005D87D0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::UpdateWorldDependencies, 0x005D87E0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::RenderSkyPre, 0x005D9A70);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::RenderSkyPost, 0x005D9B10);

} // namespace Gothic_II_Classic
