namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCSystemInfo);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::zCSystemInfo_OnInit, 0x0046FF10);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseMemory, 0x004701F0);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseCpu, 0x00470220);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseOs, 0x00470410);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseGcard, 0x00470880);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::GetOsName, 0x004711E0);
	ZENGIN_REGISTER_METHOD(zCSystemInfo, &zCSystemInfo::AnalyseNow, 0x004708A0);

} // namespace Gothic_I_Addon
