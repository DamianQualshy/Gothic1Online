namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCBBox3DSorterBase);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::zCBBox3DSorterBase_OnInit, 0x0062CF20);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Clear, 0x0062D140);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::AllocAbs, 0x0062D1C0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Insert, 0x0062D250);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Remove, 0x0062D3D0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::GetActiveList, 0x0062D4A0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::UpdateActiveList, 0x0062D7E0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::InsertHandle, 0x0062DAD0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::RemoveHandle, 0x0062DBD0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Sort, 0x0062DC20);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::AdjustSorting, 0x0062DC60);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Update, 0x0062DDE0);

	ZENGIN_REGISTER_CLASS(zCBBox3DSorterBase::zTBoxSortHandle);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase::zTBoxSortHandle, &zCBBox3DSorterBase::zTBoxSortHandle::zTBoxSortHandle_OnInit, 0x00613670);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase::zTBoxSortHandle, &zCBBox3DSorterBase::zTBoxSortHandle::ClearActive, 0x00613700);

	ZENGIN_REGISTER_CLASS(zCZone);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::zCZone_OnInit, 0x0062DF40);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::GetCamPosWeight, 0x0062E0B0);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::SetZoneVobFlags, 0x0062E2F0);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::_GetClassDef, 0x0062B500);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::Unarchive, 0x0062E310);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::EndMovement, 0x0062E090);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCZone, &zCZone::SetVisual, void(zCZone::*)(zCVisual*), 0x00629920);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCZone, &zCZone::SetVisual, void(zCZone::*)(zSTRING const&), 0x00629930);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::ThisVobAddedToWorld, 0x0062E050);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::ThisVobRemovedFromWorld, 0x0062E070);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::ProcessZoneList, 0x0062B510);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::GetZoneMotherClass, 0x00629940);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::GetDefaultZoneClass, 0x0062B520);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::GetDebugDescString, 0x0062E340);

	ZENGIN_REGISTER_CLASS(zCZoneZFog);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::zCZoneZFog_OnInit, 0x0062E490);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::GetActiveRange, 0x0062E5D0);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::_GetClassDef, 0x0062C630);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::Archive, 0x0062E720);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::Unarchive, 0x0062E790);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::ProcessZoneList, 0x0062E630);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::GetDefaultZoneClass, 0x0062E620);

	ZENGIN_REGISTER_CLASS(zCZoneZFogDefault);
	ZENGIN_REGISTER_METHOD(zCZoneZFogDefault, &zCZoneZFogDefault::_GetClassDef, 0x00629990);
	ZENGIN_REGISTER_METHOD(zCZoneZFogDefault, &zCZoneZFogDefault::Unarchive, 0x0062E850);
	ZENGIN_REGISTER_METHOD(zCZoneZFogDefault, &zCZoneZFogDefault::ThisVobAddedToWorld, 0x0062E820);

	ZENGIN_REGISTER_CLASS(zCZoneReverb);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::zCZoneReverb_OnInit, 0x00630F90);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::GetActiveWeight, 0x00631260);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::_GetClassDef, 0x0062B550);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::Archive, 0x006313D0);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::Unarchive, 0x00631650);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::ProcessZoneList, 0x006312C0);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::GetDefaultZoneClass, 0x006312B0);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::GetDebugDescString, 0x006310C0);

	ZENGIN_REGISTER_CLASS(zCZoneReverbDefault);
	ZENGIN_REGISTER_METHOD(zCZoneReverbDefault, &zCZoneReverbDefault::_GetClassDef, 0x0062B850);
	ZENGIN_REGISTER_METHOD(zCZoneReverbDefault, &zCZoneReverbDefault::Unarchive, 0x00631740);
	ZENGIN_REGISTER_METHOD(zCZoneReverbDefault, &zCZoneReverbDefault::ThisVobAddedToWorld, 0x00631700);
	ZENGIN_REGISTER_METHOD(zCZoneReverbDefault, &zCZoneReverbDefault::ProcessZoneList, 0x0062B860);

	ZENGIN_REGISTER_CLASS(zCZoneMusic);
	ZENGIN_REGISTER_METHOD(zCZoneMusic, &zCZoneMusic::_GetClassDef, 0x0062C290);

	ZENGIN_REGISTER_CLASS(zCZoneVobFarPlane);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::zCZoneVobFarPlane_OnInit, 0x0062E900);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::GetActiveFarZ, 0x0062EA20);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::_GetClassDef, 0x0062BC00);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::Archive, 0x0062EB70);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::Unarchive, 0x0062EBD0);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::ProcessZoneList, 0x0062EA80);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::GetDefaultZoneClass, 0x0062EA70);

	ZENGIN_REGISTER_CLASS(zCZoneVobFarPlaneDefault);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlaneDefault, &zCZoneVobFarPlaneDefault::_GetClassDef, 0x0062BF00);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlaneDefault, &zCZoneVobFarPlaneDefault::Unarchive, 0x0062ECC0);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlaneDefault, &zCZoneVobFarPlaneDefault::ThisVobAddedToWorld, 0x0062EC70);

	ZENGIN_REGISTER_CLASS(zCVobSound);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::zCVobSound_OnInit, 0x0062ED80);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::SetSound, 0x0062F530);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::LoadSound, 0x0062F670);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::SetSoundVolume, 0x0062F6C0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::SetSoundRadius, 0x0062F6D0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::CalcObstruction, 0x0062F750);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::CalcVolumeScale, 0x0062F950);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::StartSound, 0x0062FC40);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::StopSound, 0x0062FDD0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::_GetClassDef, 0x0062EFC0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::Archive, 0x0062FFD0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::Unarchive, 0x00630140);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::OnTrigger, 0x0062FF50);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::OnUntrigger, 0x0062FF70);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::OnMessage, 0x0062FFC0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::EndMovement, 0x0062F4A0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::ThisVobAddedToWorld, 0x006305C0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::ThisVobRemovedFromWorld, 0x006305E0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::ProcessZoneList, 0x006304E0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::GetDebugDescString, 0x0062F120);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::DoSoundUpdate, 0x0062FE10);

	ZENGIN_REGISTER_CLASS(zCVobSoundDaytime);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::zCVobSoundDaytime_OnInit, 0x00630640);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::ActivateSection, 0x006309B0);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::CalcTimeFrac, 0x00630A90);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::_GetClassDef, 0x0062CEB0);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::Archive, 0x00630E40);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::Unarchive, 0x00630EB0);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::GetZoneMotherClass, 0x0062CEC0);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::GetDebugDescString, 0x00630860);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::DoSoundUpdate, 0x00630B20);

} // namespace Gothic_I_Addon
