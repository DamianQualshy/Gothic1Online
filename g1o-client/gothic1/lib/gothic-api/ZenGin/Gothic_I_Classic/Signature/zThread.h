namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCThread);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::zCThread_OnInit, 0x005CE010);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::SleepThread, 0x005CE280);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::BeginThread, 0x005CE0E0);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::EndThread, 0x005CE1E0);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::IsThreadRunning, 0x005B5640);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::SuspendThread, 0x005CE220);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::ResumeThread, 0x005CE250);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::GetTerminationRequested, 0x005B5650);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::SetTerminationRequested, 0x005B5660);
	ZENGIN_REGISTER_METHOD(zCThread, &zCThread::ThreadProc, 0x005CE1D0);

	ZENGIN_REGISTER_CLASS(zCCriticalSection);
	ZENGIN_REGISTER_METHOD(zCCriticalSection, &zCCriticalSection::zCCriticalSection_OnInit, 0x005CE290);
	ZENGIN_REGISTER_METHOD(zCCriticalSection, &zCCriticalSection::Lock, 0x005CE310);
	ZENGIN_REGISTER_METHOD(zCCriticalSection, &zCCriticalSection::Unlock, 0x005CE330);

	ZENGIN_REGISTER_CLASS(zCMutex);
	ZENGIN_REGISTER_METHOD(zCMutex, &zCMutex::zCMutex_OnInit, 0x005CE340);
	ZENGIN_REGISTER_METHOD(zCMutex, &zCMutex::Lock, 0x005CE490);
	ZENGIN_REGISTER_METHOD(zCMutex, &zCMutex::Unlock, 0x005CE4B0);

} // namespace Gothic_I_Classic
