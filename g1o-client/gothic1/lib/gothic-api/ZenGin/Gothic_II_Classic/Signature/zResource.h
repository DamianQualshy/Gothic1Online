namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCResourceManager);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::zCResourceManager_OnInit, 0x005D5B00);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::PurgeCaches, 0x005D5C70);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::SetThreadingEnabled, 0x005D5E70);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::GetThreadingEnabled, 0x005D5E80);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::InitClassCache, 0x005D5E90);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::GetClassCache, 0x005D6100);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::GetClassCacheIndex, 0x005D6170);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::LoadResource, 0x005D61A0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::CacheIn, 0x005D6280);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::CacheOut, 0x005D6590);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::TouchTimeStamp, 0x005D66C0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::DoFrameActivity, 0x005D6730);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::Evict, 0x005D67C0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::RemoveCacheInQueue, 0x005D69A0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::GetNextCacheInQueue, 0x005D6A20);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::InsertCacheInQueue, 0x005D6A30);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::LockCacheInQueue, 0x005D6B00);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::UnlockCacheInQueue, 0x005D6B20);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::WaitForCacheIn, 0x005D6B40);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::QueueProcess_Start, 0x005D6BA0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::QueueProcess_Suspend, 0x005D6BD0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::QueueProcess_Resume, 0x005D6BE0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::PrintStatusDebug, 0x005D6C10);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::SetShowDebugInfo, 0x0062F8F0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::GetShowDebugInfo, 0x0062F900);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::ThreadProc, 0x005D6880);

	ZENGIN_REGISTER_CLASS(zCResourceManager::zCClassCache);
	ZENGIN_REGISTER_METHOD(zCResourceManager::zCClassCache, &zCResourceManager::zCClassCache::zCClassCache_OnInit, 0x005D75A0);
	ZENGIN_REGISTER_METHOD(zCResourceManager::zCClassCache, &zCResourceManager::zCClassCache::InsertRes, 0x005D75D0);
	ZENGIN_REGISTER_METHOD(zCResourceManager::zCClassCache, &zCResourceManager::zCClassCache::RemoveRes, 0x005D7630);
	ZENGIN_REGISTER_METHOD(zCResourceManager::zCClassCache, &zCResourceManager::zCClassCache::TouchRes, 0x005D76A0);

	ZENGIN_REGISTER_CLASS(zCResource);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::zCResource_OnInit, 0x005D56B0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::CacheIn, 0x005BEEE0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::SetCacheInPriority, 0x005D58F0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::CacheOut, 0x005D5A30);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::TouchTimeStamp, 0x005D5A50);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::TouchTimeStampLocal, 0x005D5AD0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::LockStateChange, 0x005D5AE0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::UnlockStateChange, 0x005D5AF0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::_GetClassDef, 0x005D5850);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::LoadResourceData, 0x005D5920);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::ReleaseResourceData, 0x005D5A00);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::GetResSizeBytes, 0x005D5A10);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::GetCacheConfig, 0x005D5A20);

} // namespace Gothic_II_Classic
