namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCZoneMusic);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::oCZoneMusic_OnInit, 0x006404C0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetEnabled, 0x00641080);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsEnabled, 0x00641090);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetPriority, 0x006410A0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetPriority, 0x006410B0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetEllipsoid, 0x006410C0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsEllipsoid, 0x006410D0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetReverb, 0x006410E0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetReverb, 0x006410F0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetVolume, 0x00641100);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetVolume, 0x00641110);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetLoop, 0x00641120);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsLoop, 0x00641130);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetDayEntranceDone, 0x00641140);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsDayEntranceDone, 0x00641150);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetNightEntranceDone, 0x00641160);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsNightEntranceDone, 0x00641170);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetCamPosWeightElps, 0x00641380);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::_GetClassDef, 0x006401D0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::Archive, 0x006411A0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::Unarchive, 0x00641290);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::OnTrigger, 0x00641060);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::OnUntrigger, 0x00641070);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::ProcessZoneList, 0x00640560);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetDefaultZoneClass, 0x00641030);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetDebugDescString, 0x00641040);

	ZENGIN_REGISTER_CLASS(oCZoneMusicDefault);
	ZENGIN_REGISTER_METHOD(oCZoneMusicDefault, &oCZoneMusicDefault::oCZoneMusicDefault_OnInit, 0x00642430);
	ZENGIN_REGISTER_METHOD(oCZoneMusicDefault, &oCZoneMusicDefault::_GetClassDef, 0x006404B0);

} // namespace Gothic_II_Addon
