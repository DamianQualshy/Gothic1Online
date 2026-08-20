namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCBBox3DSorterBase);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::zCBBox3DSorterBase_OnInit, 0x006338B0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Clear, 0x00633AE0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::AllocAbs, 0x00633B60);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Insert, 0x00633BE0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Remove, 0x00633D40);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::GetActiveList, 0x00633E00);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::UpdateActiveList, 0x00634150);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::InsertHandle, 0x00634430);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::RemoveHandle, 0x00634510);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Sort, 0x00634560);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::AdjustSorting, 0x006345A0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Update, 0x00634720);

	ZENGIN_REGISTER_CLASS(zCBBox3DSorterBase::zTBoxSortHandle);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase::zTBoxSortHandle, &zCBBox3DSorterBase::zTBoxSortHandle::zTBoxSortHandle_OnInit, 0x00618830);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase::zTBoxSortHandle, &zCBBox3DSorterBase::zTBoxSortHandle::ClearActive, 0x006188C0);

	ZENGIN_REGISTER_CLASS(zCZone);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::zCZone_OnInit, 0x00634880);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::GetCamPosWeight, 0x006349F0);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::SetZoneVobFlags, 0x00634BB0);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::_GetClassDef, 0x00631F70);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::Unarchive, 0x00634BE0);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::EndMovement, 0x006349D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCZone, &zCZone::SetVisual, void(zCZone::*)(zCVisual*), 0x0062F970);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCZone, &zCZone::SetVisual, void(zCZone::*)(zSTRING const&), 0x0062F980);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::ThisVobAddedToWorld, 0x00634990);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::ThisVobRemovedFromWorld, 0x006349B0);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::ProcessZoneList, 0x00631F80);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::GetZoneMotherClass, 0x0062F990);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::GetDefaultZoneClass, 0x00631F90);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::GetDebugDescString, 0x00634C20);

	ZENGIN_REGISTER_CLASS(zCZoneZFog);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::zCZoneZFog_OnInit, 0x00634DD0);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::GetActiveRange, 0x00634F20);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::GetSkyFadeWeight, 0x00634F70);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::_GetClassDef, 0x00633010);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::Archive, 0x006353D0);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::Unarchive, 0x00635460);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::ProcessZoneList, 0x00634FC0);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::GetDefaultZoneClass, 0x00634FB0);

	ZENGIN_REGISTER_CLASS(zCZoneZFogDefault);
	ZENGIN_REGISTER_METHOD(zCZoneZFogDefault, &zCZoneZFogDefault::_GetClassDef, 0x0062F9E0);
	ZENGIN_REGISTER_METHOD(zCZoneZFogDefault, &zCZoneZFogDefault::Unarchive, 0x00635550);
	ZENGIN_REGISTER_METHOD(zCZoneZFogDefault, &zCZoneZFogDefault::ThisVobAddedToWorld, 0x00635520);

	ZENGIN_REGISTER_CLASS(zCZoneReverb);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::zCZoneReverb_OnInit, 0x00637BD0);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::GetActiveWeight, 0x00637E80);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::_GetClassDef, 0x00631FC0);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::Archive, 0x00637FF0);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::Unarchive, 0x00638260);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::ProcessZoneList, 0x00637EE0);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::GetDefaultZoneClass, 0x00637ED0);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::GetDebugDescString, 0x00637D00);

	ZENGIN_REGISTER_CLASS(zCZoneReverbDefault);
	ZENGIN_REGISTER_METHOD(zCZoneReverbDefault, &zCZoneReverbDefault::_GetClassDef, 0x006322A0);
	ZENGIN_REGISTER_METHOD(zCZoneReverbDefault, &zCZoneReverbDefault::Unarchive, 0x00638350);
	ZENGIN_REGISTER_METHOD(zCZoneReverbDefault, &zCZoneReverbDefault::ThisVobAddedToWorld, 0x00638310);
	ZENGIN_REGISTER_METHOD(zCZoneReverbDefault, &zCZoneReverbDefault::ProcessZoneList, 0x006322B0);

	ZENGIN_REGISTER_CLASS(zCZoneMusic);
	ZENGIN_REGISTER_METHOD(zCZoneMusic, &zCZoneMusic::_GetClassDef, 0x00632C80);

	ZENGIN_REGISTER_CLASS(zCZoneVobFarPlane);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::zCZoneVobFarPlane_OnInit, 0x00635630);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::GetActiveFarZ, 0x00635760);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::_GetClassDef, 0x00632630);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::Archive, 0x006358B0);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::Unarchive, 0x00635910);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::ProcessZoneList, 0x006357C0);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::GetDefaultZoneClass, 0x006357B0);

	ZENGIN_REGISTER_CLASS(zCZoneVobFarPlaneDefault);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlaneDefault, &zCZoneVobFarPlaneDefault::_GetClassDef, 0x00632910);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlaneDefault, &zCZoneVobFarPlaneDefault::Unarchive, 0x00635A00);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlaneDefault, &zCZoneVobFarPlaneDefault::ThisVobAddedToWorld, 0x006359B0);

	ZENGIN_REGISTER_CLASS(zCVobSound);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::zCVobSound_OnInit, 0x00635AD0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::SetSound, 0x00636280);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::LoadSound, 0x006363C0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::SetSoundVolume, 0x00636400);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::SetSoundRadius, 0x00636410);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::CalcObstruction, 0x00636490);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::CalcVolumeScale, 0x006365F0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::StartSound, 0x00636850);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::StopSound, 0x006369E0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::_GetClassDef, 0x00635D10);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::Archive, 0x00636BE0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::Unarchive, 0x00636D50);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::OnTrigger, 0x00636B60);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::OnUntrigger, 0x00636B80);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::OnMessage, 0x00636BD0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::EndMovement, 0x006361F0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::ThisVobAddedToWorld, 0x006371C0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::ThisVobRemovedFromWorld, 0x006371E0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::ProcessZoneList, 0x006370E0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::GetDebugDescString, 0x00635E60);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::DoSoundUpdate, 0x00636A20);

	ZENGIN_REGISTER_CLASS(zCVobSoundDaytime);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::zCVobSoundDaytime_OnInit, 0x00637240);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::ActivateSection, 0x006375F0);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::CalcTimeFrac, 0x006376D0);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::_GetClassDef, 0x00633840);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::Archive, 0x00637A80);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::Unarchive, 0x00637AF0);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::GetZoneMotherClass, 0x00633850);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::GetDebugDescString, 0x00637450);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::DoSoundUpdate, 0x00637760);

} // namespace Gothic_II_Classic
