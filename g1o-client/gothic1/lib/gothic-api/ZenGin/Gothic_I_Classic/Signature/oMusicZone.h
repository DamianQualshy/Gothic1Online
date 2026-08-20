namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCZoneMusic);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::oCZoneMusic_OnInit, 0x0070ADE0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetEnabled, 0x0070B880);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsEnabled, 0x0070B890);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetPriority, 0x0070B8A0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetPriority, 0x0070B8B0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetEllipsoid, 0x0070B8C0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsEllipsoid, 0x0070B8D0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetReverb, 0x0070B8E0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetReverb, 0x0070B8F0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetVolume, 0x0070B900);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetVolume, 0x0070B910);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetLoop, 0x0070B920);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsLoop, 0x0070B930);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetDayEntranceDone, 0x0070B940);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsDayEntranceDone, 0x0070B950);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::SetNightEntranceDone, 0x0070B960);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::IsNightEntranceDone, 0x0070B970);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetCamPosWeightElps, 0x0070BB80);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::_GetClassDef, 0x0070AAE0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::Archive, 0x0070B9A0);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::Unarchive, 0x0070BA90);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::OnTrigger, 0x0070B860);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::OnUntrigger, 0x0070B870);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::ProcessZoneList, 0x0070AE80);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetDefaultZoneClass, 0x0070B830);
	ZENGIN_REGISTER_METHOD(oCZoneMusic, &oCZoneMusic::GetDebugDescString, 0x0070B840);

	ZENGIN_REGISTER_CLASS(oCZoneMusicDefault);
	ZENGIN_REGISTER_METHOD(oCZoneMusicDefault, &oCZoneMusicDefault::oCZoneMusicDefault_OnInit, 0x0070CBA0);
	ZENGIN_REGISTER_METHOD(oCZoneMusicDefault, &oCZoneMusicDefault::_GetClassDef, 0x0070ADD0);

} // namespace Gothic_I_Classic
