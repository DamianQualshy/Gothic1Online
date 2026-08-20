namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCSpawnManager);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::oCSpawnManager_OnInit, 0x00777730);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::ClearList, 0x00777880);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::InsertInList, 0x007778D0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::RemoveFromList, 0x007779B0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::IsSpawningEnabled, 0x00777A20);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::SetSpawningEnabled, 0x00777A30);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::SpawnImmediately, 0x00777A40);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::CheckInsertNpcs, 0x00777BE0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::ShowDebugInfo, 0x00777C70);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::CheckInsertNpc, 0x007780B0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::InitCameraPos, 0x007788C0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::InsertNpc, 0x00778920);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::SummonNpc, 0x00778A20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSpawnManager, &oCSpawnManager::SpawnNpc, oCNpc*(oCSpawnManager::*)(int, zSTRING const&, float), 0x00778B20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSpawnManager, &oCSpawnManager::SpawnNpc, void(oCSpawnManager::*)(oCNpc*, zSTRING const&, float), 0x00778BA0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSpawnManager, &oCSpawnManager::SpawnNpc, void(oCSpawnManager::*)(oCNpc*, zVEC3 const&, float), 0x00778E70);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::CheckForInvalidDialogCamPos, 0x00778FD0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::UseDeadNpcRoutinePos, 0x007791B0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::CanDeadNpcBeRemoved, 0x00779260);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::CheckRemoveNpc, 0x007792E0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::DeleteNpc, 0x00779690);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::DeleteAllSummoned, 0x00779720);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::Archive, 0x007797F0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::Unarchive, 0x00779890);

} // namespace Gothic_II_Addon
