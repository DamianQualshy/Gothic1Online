namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zSParticle);
	ZENGIN_REGISTER_METHOD(zSParticle, &zSParticle::zSParticle_OnInit, 0x0058D100);

	ZENGIN_REGISTER_CLASS(zCParticleEmitter);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleEmitter, &zCParticleEmitter::zCParticleEmitter_OnInit, void(zCParticleEmitter::*)(zCParticleEmitter const&), 0x0058E230);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleEmitter, &zCParticleEmitter::zCParticleEmitter_OnInit, void(zCParticleEmitter::*)(), 0x00591DC0);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::AddCompoundReferences, 0x005923C0);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::ResetStrings, 0x00592410);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::Reset, 0x00592690);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::UpdateInternals, 0x00592B50);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::SetOutputDir, 0x00593640);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::ConvertAnglesIntoBox, 0x00593880);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::GetPosition, 0x005938D0);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::GetVelocity, 0x00593CD0);

	ZENGIN_REGISTER_CLASS(zCParticleFX);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::zCParticleFX_OnInit, 0x0058D1D0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::InitEmitterVars, 0x0058DCF0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::FreeParticles, 0x0058DD10);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::RemoveEmitter, 0x0058E080);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleFX, &zCParticleFX::SetEmitter, int(zCParticleFX::*)(zCParticleEmitter*, int), 0x0058E0C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleFX, &zCParticleFX::SetEmitter, int(zCParticleFX::*)(zSTRING const&, int), 0x0058EB00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleFX, &zCParticleFX::SetAndStartEmitter, int(zCParticleFX::*)(zSTRING const&, int), 0x0058ED00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleFX, &zCParticleFX::SetAndStartEmitter, int(zCParticleFX::*)(zCParticleEmitter*, int), 0x0058ED30);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::StopEmitterOutput, 0x0058ED60);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::RestoreEmitterOutput, 0x0058ED70);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::CalcIsDead, 0x0058F0B0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::UpdateParticleFX, 0x0058F130);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::CreateParticlesUpdateDependencies, 0x0058F210);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::UpdateParticle, 0x0058F4C0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetShapeScaleThisFrame, 0x005910C0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetNumParticlesThisFrame, 0x00591220);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::CheckDependentEmitter, 0x005913C0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::CreateParticles, 0x00591580);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::_GetClassDef, 0x0058D2D0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::Render, 0x0058FCB0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::IsBBox3DLocal, 0x0058D2E0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetBBox3D, 0x0058EF80);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetVisualName, 0x0058DE10);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetVisualDied, 0x0058D2F0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::SetVisualUsedBy, 0x0058DD60);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetRenderSortKey, 0x0058D300);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::HostVobRemovedFromWorld, 0x0058D4D0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::HostVobAddedToWorld, 0x0058D4B0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetFileExtension, 0x0058DC80);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::LoadVisualVirtual, 0x0058DCE0);

	ZENGIN_REGISTER_CLASS(zCParticleFX::zCStaticPfxList);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::InsertPfxHead, 0x0058D4E0);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::RemovePfx, 0x0058D520);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::TouchPfx, 0x0058D590);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::ProcessList, 0x0058D650);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::IsInList, 0x0058DC50);

} // namespace Gothic_I_Classic
