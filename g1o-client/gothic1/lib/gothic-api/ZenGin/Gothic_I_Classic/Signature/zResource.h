namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCResourceManager);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::zCResourceManager_OnInit, 0x005B55B0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::PurgeCaches, 0x005B5720);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::SetThreadingEnabled, 0x005B58A0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::GetThreadingEnabled, 0x005B58B0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::InitClassCache, 0x005B58C0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::GetClassCache, 0x005B5B30);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::GetClassCacheIndex, 0x005B5BA0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::LoadResource, 0x005B5BD0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::CacheIn, 0x005B5CB0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::CacheOut, 0x005B5FB0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::TouchTimeStamp, 0x005B60E0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::DoFrameActivity, 0x005B6150);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::Evict, 0x005B61E0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::RemoveCacheInQueue, 0x005B63C0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::GetNextCacheInQueue, 0x005B6440);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::InsertCacheInQueue, 0x005B6450);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::LockCacheInQueue, 0x005B6520);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::UnlockCacheInQueue, 0x005B6540);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::WaitForCacheIn, 0x005B6560);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::QueueProcess_Start, 0x005B65C0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::QueueProcess_Suspend, 0x005B65F0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::QueueProcess_Resume, 0x005B6600);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::PrintStatusDebug, 0x005B6630);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::ThreadProc, 0x005B62A0);

	ZENGIN_REGISTER_CLASS(zCResourceManager::zCClassCache);
	ZENGIN_REGISTER_METHOD(zCResourceManager::zCClassCache, &zCResourceManager::zCClassCache::zCClassCache_OnInit, 0x005B6E10);
	ZENGIN_REGISTER_METHOD(zCResourceManager::zCClassCache, &zCResourceManager::zCClassCache::InsertRes, 0x005B6E40);
	ZENGIN_REGISTER_METHOD(zCResourceManager::zCClassCache, &zCResourceManager::zCClassCache::RemoveRes, 0x005B6EA0);
	ZENGIN_REGISTER_METHOD(zCResourceManager::zCClassCache, &zCResourceManager::zCClassCache::TouchRes, 0x005B6F10);

	ZENGIN_REGISTER_CLASS(zCResource);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::zCResource_OnInit, 0x005B5160);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::SetCacheInPriority, 0x005B53A0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::CacheOut, 0x005B54E0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::TouchTimeStamp, 0x005B5500);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::TouchTimeStampLocal, 0x005B5580);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::LockStateChange, 0x005B5590);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::UnlockStateChange, 0x005B55A0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::CacheIn, 0x00715480);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::_GetClassDef, 0x005B5300);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::LoadResourceData, 0x005B53D0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::ReleaseResourceData, 0x005B54B0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::GetResSizeBytes, 0x005B54C0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::GetCacheConfig, 0x005B54D0);

} // namespace Gothic_I_Classic
