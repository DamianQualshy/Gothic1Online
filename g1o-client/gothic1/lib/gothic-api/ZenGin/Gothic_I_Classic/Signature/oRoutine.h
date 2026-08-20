namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCRtnCutscene);
	ZENGIN_REGISTER_METHOD(oCRtnCutscene, &oCRtnCutscene::oCRtnCutscene_OnInit, 0x006CC510);
	ZENGIN_REGISTER_METHOD(oCRtnCutscene, &oCRtnCutscene::ResetPlayState, 0x006CC400);

	ZENGIN_REGISTER_CLASS(oCRtnEntry);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCRtnEntry, &oCRtnEntry::oCRtnEntry_OnInit, void(oCRtnEntry::*)(), 0x006CC560);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCRtnEntry, &oCRtnEntry::oCRtnEntry_OnInit, void(oCRtnEntry::*)(int, int, int, int, int, zSTRING const&, int), 0x006CC5A0);
	ZENGIN_REGISTER_METHOD(oCRtnEntry, &oCRtnEntry::GetTime, 0x006CC7C0);
	ZENGIN_REGISTER_METHOD(oCRtnEntry, &oCRtnEntry::SetTime, 0x006CC7F0);
	ZENGIN_REGISTER_METHOD(oCRtnEntry, &oCRtnEntry::GetState, 0x006CC810);
	ZENGIN_REGISTER_METHOD(oCRtnEntry, &oCRtnEntry::GetWaypoint, 0x006CC820);

	ZENGIN_REGISTER_CLASS(oCRtnManager);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::oCRtnManager_OnInit, 0x006CC970);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::SetWorld, 0x006CCBA0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::ShowRoutine, 0x006CCBB0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::GetRoutineString, 0x006CCE30);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::Insert, 0x006CD1C0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::UpdateGlobalRoutineEntry, 0x006CD1E0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::UpdateSingleRoutine, 0x006CD240);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RestartRoutines, 0x006CD390);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::FindRoutine, 0x006CD720);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::CheckRoutines, 0x006CD860);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::GetRoutinePos, 0x006CD970);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::WriteRoutine, 0x006CDC60);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::ReadRoutine, 0x006CDD70);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RemoveEntry, 0x006CE040);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RemoveRoutine, 0x006CE0C0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RemoveOverlay, 0x006CE250);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::SetDailyRoutinePos, 0x006CE3F0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::InitWayBoxes, 0x006CE450);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::InsertWaybox, 0x006CE4A0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::RemoveWayBoxes, 0x006CE7A0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::CreateWayBoxes, 0x006CE8B0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::DrawWayBoxes, 0x006CECC0);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::CreateActiveList, 0x006CED00);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::CollidesWithWayBox, 0x006CEE30);
	ZENGIN_REGISTER_METHOD(oCRtnManager, &oCRtnManager::GetNumOfWayBoxes, 0x006CF060);

} // namespace Gothic_I_Classic
