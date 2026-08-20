namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCBBox3DSorterBase);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::zCBBox3DSorterBase_OnInit, 0x0063B080);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Clear, 0x0063B2B0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::AllocAbs, 0x0063B330);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Insert, 0x0063B3B0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Remove, 0x0063B510);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::GetActiveList, 0x0063B5D0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::UpdateActiveList, 0x0063B920);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::InsertHandle, 0x0063BC00);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::RemoveHandle, 0x0063BCE0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Sort, 0x0063BD30);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::AdjustSorting, 0x0063BD70);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Update, 0x0063BEF0);

	ZENGIN_REGISTER_CLASS(zCBBox3DSorterBase::zTBoxSortHandle);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase::zTBoxSortHandle, &zCBBox3DSorterBase::zTBoxSortHandle::zTBoxSortHandle_OnInit, 0x0061FF80);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase::zTBoxSortHandle, &zCBBox3DSorterBase::zTBoxSortHandle::ClearActive, 0x00620010);

	ZENGIN_REGISTER_CLASS(zCZone);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::zCZone_OnInit, 0x0063C050);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::GetCamPosWeight, 0x0063C1D0);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::SetZoneVobFlags, 0x0063C390);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::_GetClassDef, 0x00639740);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::Unarchive, 0x0063C3C0);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::EndMovement, 0x0063C1A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCZone, &zCZone::SetVisual, void(zCZone::*)(zSTRING const&), 0x00637160);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCZone, &zCZone::SetVisual, void(zCZone::*)(zCVisual*), 0x00637150);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::ThisVobAddedToWorld, 0x0063C160);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::ThisVobRemovedFromWorld, 0x0063C180);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::ProcessZoneList, 0x00639750);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::GetZoneMotherClass, 0x00637170);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::GetDefaultZoneClass, 0x00639760);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::GetDebugDescString, 0x0063C400);

	ZENGIN_REGISTER_CLASS(zCZoneZFog);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::zCZoneZFog_OnInit, 0x0063C5B0);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::GetActiveRange, 0x0063C700);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::GetSkyFadeWeight, 0x0063C750);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::_GetClassDef, 0x0063A7E0);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::Archive, 0x0063CBB0);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::Unarchive, 0x0063CC40);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::ProcessZoneList, 0x0063C7A0);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::GetDefaultZoneClass, 0x0063C790);

	ZENGIN_REGISTER_CLASS(zCZoneZFogDefault);
	ZENGIN_REGISTER_METHOD(zCZoneZFogDefault, &zCZoneZFogDefault::_GetClassDef, 0x006371C0);
	ZENGIN_REGISTER_METHOD(zCZoneZFogDefault, &zCZoneZFogDefault::Unarchive, 0x0063CD30);
	ZENGIN_REGISTER_METHOD(zCZoneZFogDefault, &zCZoneZFogDefault::ThisVobAddedToWorld, 0x0063CD00);

	ZENGIN_REGISTER_CLASS(zCZoneReverb);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::zCZoneReverb_OnInit, 0x0063F3C0);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::GetActiveWeight, 0x0063F670);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::_GetClassDef, 0x00639790);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::Archive, 0x0063F7E0);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::Unarchive, 0x0063FA50);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::ProcessZoneList, 0x0063F6D0);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::GetDefaultZoneClass, 0x0063F6C0);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::GetDebugDescString, 0x0063F4F0);

	ZENGIN_REGISTER_CLASS(zCZoneReverbDefault);
	ZENGIN_REGISTER_METHOD(zCZoneReverbDefault, &zCZoneReverbDefault::_GetClassDef, 0x00639A70);
	ZENGIN_REGISTER_METHOD(zCZoneReverbDefault, &zCZoneReverbDefault::Unarchive, 0x0063FB40);
	ZENGIN_REGISTER_METHOD(zCZoneReverbDefault, &zCZoneReverbDefault::ThisVobAddedToWorld, 0x0063FB00);
	ZENGIN_REGISTER_METHOD(zCZoneReverbDefault, &zCZoneReverbDefault::ProcessZoneList, 0x00639A80);

	ZENGIN_REGISTER_CLASS(zCZoneMusic);
	ZENGIN_REGISTER_METHOD(zCZoneMusic, &zCZoneMusic::_GetClassDef, 0x0063A450);

	ZENGIN_REGISTER_CLASS(zCZoneVobFarPlane);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::zCZoneVobFarPlane_OnInit, 0x0063CE10);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::GetActiveFarZ, 0x0063CF40);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::_GetClassDef, 0x00639E00);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::Archive, 0x0063D090);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::Unarchive, 0x0063D0F0);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::ProcessZoneList, 0x0063CFA0);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::GetDefaultZoneClass, 0x0063CF90);

	ZENGIN_REGISTER_CLASS(zCZoneVobFarPlaneDefault);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlaneDefault, &zCZoneVobFarPlaneDefault::_GetClassDef, 0x0063A0E0);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlaneDefault, &zCZoneVobFarPlaneDefault::Unarchive, 0x0063D1E0);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlaneDefault, &zCZoneVobFarPlaneDefault::ThisVobAddedToWorld, 0x0063D190);

	ZENGIN_REGISTER_CLASS(zCVobSound);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::zCVobSound_OnInit, 0x0063D2B0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::SetSound, 0x0063DA70);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::LoadSound, 0x0063DBB0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::SetSoundVolume, 0x0063DBF0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::SetSoundRadius, 0x0063DC00);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::CalcObstruction, 0x0063DC80);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::CalcVolumeScale, 0x0063DDE0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::StartSound, 0x0063E040);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::StopSound, 0x0063E1D0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::_GetClassDef, 0x0063D4F0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::Archive, 0x0063E3D0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::Unarchive, 0x0063E540);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::OnTrigger, 0x0063E350);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::OnUntrigger, 0x0063E370);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::OnMessage, 0x0063E3C0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::EndMovement, 0x0063D9D0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::ThisVobAddedToWorld, 0x0063E9B0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::ThisVobRemovedFromWorld, 0x0063E9D0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::ProcessZoneList, 0x0063E8D0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::GetDebugDescString, 0x0063D640);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::DoSoundUpdate, 0x0063E210);

	ZENGIN_REGISTER_CLASS(zCVobSoundDaytime);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::zCVobSoundDaytime_OnInit, 0x0063EA30);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::ActivateSection, 0x0063EDE0);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::CalcTimeFrac, 0x0063EEC0);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::_GetClassDef, 0x0063B010);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::Archive, 0x0063F270);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::Unarchive, 0x0063F2E0);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::GetZoneMotherClass, 0x0063B020);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::GetDebugDescString, 0x0063EC40);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::DoSoundUpdate, 0x0063EF50);

} // namespace Gothic_II_Addon
