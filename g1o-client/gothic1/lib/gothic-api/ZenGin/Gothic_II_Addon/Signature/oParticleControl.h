namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCParticleControl);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCParticleControl, &oCParticleControl::oCParticleControl_OnInit, void(oCParticleControl::*)(), 0x0076FF90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCParticleControl, &oCParticleControl::oCParticleControl_OnInit, void(oCParticleControl::*)(zCWorld*), 0x00770040);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::GetPFXVob, 0x007702C0);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::SelectActivePFX, 0x007702D0);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::EditActivePFX, 0x00770660);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::SetStartPos, 0x00771330);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCParticleControl, &oCParticleControl::StartActivePFX, void(oCParticleControl::*)(zCVob*, zSTRING&), 0x00771350);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCParticleControl, &oCParticleControl::StartActivePFX, void(oCParticleControl::*)(), 0x00771550);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::CreateNewPFX, 0x00771700);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::SetPFXName, 0x00771930);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::SetWorld, 0x00771A90);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::BeginEditActive, 0x00771AE0);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::DeleteLastPFX, 0x00771BB0);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::UpdateInternals, 0x00771CA0);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::EndEditActive, 0x00771CB0);

} // namespace Gothic_II_Addon
