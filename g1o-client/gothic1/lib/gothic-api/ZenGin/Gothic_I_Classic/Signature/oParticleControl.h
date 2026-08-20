namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCParticleControl);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCParticleControl, &oCParticleControl::oCParticleControl_OnInit, void(oCParticleControl::*)(), 0x006C8870);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCParticleControl, &oCParticleControl::oCParticleControl_OnInit, void(oCParticleControl::*)(zCWorld*), 0x006C8920);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::GetPFXVob, 0x006C8BC0);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::SelectActivePFX, 0x006C8BD0);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::EditActivePFX, 0x006C8F50);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::SetStartPos, 0x006C9AE0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCParticleControl, &oCParticleControl::StartActivePFX, void(oCParticleControl::*)(zCVob*, zSTRING&), 0x006C9B00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCParticleControl, &oCParticleControl::StartActivePFX, void(oCParticleControl::*)(), 0x006C9D30);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::CreateNewPFX, 0x006C9F10);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::SetPFXName, 0x006CA140);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::SetWorld, 0x006CA2A0);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::BeginEditActive, 0x006CA2F0);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::DeleteLastPFX, 0x006CA3D0);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::UpdateInternals, 0x006CA500);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::EndEditActive, 0x006CA510);

} // namespace Gothic_I_Classic
