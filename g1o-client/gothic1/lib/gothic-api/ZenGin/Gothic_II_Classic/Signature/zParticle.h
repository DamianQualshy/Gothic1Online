namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zSParticle);
	ZENGIN_REGISTER_METHOD(zSParticle, &zSParticle::zSParticle_OnInit, 0x005A7820);

	ZENGIN_REGISTER_CLASS(zCParticleEmitter);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleEmitter, &zCParticleEmitter::zCParticleEmitter_OnInit, void(zCParticleEmitter::*)(zCParticleEmitter const&), 0x005A8A70);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleEmitter, &zCParticleEmitter::zCParticleEmitter_OnInit, void(zCParticleEmitter::*)(), 0x005AD200);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::UpdateVelocity, 0x005AD860);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::AddCompoundReferences, 0x005AD870);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::ResetStrings, 0x005AD8C0);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::Reset, 0x005ADB60);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::UpdateInternals, 0x005AE020);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::SetOutputDir, 0x005AEE70);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::ConvertAnglesIntoBox, 0x005AF0B0);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::GetPosition, 0x005AF100);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::GetVelocity, 0x005AF500);

	ZENGIN_REGISTER_CLASS(zCParticleFX);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::zCParticleFX_OnInit, 0x005A78F0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::InitEmitterVars, 0x005A8550);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::FreeParticles, 0x005A8570);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::RemoveEmitter, 0x005A88E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleFX, &zCParticleFX::SetEmitter, int(zCParticleFX::*)(zCParticleEmitter*, int), 0x005A8920);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleFX, &zCParticleFX::SetEmitter, int(zCParticleFX::*)(zSTRING const&, int), 0x005A9460);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleFX, &zCParticleFX::SetAndStartEmitter, int(zCParticleFX::*)(zSTRING const&, int), 0x005A9660);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleFX, &zCParticleFX::SetAndStartEmitter, int(zCParticleFX::*)(zCParticleEmitter*, int), 0x005A9690);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::StopEmitterOutput, 0x005A96C0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::RestoreEmitterOutput, 0x005A96D0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::CalcIsDead, 0x005A99F0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::UpdateParticleFX, 0x005A9A80);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::CreateParticlesUpdateDependencies, 0x005A9B60);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::UpdateParticle, 0x005A9E10);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetShapeScaleThisFrame, 0x005AC2C0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetNumParticlesThisFrame, 0x005AC430);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::CheckDependentEmitter, 0x005AC5D0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::CreateParticles, 0x005AC770);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::_GetClassDef, 0x005A79F0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::Render, 0x005AADB0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::IsBBox3DLocal, 0x005A7A00);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetBBox3D, 0x005A98C0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetVisualName, 0x005A8670);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetVisualDied, 0x005A7A10);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::SetVisualUsedBy, 0x005A85C0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetRenderSortKey, 0x005A7A20);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::HostVobRemovedFromWorld, 0x005A7BF0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::HostVobAddedToWorld, 0x005A7BD0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetFileExtension, 0x005A84E0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::LoadVisualVirtual, 0x005A8540);

	ZENGIN_REGISTER_CLASS(zCParticleFX::zCStaticPfxList);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::InsertPfxHead, 0x005A7C00);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::RemovePfx, 0x005A7C40);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::TouchPfx, 0x005A7CB0);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::ProcessList, 0x005A7D70);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::IsInList, 0x005A84B0);

} // namespace Gothic_II_Classic
