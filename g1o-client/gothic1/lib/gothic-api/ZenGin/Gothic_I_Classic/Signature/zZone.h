namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCBBox3DSorterBase);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::zCBBox3DSorterBase_OnInit, 0x0060AA00);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Clear, 0x0060AC30);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::AllocAbs, 0x0060ACB0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Insert, 0x0060AD40);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Remove, 0x0060AEC0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::GetActiveList, 0x0060AF80);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::UpdateActiveList, 0x0060B2D0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::InsertHandle, 0x0060B5B0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::RemoveHandle, 0x0060B6B0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Sort, 0x0060B700);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::AdjustSorting, 0x0060B740);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase, &zCBBox3DSorterBase::Update, 0x0060B8C0);

	ZENGIN_REGISTER_CLASS(zCBBox3DSorterBase::zTBoxSortHandle);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase::zTBoxSortHandle, &zCBBox3DSorterBase::zTBoxSortHandle::zTBoxSortHandle_OnInit, 0x005F28A0);
	ZENGIN_REGISTER_METHOD(zCBBox3DSorterBase::zTBoxSortHandle, &zCBBox3DSorterBase::zTBoxSortHandle::ClearActive, 0x005F2930);

	ZENGIN_REGISTER_CLASS(zCZone);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::zCZone_OnInit, 0x0060BA20);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::GetCamPosWeight, 0x0060BB90);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::SetZoneVobFlags, 0x0060BD50);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::_GetClassDef, 0x00609030);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::Unarchive, 0x0060BD80);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::EndMovement, 0x0060BB70);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCZone, &zCZone::SetVisual, void(zCZone::*)(zCVisual*), 0x00607670);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCZone, &zCZone::SetVisual, void(zCZone::*)(zSTRING const&), 0x00607680);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::ThisVobAddedToWorld, 0x0060BB30);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::ThisVobRemovedFromWorld, 0x0060BB50);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::ProcessZoneList, 0x00609040);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::GetZoneMotherClass, 0x00607690);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::GetDefaultZoneClass, 0x00609050);
	ZENGIN_REGISTER_METHOD(zCZone, &zCZone::GetDebugDescString, 0x0060BDC0);

	ZENGIN_REGISTER_CLASS(zCZoneZFog);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::zCZoneZFog_OnInit, 0x0060BEF0);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::GetActiveRange, 0x0060C030);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::_GetClassDef, 0x0060A130);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::Archive, 0x0060C180);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::Unarchive, 0x0060C1F0);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::ProcessZoneList, 0x0060C090);
	ZENGIN_REGISTER_METHOD(zCZoneZFog, &zCZoneZFog::GetDefaultZoneClass, 0x0060C080);

	ZENGIN_REGISTER_CLASS(zCZoneZFogDefault);
	ZENGIN_REGISTER_METHOD(zCZoneZFogDefault, &zCZoneZFogDefault::_GetClassDef, 0x006076E0);
	ZENGIN_REGISTER_METHOD(zCZoneZFogDefault, &zCZoneZFogDefault::Unarchive, 0x0060C2C0);
	ZENGIN_REGISTER_METHOD(zCZoneZFogDefault, &zCZoneZFogDefault::ThisVobAddedToWorld, 0x0060C290);

	ZENGIN_REGISTER_CLASS(zCZoneReverb);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::zCZoneReverb_OnInit, 0x0060E820);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::GetActiveWeight, 0x0060EAD0);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::_GetClassDef, 0x00609080);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::Archive, 0x0060EC40);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::Unarchive, 0x0060EEB0);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::ProcessZoneList, 0x0060EB30);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::GetDefaultZoneClass, 0x0060EB20);
	ZENGIN_REGISTER_METHOD(zCZoneReverb, &zCZoneReverb::GetDebugDescString, 0x0060E950);

	ZENGIN_REGISTER_CLASS(zCZoneReverbDefault);
	ZENGIN_REGISTER_METHOD(zCZoneReverbDefault, &zCZoneReverbDefault::_GetClassDef, 0x00609370);
	ZENGIN_REGISTER_METHOD(zCZoneReverbDefault, &zCZoneReverbDefault::Unarchive, 0x0060EFA0);
	ZENGIN_REGISTER_METHOD(zCZoneReverbDefault, &zCZoneReverbDefault::ThisVobAddedToWorld, 0x0060EF60);
	ZENGIN_REGISTER_METHOD(zCZoneReverbDefault, &zCZoneReverbDefault::ProcessZoneList, 0x00609380);

	ZENGIN_REGISTER_CLASS(zCZoneMusic);
	ZENGIN_REGISTER_METHOD(zCZoneMusic, &zCZoneMusic::_GetClassDef, 0x00609D90);

	ZENGIN_REGISTER_CLASS(zCZoneVobFarPlane);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::zCZoneVobFarPlane_OnInit, 0x0060C380);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::GetActiveFarZ, 0x0060C4B0);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::_GetClassDef, 0x00609710);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::Archive, 0x0060C600);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::Unarchive, 0x0060C660);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::ProcessZoneList, 0x0060C510);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlane, &zCZoneVobFarPlane::GetDefaultZoneClass, 0x0060C500);

	ZENGIN_REGISTER_CLASS(zCZoneVobFarPlaneDefault);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlaneDefault, &zCZoneVobFarPlaneDefault::_GetClassDef, 0x00609A00);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlaneDefault, &zCZoneVobFarPlaneDefault::Unarchive, 0x0060C750);
	ZENGIN_REGISTER_METHOD(zCZoneVobFarPlaneDefault, &zCZoneVobFarPlaneDefault::ThisVobAddedToWorld, 0x0060C700);

	ZENGIN_REGISTER_CLASS(zCVobSound);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::zCVobSound_OnInit, 0x0060C820);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::SetSound, 0x0060CF50);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::LoadSound, 0x0060D090);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::SetSoundVolume, 0x0060D0D0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::SetSoundRadius, 0x0060D0E0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::CalcObstruction, 0x0060D160);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::CalcVolumeScale, 0x0060D2C0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::StartSound, 0x0060D520);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::StopSound, 0x0060D6B0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::_GetClassDef, 0x0060CA60);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::Archive, 0x0060D8B0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::Unarchive, 0x0060DA20);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::OnTrigger, 0x0060D830);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::OnUntrigger, 0x0060D850);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::OnMessage, 0x0060D8A0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::EndMovement, 0x0060CEC0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::ThisVobAddedToWorld, 0x0060DE90);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::ThisVobRemovedFromWorld, 0x0060DEB0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::ProcessZoneList, 0x0060DDB0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::GetDebugDescString, 0x0060CBB0);
	ZENGIN_REGISTER_METHOD(zCVobSound, &zCVobSound::DoSoundUpdate, 0x0060D6F0);

	ZENGIN_REGISTER_CLASS(zCVobSoundDaytime);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::zCVobSoundDaytime_OnInit, 0x0060DF10);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::ActivateSection, 0x0060E240);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::CalcTimeFrac, 0x0060E320);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::_GetClassDef, 0x0060A990);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::Archive, 0x0060E6D0);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::Unarchive, 0x0060E740);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::GetZoneMotherClass, 0x0060A9A0);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::GetDebugDescString, 0x0060E120);
	ZENGIN_REGISTER_METHOD(zCVobSoundDaytime, &zCVobSoundDaytime::DoSoundUpdate, 0x0060E3B0);

} // namespace Gothic_I_Classic
