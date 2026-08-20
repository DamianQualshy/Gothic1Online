namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zSParticle);
	ZENGIN_REGISTER_METHOD(zSParticle, &zSParticle::zSParticle_OnInit, 0x005ACEA0);

	ZENGIN_REGISTER_CLASS(zCParticleEmitter);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleEmitter, &zCParticleEmitter::zCParticleEmitter_OnInit, void(zCParticleEmitter::*)(zCParticleEmitter const&), 0x005AE140);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleEmitter, &zCParticleEmitter::zCParticleEmitter_OnInit, void(zCParticleEmitter::*)(), 0x005B2860);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::UpdateVelocity, 0x005B2EE0);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::AddCompoundReferences, 0x005B2EF0);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::ResetStrings, 0x005B2F50);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::Reset, 0x005B31F0);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::UpdateInternals, 0x005B36B0);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::SetOutputDir, 0x005B45F0);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::ConvertAnglesIntoBox, 0x005B4830);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::GetPosition, 0x005B4880);
	ZENGIN_REGISTER_METHOD(zCParticleEmitter, &zCParticleEmitter::GetVelocity, 0x005B5060);

	ZENGIN_REGISTER_CLASS(zCParticleFX);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::zCParticleFX_OnInit, 0x005ACF70);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::InitEmitterVars, 0x005ADC10);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::FreeParticles, 0x005ADC30);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::RemoveEmitter, 0x005ADFA0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleFX, &zCParticleFX::SetEmitter, int(zCParticleFX::*)(zCParticleEmitter*, int), 0x005ADFE0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleFX, &zCParticleFX::SetEmitter, int(zCParticleFX::*)(zSTRING const&, int), 0x005AEB40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleFX, &zCParticleFX::SetAndStartEmitter, int(zCParticleFX::*)(zSTRING const&, int), 0x005AED40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCParticleFX, &zCParticleFX::SetAndStartEmitter, int(zCParticleFX::*)(zCParticleEmitter*, int), 0x005AED70);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::StopEmitterOutput, 0x005AEDA0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::RestoreEmitterOutput, 0x005AEDB0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::CalcIsDead, 0x005AF0D0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::UpdateParticleFX, 0x005AF160);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::CreateParticlesUpdateDependencies, 0x005AF240);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::UpdateParticle, 0x005AF500);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetShapeScaleThisFrame, 0x005B1920);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetNumParticlesThisFrame, 0x005B1A90);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::CheckDependentEmitter, 0x005B1C30);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::CreateParticles, 0x005B1DD0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::_GetClassDef, 0x005AD070);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::Render, 0x005B0310);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::IsBBox3DLocal, 0x005AD080);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetBBox3D, 0x005AEFA0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetVisualName, 0x005ADD30);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetVisualDied, 0x005AD090);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::SetVisualUsedBy, 0x005ADC80);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetRenderSortKey, 0x005AD0A0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::HostVobRemovedFromWorld, 0x005AD270);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::HostVobAddedToWorld, 0x005AD250);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::GetFileExtension, 0x005ADBA0);
	ZENGIN_REGISTER_METHOD(zCParticleFX, &zCParticleFX::LoadVisualVirtual, 0x005ADC00);

	ZENGIN_REGISTER_CLASS(zCParticleFX::zCStaticPfxList);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::InsertPfxHead, 0x005AD280);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::RemovePfx, 0x005AD2C0);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::TouchPfx, 0x005AD330);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::ProcessList, 0x005AD3F0);
	ZENGIN_REGISTER_METHOD(zCParticleFX::zCStaticPfxList, &zCParticleFX::zCStaticPfxList::IsInList, 0x005ADB70);

} // namespace Gothic_II_Addon
