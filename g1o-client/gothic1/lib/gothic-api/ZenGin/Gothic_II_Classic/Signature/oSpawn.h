namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCSpawnManager);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::oCSpawnManager_OnInit, 0x007181A0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::ClearList, 0x007182F0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::InsertInList, 0x00718340);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::RemoveFromList, 0x00718420);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::IsSpawningEnabled, 0x00718490);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::SetSpawningEnabled, 0x007184A0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::SpawnImmediately, 0x007184B0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::CheckInsertNpcs, 0x00718650);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::ShowDebugInfo, 0x007186E0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::CheckInsertNpc, 0x00718B20);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::InitCameraPos, 0x00719000);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::InsertNpc, 0x00719060);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::SummonNpc, 0x00719160);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSpawnManager, &oCSpawnManager::SpawnNpc, oCNpc*(oCSpawnManager::*)(int, zSTRING const&, float), 0x00719260);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSpawnManager, &oCSpawnManager::SpawnNpc, void(oCSpawnManager::*)(oCNpc*, zSTRING const&, float), 0x007192E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSpawnManager, &oCSpawnManager::SpawnNpc, void(oCSpawnManager::*)(oCNpc*, zVEC3 const&, float), 0x007195B0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::CheckForInvalidDialogCamPos, 0x00719710);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::CheckRemoveNpc, 0x007198F0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::DeleteNpc, 0x00719C50);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::DeleteAllSummoned, 0x00719CE0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::Archive, 0x00719DB0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::Unarchive, 0x00719E50);

} // namespace Gothic_II_Classic
