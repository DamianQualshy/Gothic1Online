namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCResourceManager);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::zCResourceManager_OnInit, 0x005DC8C0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::PurgeCaches, 0x005DCA30);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::SetThreadingEnabled, 0x005DCC30);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::GetThreadingEnabled, 0x005DCC40);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::InitClassCache, 0x005DCC50);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::GetClassCache, 0x005DCEC0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::GetClassCacheIndex, 0x005DCF30);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::LoadResource, 0x005DCF60);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::CacheIn, 0x005DD040);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::CacheOut, 0x005DD350);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::TouchTimeStamp, 0x005DD480);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::DoFrameActivity, 0x005DD4F0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::Evict, 0x005DD580);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::RemoveCacheInQueue, 0x005DD760);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::GetNextCacheInQueue, 0x005DD7E0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::InsertCacheInQueue, 0x005DD7F0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::LockCacheInQueue, 0x005DD8C0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::UnlockCacheInQueue, 0x005DD8E0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::WaitForCacheIn, 0x005DD900);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::QueueProcess_Start, 0x005DD960);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::QueueProcess_Suspend, 0x005DD990);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::QueueProcess_Resume, 0x005DD9A0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::PrintStatusDebug, 0x005DD9D0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::SetShowDebugInfo, 0x006370C0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::GetShowDebugInfo, 0x006370D0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::ThreadProc, 0x005DD640);

	ZENGIN_REGISTER_CLASS(zCResourceManager::zCClassCache);
	ZENGIN_REGISTER_METHOD(zCResourceManager::zCClassCache, &zCResourceManager::zCClassCache::zCClassCache_OnInit, 0x005DE360);
	ZENGIN_REGISTER_METHOD(zCResourceManager::zCClassCache, &zCResourceManager::zCClassCache::InsertRes, 0x005DE390);
	ZENGIN_REGISTER_METHOD(zCResourceManager::zCClassCache, &zCResourceManager::zCClassCache::RemoveRes, 0x005DE3F0);
	ZENGIN_REGISTER_METHOD(zCResourceManager::zCClassCache, &zCResourceManager::zCClassCache::TouchRes, 0x005DE460);

	ZENGIN_REGISTER_CLASS(zCResource);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::zCResource_OnInit, 0x005DC470);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::CacheIn, 0x005C4A50);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::SetCacheInPriority, 0x005DC6B0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::CacheOut, 0x005DC7F0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::TouchTimeStamp, 0x005DC810);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::TouchTimeStampLocal, 0x005DC890);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::LockStateChange, 0x005DC8A0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::UnlockStateChange, 0x005DC8B0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::_GetClassDef, 0x005DC610);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::LoadResourceData, 0x005DC6E0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::ReleaseResourceData, 0x005DC7C0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::GetResSizeBytes, 0x005DC7D0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::GetCacheConfig, 0x005DC7E0);

} // namespace Gothic_II_Addon
