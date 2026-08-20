namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCSpawnManager);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::oCSpawnManager_OnInit, 0x006CF4D0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::ClearList, 0x006CF630);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::InsertInList, 0x006CF680);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::RemoveFromList, 0x006CF770);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::IsSpawningEnabled, 0x006CF7E0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::SetSpawningEnabled, 0x006CF7F0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::SpawnImmediately, 0x006CF800);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::CheckInsertNpcs, 0x006CF9A0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::ShowDebugInfo, 0x006CFA30);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::CheckInsertNpc, 0x006CFDE0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::InitCameraPos, 0x006D01F0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::InsertNpc, 0x006D0250);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::SummonNpc, 0x006D0350);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSpawnManager, &oCSpawnManager::SpawnNpc, oCNpc*(oCSpawnManager::*)(int, zSTRING const&, float), 0x006D0450);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSpawnManager, &oCSpawnManager::SpawnNpc, void(oCSpawnManager::*)(oCNpc*, zSTRING const&, float), 0x006D04C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCSpawnManager, &oCSpawnManager::SpawnNpc, void(oCSpawnManager::*)(oCNpc*, zVEC3 const&, float), 0x006D0710);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::CheckForInvalidDialogCamPos, 0x006D08A0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::CheckRemoveNpc, 0x006D0A80);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::DeleteNpc, 0x006D0DE0);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::DeleteAllSummoned, 0x006D0E70);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::Archive, 0x006D0F40);
	ZENGIN_REGISTER_METHOD(oCSpawnManager, &oCSpawnManager::Unarchive, 0x006D0FD0);

} // namespace Gothic_I_Classic
