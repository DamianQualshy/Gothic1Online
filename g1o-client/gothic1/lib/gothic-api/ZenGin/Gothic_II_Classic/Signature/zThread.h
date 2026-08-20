namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCThread);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::zCThread_OnInit, 0x005F2370);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::SleepThread, 0x005F25E0);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::BeginThread, 0x005F2440);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::EndThread, 0x005F2540);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::IsThreadRunning, 0x005D5B90);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::SuspendThread, 0x005F2580);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::ResumeThread, 0x005F25B0);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::GetTerminationRequested, 0x005D5BA0);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::SetTerminationRequested, 0x005D5BB0);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::ThreadProc, 0x005F2530);

	ZENGIN_REGISTER_CLASS(zCCriticalSection);
	ZENGIN_REGISTER_METHOD(zCCriticalSection, &zCCriticalSection::zCCriticalSection_OnInit, 0x005F25F0);
	ZENGIN_REGISTER_METHOD(zCCriticalSection, &zCCriticalSection::Lock, 0x005F2670);
	ZENGIN_REGISTER_METHOD(zCCriticalSection, &zCCriticalSection::Unlock, 0x005F2690);

	ZENGIN_REGISTER_CLASS(zCMutex);
	ZENGIN_REGISTER_METHOD(zCMutex, &zCMutex::zCMutex_OnInit, 0x005F26A0);
	ZENGIN_REGISTER_METHOD(zCMutex, &zCMutex::Lock, 0x005F27F0);
	ZENGIN_REGISTER_METHOD(zCMutex, &zCMutex::Unlock, 0x005F2810);

} // namespace Gothic_II_Classic
