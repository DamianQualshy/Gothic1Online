namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCSystemInfo);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::oCSystemInfo_OnInit, 0x00439420);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::GetGraphicsBonus, 0x0043ABC0);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::GetSoundBonus, 0x0043AD00);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::GetScoreDescr, 0x0043AD10);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::AnalyseNow, 0x004394C0);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::ScoreNow, 0x00439DC0);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::ResetSettings, 0x004394D0);

} // namespace Gothic_II_Classic
