namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCRtnCutscene);
	ZENGIN_REGISTER_METHOD(oCRtnCutscene, &oCRtnCutscene::oCRtnCutscene_OnInit, 0x00702BA0);
	ZENGIN_REGISTER_METHOD(oCRtnCutscene, &oCRtnCutscene::ResetPlayState, 0x00702A80);

	ZENGIN_REGISTER_CLASS(oCRtnEntry);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCRtnEntry, &oCRtnEntry::oCRtnEntry_OnInit, void(oCRtnEntry::*)(), 0x00702BF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCRtnEntry, &oCRtnEntry::oCRtnEntry_OnInit, void(oCRtnEntry::*)(int, int, int, int, int, zSTRING const&, int), 0x00702C30);
	ZENGIN_REGISTER_METHOD(oCRtnEntry, &oCRtnEntry::GetTime, 0x00702E50);
	ZENGIN_REGISTER_METHOD(oCRtnEntry, &oCRtnEntry::SetTime, 0x00702E80);
	ZENGIN_REGISTER_METHOD(oCRtnEntry, &oCRtnEntry::GetState, 0x00702EA0);
	ZENGIN_REGISTER_METHOD(oCRtnEntry, &oCRtnEntry::GetWaypoint, 0x00702EB0);

	ZENGIN_REGISTER_CLASS(oCRtnManager);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::oCRtnManager_OnInit, 0x00703000);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::SetWorld, 0x00703230);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::ShowRoutine, 0x00703240);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::GetRoutineString, 0x007034C0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::Insert, 0x007038E0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::UpdateGlobalRoutineEntry, 0x00703900);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::UpdateSingleRoutine, 0x00703960);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RestartRoutines, 0x00703B10);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::FindRoutine, 0x00703EF0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::CheckRoutines, 0x00704020);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::GetRoutinePos, 0x00704130);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::WriteRoutine, 0x00704450);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::ReadRoutine, 0x00704560);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RemoveEntry, 0x00704800);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RemoveRoutine, 0x00704890);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RemoveOverlay, 0x00704A00);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::SetDailyRoutinePos, 0x00704B80);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::InitWayBoxes, 0x00704BE0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::InsertWaybox, 0x00704C30);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RemoveWayBoxes, 0x00704F40);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::CreateWayBoxes, 0x00705030);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::DrawWayBoxes, 0x00705460);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::CreateActiveList, 0x007054A0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::CollidesWithWayBox, 0x007055D0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::GetNumOfWayBoxes, 0x007057F0);

} // namespace Gothic_I_Addon
