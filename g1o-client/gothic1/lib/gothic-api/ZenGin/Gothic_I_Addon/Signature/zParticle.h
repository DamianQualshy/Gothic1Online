namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zSParticle);
	ZENGIN_REGISTER_METHOD(zSParticle, &zSParticle::zSParticle_OnInit, 0x005A8690);

	ZENGIN_REGISTER_CLASS(zCParticleEmitter);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleEmitter, &zCParticleEmitter::zCParticleEmitter_OnInit, void(zCParticleEmitter::*)(zCParticleEmitter const&), 0x005A98B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleEmitter, &zCParticleEmitter::zCParticleEmitter_OnInit, void(zCParticleEmitter::*)(), 0x005AD6F0);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::AddCompoundReferences, 0x005ADDF0);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::ResetStrings, 0x005ADE40);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::Reset, 0x005AE120);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::UpdateInternals, 0x005AE680);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::SetOutputDir, 0x005AF1D0);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::ConvertAnglesIntoBox, 0x005AF420);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::GetPosition, 0x005AF470);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::GetVelocity, 0x005AF9B0);

	ZENGIN_REGISTER_CLASS(zCParticleFX);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::zCParticleFX_OnInit, 0x005A8760);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::InitEmitterVars, 0x005A9320);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::FreeParticles, 0x005A9340);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::RemoveEmitter, 0x005A9700);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleFX, &zCParticleFX::SetEmitter, int(zCParticleFX::*)(zCParticleEmitter*, int), 0x005A9740);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleFX, &zCParticleFX::SetEmitter, int(zCParticleFX::*)(zSTRING const&, int), 0x005AA1A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleFX, &zCParticleFX::SetAndStartEmitter, int(zCParticleFX::*)(zSTRING const&, int), 0x005AA400);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleFX, &zCParticleFX::SetAndStartEmitter, int(zCParticleFX::*)(zCParticleEmitter*, int), 0x005AA430);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::StopEmitterOutput, 0x005AA460);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::RestoreEmitterOutput, 0x005AA470);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::CalcIsDead, 0x005AA7D0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::UpdateParticleFX, 0x005AA850);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::CreateParticlesUpdateDependencies, 0x005AA930);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::UpdateParticle, 0x005AABF0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetShapeScaleThisFrame, 0x005AC960);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetNumParticlesThisFrame, 0x005ACAA0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::CheckDependentEmitter, 0x005ACC20);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::CreateParticles, 0x005ACE10);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::_GetClassDef, 0x005A8860);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::Render, 0x005AB4E0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::IsBBox3DLocal, 0x005A8870);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetBBox3D, 0x005AA6A0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetVisualName, 0x005A9470);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetVisualDied, 0x005A8880);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::SetVisualUsedBy, 0x005A9390);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetRenderSortKey, 0x005A8890);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::HostVobRemovedFromWorld, 0x005A8A70);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::HostVobAddedToWorld, 0x005A8A50);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetFileExtension, 0x005A92B0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::LoadVisualVirtual, 0x005A9310);

	ZENGIN_REGISTER_CLASS(zCParticleFX::zCStaticPfxList);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::InsertPfxHead, 0x005A8A80);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::RemovePfx, 0x005A8AC0);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::TouchPfx, 0x005A8B30);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::ProcessList, 0x005A8C00);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::IsInList, 0x005A9280);

} // namespace Gothic_I_Addon
