namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCSystemInfo);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::oCSystemInfo_OnInit, 0x00436470);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::GetGraphicsBonus, 0x004379D0);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::GetSoundBonus, 0x00437A30);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::GetScoreDescr, 0x00437A40);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::AnalyseNow, 0x00436510);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::ScoreNow, 0x00436D70);
	ZENGIN_REGISTER_METHOD(oCSystemInfo, &oCSystemInfo::ResetSettings, 0x00436520);

} // namespace Gothic_I_Classic
