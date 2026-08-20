namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCSystemInfo);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::zCSystemInfo_OnInit, 0x0046C580);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseMemory, 0x0046C820);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseCpu, 0x0046C850);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseOs, 0x0046CA20);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseGcard, 0x0046CE50);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::GetOsName, 0x0046D7D0);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseNow, 0x0046CE70);

} // namespace Gothic_II_Classic
