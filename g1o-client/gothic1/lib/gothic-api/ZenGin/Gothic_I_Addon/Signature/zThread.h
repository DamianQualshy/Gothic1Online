namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCThread);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::zCThread_OnInit, 0x005ECD30);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::SleepThread, 0x005ECFD0);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::BeginThread, 0x005ECE00);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::EndThread, 0x005ECF30);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::IsThreadRunning, 0x005D2D90);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::SuspendThread, 0x005ECF70);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::ResumeThread, 0x005ECFA0);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::GetTerminationRequested, 0x005D2DA0);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::SetTerminationRequested, 0x005D2DB0);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::ThreadProc, 0x005ECF20);

	ZENGIN_REGISTER_CLASS(zCCriticalSection);
	ZENGIN_REGISTER_METHOD(zCCriticalSection, &zCCriticalSection::zCCriticalSection_OnInit, 0x005ECFE0);
	ZENGIN_REGISTER_METHOD(zCCriticalSection, &zCCriticalSection::Lock, 0x005ED060);
	ZENGIN_REGISTER_METHOD(zCCriticalSection, &zCCriticalSection::Unlock, 0x005ED080);

	ZENGIN_REGISTER_CLASS(zCMutex);
	ZENGIN_REGISTER_METHOD(zCMutex, &zCMutex::zCMutex_OnInit, 0x005ED090);
	ZENGIN_REGISTER_METHOD(zCMutex, &zCMutex::Lock, 0x005ED220);
	ZENGIN_REGISTER_METHOD(zCMutex, &zCMutex::Unlock, 0x005ED240);

} // namespace Gothic_I_Addon
