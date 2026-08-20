namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCParticleControl);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCParticleControl, &oCParticleControl::oCParticleControl_OnInit, void(oCParticleControl::*)(), 0x00710A20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCParticleControl, &oCParticleControl::oCParticleControl_OnInit, void(oCParticleControl::*)(zCWorld*), 0x00710AD0);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::GetPFXVob, 0x00710D50);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::SelectActivePFX, 0x00710D60);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::EditActivePFX, 0x007110F0);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::SetStartPos, 0x00711DA0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCParticleControl, &oCParticleControl::StartActivePFX, void(oCParticleControl::*)(zCVob*, zSTRING&), 0x00711DC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCParticleControl, &oCParticleControl::StartActivePFX, void(oCParticleControl::*)(), 0x00711FC0);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::CreateNewPFX, 0x00712170);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::SetPFXName, 0x007123A0);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::SetWorld, 0x00712500);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::BeginEditActive, 0x00712550);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::DeleteLastPFX, 0x00712620);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::UpdateInternals, 0x00712710);
	ZENGIN_REGISTER_METHOD(oCParticleControl, &oCParticleControl::EndEditActive, 0x00712720);

} // namespace Gothic_II_Classic
