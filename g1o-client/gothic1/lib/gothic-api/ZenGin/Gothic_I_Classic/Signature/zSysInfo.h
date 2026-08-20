namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCSystemInfo);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::zCSystemInfo_OnInit, 0x00467FE0);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseMemory, 0x00468280);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseCpu, 0x004682B0);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseOs, 0x00468480);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseGcard, 0x004688B0);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::GetOsName, 0x00469120);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseNow, 0x004688D0);

} // namespace Gothic_I_Classic
