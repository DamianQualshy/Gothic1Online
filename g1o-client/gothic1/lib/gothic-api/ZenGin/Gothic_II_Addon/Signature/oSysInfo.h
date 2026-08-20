namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCSystemInfo);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::oCSystemInfo_OnInit, 0x00439A50);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::GetGraphicsBonus, 0x0043B1F0);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::GetSoundBonus, 0x0043B330);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::GetScoreDescr, 0x0043B340);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::AnalyseNow, 0x00439AF0);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::ScoreNow, 0x0043A3F0);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::ResetSettings, 0x00439B00);

} // namespace Gothic_II_Addon
