namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCOutdoorRainFX);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::zCOutdoorRainFX_OnInit, 0x005B8330);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::UpdateSound, 0x005B8560);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::SetEffectWeight, 0x005B8760);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::CheckCameraBeam, 0x005B8910);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::CreateParticles, 0x005B8B30);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::UpdateParticles, 0x005B9230);
	ZENGIN_REGISTER_METHOD(zCOutdoorRainFX, &zCOutdoorRainFX::RenderParticles, 0x005B93F0);

} // namespace Gothic_I_Classic
