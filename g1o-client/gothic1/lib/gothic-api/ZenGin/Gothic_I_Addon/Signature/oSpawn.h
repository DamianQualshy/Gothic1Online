namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCSpawnManager);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::oCSpawnManager_OnInit, 0x00705EE0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::ClearList, 0x00706040);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::InsertInList, 0x00706090);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::RemoveFromList, 0x00706190);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::IsSpawningEnabled, 0x00706200);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::SetSpawningEnabled, 0x00706210);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::SpawnImmediately, 0x00706220);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::CheckInsertNpcs, 0x007063D0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::ShowDebugInfo, 0x00706470);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::CheckInsertNpc, 0x00706880);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::InitCameraPos, 0x00706CE0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::InsertNpc, 0x00706D40);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::SummonNpc, 0x00706E40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSpawnManager, &oCSpawnManager::SpawnNpc, oCNpc*(oCSpawnManager::*)(int, zSTRING const&, float), 0x00706F40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSpawnManager, &oCSpawnManager::SpawnNpc, void(oCSpawnManager::*)(oCNpc*, zSTRING const&, float), 0x00706FB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSpawnManager, &oCSpawnManager::SpawnNpc, void(oCSpawnManager::*)(oCNpc*, zVEC3 const&, float), 0x00707230);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::CheckForInvalidDialogCamPos, 0x007073C0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::CheckRemoveNpc, 0x007075C0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::DeleteNpc, 0x00707950);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::DeleteAllSummoned, 0x007079F0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::Archive, 0x00707AC0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::Unarchive, 0x00707B50);

} // namespace Gothic_I_Addon
