namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCSystemInfo);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::zCSystemInfo_OnInit, 0x0046D1B0);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseMemory, 0x0046D450);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseCpu, 0x0046D480);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseOs, 0x0046D650);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseGcard, 0x0046DA80);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::GetOsName, 0x0046E400);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseNow, 0x0046DAA0);

} // namespace Gothic_II_Addon
