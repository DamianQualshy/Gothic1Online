namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCTimer);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::zCTimer_OnInit, 0x005ED2C0);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::ResetTimer, 0x005ED2F0);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::SetFrameTime, 0x005ED3C0);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::LimitFPS, 0x005ED480);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::SetMotionFactor, 0x00629910);

	ZENGIN_REGISTER_CLASS(zCChecksum);
	ZENGIN_REGISTER_METHOD(zCChecksum, &zCChecksum::BeginChecksum, 0x005ED5F0);
	ZENGIN_REGISTER_METHOD(zCChecksum, &zCChecksum::EndChecksum, 0x005ED600);
	ZENGIN_REGISTER_METHOD(zCChecksum, &zCChecksum::CalcBufferChecksum, 0x005ED610);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCChecksum, &zCChecksum::CalcFileChecksum, void(zCChecksum::*)(zFILE*), 0x005ED630);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCChecksum, &zCChecksum::CalcFileChecksum, void(zCChecksum::*)(zSTRING const&), 0x005ED6A0);

	ZENGIN_REGISTER_CLASS(zCChecksum16);
	ZENGIN_REGISTER_METHOD(zCChecksum16, &zCChecksum16::BeginChecksum, 0x005ED8B0);
	ZENGIN_REGISTER_METHOD(zCChecksum16, &zCChecksum16::EndChecksum, 0x005ED8C0);
	ZENGIN_REGISTER_METHOD(zCChecksum16, &zCChecksum16::CalcBufferChecksum, 0x005ED8D0);

	ZENGIN_REGISTER_CLASS(zCFPUControler);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::zCFPUControler_OnInit, 0x005ED950);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SaveCurrentControlWord, 0x005ED990);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::RestoreSavedControlWord, 0x005ED9B0);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::GetCurrentControlWord, 0x005ED9C0);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::RestoreDefaultControlWord, 0x005ED9D0);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::ComputeDefaultControlWord, 0x005ED9E0);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SetControlWord, 0x005EDA20);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SetPrecision_24, 0x005EDA40);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SetPrecision_53, 0x005EDA60);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SetPrecision_64, 0x005EDA80);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::PrintStatus, 0x005EDAA0);

} // namespace Gothic_I_Addon
