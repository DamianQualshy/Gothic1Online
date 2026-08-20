namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCResourceManager);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::zCResourceManager_OnInit, 0x005D2D00);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::PurgeCaches, 0x005D2E70);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::SetThreadingEnabled, 0x005D3000);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::GetThreadingEnabled, 0x005D3010);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::InitClassCache, 0x005D3020);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::GetClassCache, 0x005D32C0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::GetClassCacheIndex, 0x005D3330);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::LoadResource, 0x005D3360);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::CacheIn, 0x005D3450);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::CacheOut, 0x005D3770);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::TouchTimeStamp, 0x005D38B0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::DoFrameActivity, 0x005D3930);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::Evict, 0x005D39C0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::RemoveCacheInQueue, 0x005D3BC0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::GetNextCacheInQueue, 0x005D3C40);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::InsertCacheInQueue, 0x005D3C50);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::LockCacheInQueue, 0x005D3D20);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::UnlockCacheInQueue, 0x005D3D40);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::WaitForCacheIn, 0x005D3D60);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::QueueProcess_Start, 0x005D3DC0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::QueueProcess_Suspend, 0x005D3DF0);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::QueueProcess_Resume, 0x005D3E00);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::PrintStatusDebug, 0x005D3E40);
	ZENGIN_REGISTER_METHOD(zCResourceManager, &zCResourceManager::ThreadProc, 0x005D3A90);

	ZENGIN_REGISTER_CLASS(zCResourceManager::zCClassCache);
	ZENGIN_REGISTER_METHOD(zCResourceManager::zCClassCache, &zCResourceManager::zCClassCache::zCClassCache_OnInit, 0x005D4760);
	ZENGIN_REGISTER_METHOD(zCResourceManager::zCClassCache, &zCResourceManager::zCClassCache::InsertRes, 0x005D4790);
	ZENGIN_REGISTER_METHOD(zCResourceManager::zCClassCache, &zCResourceManager::zCClassCache::RemoveRes, 0x005D47F0);
	ZENGIN_REGISTER_METHOD(zCResourceManager::zCClassCache, &zCResourceManager::zCClassCache::TouchRes, 0x005D4860);

	ZENGIN_REGISTER_CLASS(zCResource);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::zCResource_OnInit, 0x005D28A0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::SetCacheInPriority, 0x005D2AE0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::CacheOut, 0x005D2C20);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::TouchTimeStamp, 0x005D2C40);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::TouchTimeStampLocal, 0x005D2CD0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::LockStateChange, 0x005D2CE0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::UnlockStateChange, 0x005D2CF0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::CacheIn, 0x007512E0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::_GetClassDef, 0x005D2A40);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::LoadResourceData, 0x005D2B10);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::ReleaseResourceData, 0x005D2BF0);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::GetResSizeBytes, 0x005D2C00);
	ZENGIN_REGISTER_METHOD(zCResource, &zCResource::GetCacheConfig, 0x005D2C10);

} // namespace Gothic_I_Addon
