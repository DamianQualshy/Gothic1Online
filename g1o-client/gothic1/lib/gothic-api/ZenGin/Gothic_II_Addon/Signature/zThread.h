namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCThread);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::zCThread_OnInit, 0x005F9160);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::SleepThread, 0x005F93D0);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::BeginThread, 0x005F9230);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::EndThread, 0x005F9330);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::IsThreadRunning, 0x005DC950);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::SuspendThread, 0x005F9370);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::ResumeThread, 0x005F93A0);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::GetTerminationRequested, 0x005DC960);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::SetTerminationRequested, 0x005DC970);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::ThreadProc, 0x005F9320);

	ZENGIN_REGISTER_CLASS(zCCriticalSection);
	ZENGIN_REGISTER_METHOD(zCCriticalSection, &zCCriticalSection::zCCriticalSection_OnInit, 0x005F93E0);
	ZENGIN_REGISTER_METHOD(zCCriticalSection, &zCCriticalSection::Lock, 0x005F9460);
	ZENGIN_REGISTER_METHOD(zCCriticalSection, &zCCriticalSection::Unlock, 0x005F9480);

	ZENGIN_REGISTER_CLASS(zCMutex);
	ZENGIN_REGISTER_METHOD(zCMutex, &zCMutex::zCMutex_OnInit, 0x005F9490);
	ZENGIN_REGISTER_METHOD(zCMutex, &zCMutex::Lock, 0x005F95E0);
	ZENGIN_REGISTER_METHOD(zCMutex, &zCMutex::Unlock, 0x005F9600);

} // namespace Gothic_II_Addon
