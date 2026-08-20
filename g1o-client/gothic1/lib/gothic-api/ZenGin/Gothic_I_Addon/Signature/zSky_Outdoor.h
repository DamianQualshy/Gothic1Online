namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCOutdoorRainFX);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::zCOutdoorRainFX_OnInit, 0x005D5D30);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::UpdateSound, 0x005D5F70);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::SetEffectWeight, 0x005D6190);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::CheckCameraBeam, 0x005D6340);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::CreateParticles, 0x005D6550);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::UpdateParticles, 0x005D6C50);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::RenderParticles, 0x005D6E00);

} // namespace Gothic_I_Addon
