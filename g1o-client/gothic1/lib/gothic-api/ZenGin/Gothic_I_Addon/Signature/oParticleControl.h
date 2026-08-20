namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCParticleControl);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCParticleControl, &oCParticleControl::oCParticleControl_OnInit, void(oCParticleControl::*)(), 0x006FE6D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCParticleControl, &oCParticleControl::oCParticleControl_OnInit, void(oCParticleControl::*)(zCWorld*), 0x006FE790);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::GetPFXVob, 0x006FEA50);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::SelectActivePFX, 0x006FEA60);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::EditActivePFX, 0x006FEE00);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::SetStartPos, 0x006FFA00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCParticleControl, &oCParticleControl::StartActivePFX, void(oCParticleControl::*)(zCVob*, zSTRING&), 0x006FFA20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCParticleControl, &oCParticleControl::StartActivePFX, void(oCParticleControl::*)(), 0x006FFC60);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::CreateNewPFX, 0x006FFE40);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::SetPFXName, 0x007000B0);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::SetWorld, 0x00700210);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::BeginEditActive, 0x00700260);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::DeleteLastPFX, 0x00700340);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::UpdateInternals, 0x00700470);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::EndEditActive, 0x00700480);

} // namespace Gothic_I_Addon
