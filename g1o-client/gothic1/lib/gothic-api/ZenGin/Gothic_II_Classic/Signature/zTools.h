namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCTimer);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::zCTimer_OnInit, 0x005F2890);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::ResetTimer, 0x005F28C0);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::SetFrameTime, 0x005F2A10);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::SetMaxFPS, 0x005F2AA0);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::LimitFPS, 0x005F2B30);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::SetMotionFactor, 0x0062F8E0);

	ZENGIN_REGISTER_CLASS(zCChecksum);
	ZENGIN_REGISTER_METHOD(zCChecksum, &zCChecksum::BeginChecksum, 0x005F2D60);
	ZENGIN_REGISTER_METHOD(zCChecksum, &zCChecksum::EndChecksum, 0x005F2D70);
	ZENGIN_REGISTER_METHOD(zCChecksum, &zCChecksum::CalcBufferChecksum, 0x005F2D80);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCChecksum, &zCChecksum::CalcFileChecksum, void(zCChecksum::*)(zFILE*), 0x005F2DA0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCChecksum, &zCChecksum::CalcFileChecksum, void(zCChecksum::*)(zSTRING const&), 0x005F2E00);

	ZENGIN_REGISTER_CLASS(zCChecksum16);
	ZENGIN_REGISTER_METHOD(zCChecksum16, &zCChecksum16::BeginChecksum, 0x005F2FE0);
	ZENGIN_REGISTER_METHOD(zCChecksum16, &zCChecksum16::EndChecksum, 0x005F2FF0);
	ZENGIN_REGISTER_METHOD(zCChecksum16, &zCChecksum16::CalcBufferChecksum, 0x005F3000);

	ZENGIN_REGISTER_CLASS(zCFPUControler);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::zCFPUControler_OnInit, 0x005F3080);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SaveCurrentControlWord, 0x005F30C0);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::RestoreSavedControlWord, 0x005F30E0);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::GetCurrentControlWord, 0x005F30F0);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::RestoreDefaultControlWord, 0x005F3100);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::ComputeDefaultControlWord, 0x005F3110);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SetControlWord, 0x005F3150);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SetPrecision_24, 0x005F3170);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SetPrecision_53, 0x005F3190);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SetPrecision_64, 0x005F31B0);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::PrintStatus, 0x005F31D0);

} // namespace Gothic_II_Classic
