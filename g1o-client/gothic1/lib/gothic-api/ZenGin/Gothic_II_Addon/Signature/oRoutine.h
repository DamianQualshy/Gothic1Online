namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCRtnCutscene);
	ZENGIN_REGISTER_METHOD(oCRtnCutscene, &oCRtnCutscene::oCRtnCutscene_OnInit, 0x00774270);
	ZENGIN_REGISTER_METHOD(oCRtnCutscene, &oCRtnCutscene::ResetPlayState, 0x00774160);

	ZENGIN_REGISTER_CLASS(oCRtnEntry);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCRtnEntry, &oCRtnEntry::oCRtnEntry_OnInit, void(oCRtnEntry::*)(), 0x007742C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCRtnEntry, &oCRtnEntry::oCRtnEntry_OnInit, void(oCRtnEntry::*)(int, int, int, int, int, zSTRING const&, int), 0x00774300);
	ZENGIN_REGISTER_METHOD(oCRtnEntry, &oCRtnEntry::GetTime, 0x00774520);
	ZENGIN_REGISTER_METHOD(oCRtnEntry, &oCRtnEntry::SetTime, 0x00774550);
	ZENGIN_REGISTER_METHOD(oCRtnEntry, &oCRtnEntry::GetState, 0x00774570);
	ZENGIN_REGISTER_METHOD(oCRtnEntry, &oCRtnEntry::GetWaypoint, 0x00774580);

	ZENGIN_REGISTER_CLASS(oCRtnManager);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::oCRtnManager_OnInit, 0x007746D0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::SetWorld, 0x00774900);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::ShowRoutine, 0x00774910);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::GetRoutineString, 0x00774B80);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::Insert, 0x00775000);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::UpdateGlobalRoutineEntry, 0x00775020);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::UpdateSingleRoutine, 0x00775080);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RestartRoutines, 0x007751E0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::FindRoutine, 0x00775580);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::CheckRoutines, 0x007756C0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::GetRoutinePos, 0x007757D0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::WriteRoutine, 0x00775AC0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::ReadRoutine, 0x00775BD0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RemoveEntry, 0x00775E70);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RemoveRoutine, 0x00775EF0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::CheckConsistency, 0x00776080);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RemoveOverlay, 0x00776330);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::SetDailyRoutinePos, 0x007764D0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::InitWayBoxes, 0x00776530);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::InsertWaybox, 0x00776580);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RemoveWayBoxes, 0x00776850);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::CreateWayBoxes, 0x00776960);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::DrawWayBoxes, 0x00776D20);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::CreateActiveList, 0x00776D60);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::CollidesWithWayBox, 0x00776E90);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::GetNumOfWayBoxes, 0x00777090);

} // namespace Gothic_II_Addon
