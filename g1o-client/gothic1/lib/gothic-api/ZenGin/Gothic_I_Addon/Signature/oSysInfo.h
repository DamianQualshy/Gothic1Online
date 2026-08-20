namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCSystemInfo);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::oCSystemInfo_OnInit, 0x0043A910);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::GetGraphicsBonus, 0x0043C070);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::GetSoundBonus, 0x0043C0D0);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::GetScoreDescr, 0x0043C0E0);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::AnalyseNow, 0x0043A9B0);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::ScoreNow, 0x0043B2A0);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::ResetSettings, 0x0043A9C0);

} // namespace Gothic_I_Addon
