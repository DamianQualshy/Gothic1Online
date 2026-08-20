namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCZoneMusic);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::oCZoneMusic_OnInit, 0x00754F20);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetEnabled, 0x00755AE0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsEnabled, 0x00755AF0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetPriority, 0x00755B00);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetPriority, 0x00755B10);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetEllipsoid, 0x00755B20);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsEllipsoid, 0x00755B30);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetReverb, 0x00755B40);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetReverb, 0x00755B50);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetVolume, 0x00755B60);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetVolume, 0x00755B70);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetLoop, 0x00755B80);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsLoop, 0x00755B90);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetDayEntranceDone, 0x00755BA0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsDayEntranceDone, 0x00755BB0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetNightEntranceDone, 0x00755BC0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsNightEntranceDone, 0x00755BD0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetCamPosWeightElps, 0x00755DE0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::_GetClassDef, 0x00754C30);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::Archive, 0x00755C00);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::Unarchive, 0x00755CF0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::OnTrigger, 0x00755AC0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::OnUntrigger, 0x00755AD0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::ProcessZoneList, 0x00754FC0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetDefaultZoneClass, 0x00755A90);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetDebugDescString, 0x00755AA0);

	ZENGIN_REGISTER_CLASS(oCZoneMusicDefault);
	ZENGIN_REGISTER_METHOD(oCZoneMusicDefault, &oCZoneMusicDefault::oCZoneMusicDefault_OnInit, 0x00756E90);
	ZENGIN_REGISTER_METHOD(oCZoneMusicDefault, &oCZoneMusicDefault::_GetClassDef, 0x00754F10);

} // namespace Gothic_II_Classic
