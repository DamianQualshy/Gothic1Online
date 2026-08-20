namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCTimer);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::zCTimer_OnInit, 0x005CE520);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::ResetTimer, 0x005CE550);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::SetFrameTime, 0x005CE620);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::LimitFPS, 0x005CE6E0);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::SetMotionFactor, 0x00607640);

	ZENGIN_REGISTER_CLASS(zCChecksum);
	ZENGIN_REGISTER_METHOD(zCChecksum, &zCChecksum::BeginChecksum, 0x005CE850);
	ZENGIN_REGISTER_METHOD(zCChecksum, &zCChecksum::EndChecksum, 0x005CE860);
	ZENGIN_REGISTER_METHOD(zCChecksum, &zCChecksum::CalcBufferChecksum, 0x005CE870);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCChecksum, &zCChecksum::CalcFileChecksum, void(zCChecksum::*)(zFILE*), 0x005CE890);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCChecksum, &zCChecksum::CalcFileChecksum, void(zCChecksum::*)(zSTRING const&), 0x005CE900);

	ZENGIN_REGISTER_CLASS(zCChecksum16);
	ZENGIN_REGISTER_METHOD(zCChecksum16, &zCChecksum16::BeginChecksum, 0x005CEAF0);
	ZENGIN_REGISTER_METHOD(zCChecksum16, &zCChecksum16::EndChecksum, 0x005CEB00);
	ZENGIN_REGISTER_METHOD(zCChecksum16, &zCChecksum16::CalcBufferChecksum, 0x005CEB10);

	ZENGIN_REGISTER_CLASS(zCFPUControler);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::zCFPUControler_OnInit, 0x005CEB90);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SaveCurrentControlWord, 0x005CEBD0);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::RestoreSavedControlWord, 0x005CEBF0);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::GetCurrentControlWord, 0x005CEC00);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::RestoreDefaultControlWord, 0x005CEC10);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::ComputeDefaultControlWord, 0x005CEC20);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SetControlWord, 0x005CEC60);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SetPrecision_24, 0x005CEC80);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SetPrecision_53, 0x005CECA0);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SetPrecision_64, 0x005CECC0);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::PrintStatus, 0x005CECE0);

} // namespace Gothic_I_Classic
