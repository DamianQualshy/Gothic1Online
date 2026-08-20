namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCZoneMusic);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::oCZoneMusic_OnInit, 0x00745CA0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetEnabled, 0x00746800);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsEnabled, 0x00746810);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetPriority, 0x00746820);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetPriority, 0x00746830);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetEllipsoid, 0x00746840);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsEllipsoid, 0x00746850);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetReverb, 0x00746860);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetReverb, 0x00746870);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetVolume, 0x00746880);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetVolume, 0x00746890);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetLoop, 0x007468A0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsLoop, 0x007468B0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetDayEntranceDone, 0x007468C0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsDayEntranceDone, 0x007468D0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetNightEntranceDone, 0x007468E0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsNightEntranceDone, 0x007468F0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetCamPosWeightElps, 0x00746B00);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::_GetClassDef, 0x00745990);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::Archive, 0x00746920);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::Unarchive, 0x00746A10);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::OnTrigger, 0x007467E0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::OnUntrigger, 0x007467F0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::ProcessZoneList, 0x00745D40);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetDefaultZoneClass, 0x007467B0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetDebugDescString, 0x007467C0);

	ZENGIN_REGISTER_CLASS(oCZoneMusicDefault);
	ZENGIN_REGISTER_METHOD(oCZoneMusicDefault, &oCZoneMusicDefault::oCZoneMusicDefault_OnInit, 0x00747CB0);
	ZENGIN_REGISTER_METHOD(oCZoneMusicDefault, &oCZoneMusicDefault::_GetClassDef, 0x00745C90);

} // namespace Gothic_I_Addon
