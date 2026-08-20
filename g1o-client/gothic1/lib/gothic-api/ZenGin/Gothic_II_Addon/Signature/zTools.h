namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCTimer);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::zCTimer_OnInit, 0x005F9680);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::ResetTimer, 0x005F96B0);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::SetFrameTime, 0x005F9800);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::SetMaxFPS, 0x005F9890);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::LimitFPS, 0x005F9920);
	ZENGIN_REGISTER_METHOD(zCTimer, &zCTimer::SetMotionFactor, 0x006370B0);

	ZENGIN_REGISTER_CLASS(zCChecksum);
	ZENGIN_REGISTER_METHOD(zCChecksum, &zCChecksum::BeginChecksum, 0x005F9B50);
	ZENGIN_REGISTER_METHOD(zCChecksum, &zCChecksum::EndChecksum, 0x005F9B60);
	ZENGIN_REGISTER_METHOD(zCChecksum, &zCChecksum::CalcBufferChecksum, 0x005F9B70);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCChecksum, &zCChecksum::CalcFileChecksum, void(zCChecksum::*)(zFILE*), 0x005F9B90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCChecksum, &zCChecksum::CalcFileChecksum, void(zCChecksum::*)(zSTRING const&), 0x005F9BF0);

	ZENGIN_REGISTER_CLASS(zCChecksum16);
	ZENGIN_REGISTER_METHOD(zCChecksum16, &zCChecksum16::BeginChecksum, 0x005F9DD0);
	ZENGIN_REGISTER_METHOD(zCChecksum16, &zCChecksum16::EndChecksum, 0x005F9DE0);
	ZENGIN_REGISTER_METHOD(zCChecksum16, &zCChecksum16::CalcBufferChecksum, 0x005F9DF0);

	ZENGIN_REGISTER_CLASS(zCFPUControler);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::zCFPUControler_OnInit, 0x005F9E70);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SaveCurrentControlWord, 0x005F9EB0);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::RestoreSavedControlWord, 0x005F9ED0);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::GetCurrentControlWord, 0x005F9EE0);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::RestoreDefaultControlWord, 0x005F9EF0);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::ComputeDefaultControlWord, 0x005F9F00);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SetControlWord, 0x005F9F40);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SetPrecision_24, 0x005F9F60);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SetPrecision_53, 0x005F9F80);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::SetPrecision_64, 0x005F9FA0);
	ZENGIN_REGISTER_METHOD(zCFPUControler, &zCFPUControler::PrintStatus, 0x005F9FC0);

} // namespace Gothic_II_Addon
