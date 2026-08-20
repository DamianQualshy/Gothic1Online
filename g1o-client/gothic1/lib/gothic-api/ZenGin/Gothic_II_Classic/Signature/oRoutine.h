namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCRtnCutscene);
	ZENGIN_REGISTER_METHOD(oCRtnCutscene, &oCRtnCutscene::oCRtnCutscene_OnInit, 0x00714CE0);
	ZENGIN_REGISTER_METHOD(oCRtnCutscene, &oCRtnCutscene::ResetPlayState, 0x00714BD0);

	ZENGIN_REGISTER_CLASS(oCRtnEntry);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCRtnEntry, &oCRtnEntry::oCRtnEntry_OnInit, void(oCRtnEntry::*)(), 0x00714D30);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCRtnEntry, &oCRtnEntry::oCRtnEntry_OnInit, void(oCRtnEntry::*)(int, int, int, int, int, zSTRING const&, int), 0x00714D70);
	ZENGIN_REGISTER_METHOD(oCRtnEntry, &oCRtnEntry::GetTime, 0x00714F90);
	ZENGIN_REGISTER_METHOD(oCRtnEntry, &oCRtnEntry::SetTime, 0x00714FC0);
	ZENGIN_REGISTER_METHOD(oCRtnEntry, &oCRtnEntry::GetState, 0x00714FE0);
	ZENGIN_REGISTER_METHOD(oCRtnEntry, &oCRtnEntry::GetWaypoint, 0x00714FF0);

	ZENGIN_REGISTER_CLASS(oCRtnManager);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::oCRtnManager_OnInit, 0x00715140);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::SetWorld, 0x00715370);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::ShowRoutine, 0x00715380);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::GetRoutineString, 0x007155F0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::Insert, 0x00715A70);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::UpdateGlobalRoutineEntry, 0x00715A90);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::UpdateSingleRoutine, 0x00715AF0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RestartRoutines, 0x00715C50);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::FindRoutine, 0x00715FF0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::CheckRoutines, 0x00716130);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::GetRoutinePos, 0x00716240);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::WriteRoutine, 0x00716530);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::ReadRoutine, 0x00716640);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RemoveEntry, 0x007168E0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RemoveRoutine, 0x00716960);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::CheckConsistency, 0x00716AF0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RemoveOverlay, 0x00716DA0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::SetDailyRoutinePos, 0x00716F40);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::InitWayBoxes, 0x00716FA0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::InsertWaybox, 0x00716FF0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RemoveWayBoxes, 0x007172C0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::CreateWayBoxes, 0x007173D0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::DrawWayBoxes, 0x00717790);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::CreateActiveList, 0x007177D0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::CollidesWithWayBox, 0x00717900);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::GetNumOfWayBoxes, 0x00717B00);

} // namespace Gothic_II_Classic
