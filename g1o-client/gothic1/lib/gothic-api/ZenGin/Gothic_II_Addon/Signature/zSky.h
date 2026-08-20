namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCUnderwaterPFX);
	ZENGIN_REGISTER_METHOD(zCUnderwaterPFX, &zCUnderwaterPFX::ProcessParticles, 0x005E08F0);
	ZENGIN_REGISTER_METHOD(zCUnderwaterPFX, &zCUnderwaterPFX::CreateParticles, 0x005E0CF0);
	ZENGIN_REGISTER_METHOD(zCUnderwaterPFX, &zCUnderwaterPFX::Render, 0x005E08D0);

	ZENGIN_REGISTER_CLASS(zCSkyControler);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::zCSkyControler_OnInit, 0x005DF6B0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::ClearBackground, 0x005DF930);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::_GetClassDef, 0x005DF6A0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetCloudShadowScale, 0x005DF420);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::SetCloudShadowScale, 0x005DF430);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::SetFillBackground, 0x005DF440);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetFillBackground, 0x005DF450);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::SetLightDirty, 0x005DF460);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::SetRelightTime, 0x005DF470);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetRelightCtr, 0x005DF480);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetDaylightColorFromIntensity, 0x005DF490);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetGlobalWindVec, 0x005DF4B0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::SetGlobalSkyScale, 0x005DF4C0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetGlobalSkyScale, 0x005DF4D0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetGlobalSkyScaleChanged, 0x005DF4E0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::SetCameraLocationHint, 0x005DF4F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::SetWeatherType, 0x005DF500);
	ZENGIN_REGISTER_METHOD(zCSkyControler, &zCSkyControler::GetWeatherType, 0x005DF510);

	ZENGIN_REGISTER_CLASS(zCSkyControler_Mid);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::zCSkyControler_Mid_OnInit, 0x005DFBF0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::InitUnderwaterPFX, 0x005DFC90);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::InitScreenBlend, 0x005E0310);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::RenderScreenBlend, 0x005E0430);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::SetScreenBlendAlpha, 0x005E05F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::SetScreenBlendColor, 0x005E0610);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::SetScreenBlendAlphaFunc, 0x005E0620);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::_GetClassDef, 0x005DF520);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::SetUnderwaterFX, 0x005DFFE0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::GetUnderwaterFX, 0x005E0050);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::RenderSkyPre, 0x005E0060);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Mid, &zCSkyControler_Mid::RenderSkyPost, 0x005E0130);

	ZENGIN_REGISTER_CLASS(zCSkyControler_Indoor);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::zCSkyControler_Indoor_OnInit, 0x005E0630);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::_GetClassDef, 0x005DF550);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetTime, 0x005E06D0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::GetTime, 0x005DF560);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::ResetTime, 0x005DF570);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetFarZ, 0x005E0770);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::GetFarZ, 0x005E0780);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetFarZScalability, 0x005E0790);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::GetFarZScalability, 0x005E07E0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetBackgroundColor, 0x005E07F0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::GetBackgroundColor, 0x005E0800);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::GetBackgroundColorDef, 0x005E0810);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetOverrideColor, 0x005DF580);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::SetOverrideColorFlag, 0x005DF590);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::UpdateWorldDependencies, 0x005DF5A0);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::RenderSkyPre, 0x005E0820);
	ZENGIN_REGISTER_METHOD(zCSkyControler_Indoor, &zCSkyControler_Indoor::RenderSkyPost, 0x005E08C0);

} // namespace Gothic_II_Addon
