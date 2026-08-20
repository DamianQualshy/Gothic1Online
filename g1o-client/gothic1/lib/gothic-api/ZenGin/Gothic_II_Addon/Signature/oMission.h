namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCMissionManager);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::oCMissionManager_OnInit, 0x00714FD0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::ClearMissions, 0x007150F0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::GetMission, 0x00715170);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::CreateAllMissions, 0x007151D0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::OfferThisMission, 0x007153B0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::GetAvailableMission, 0x00715680);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::GetStatus, 0x00715950);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::SetStatus, 0x00715B10);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::CancelMission, 0x00715D40);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::CreateMissionInfoList, 0x00715F10);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::TestNextMission, 0x00716160);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::Archive, 0x007161A0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::Unarchive, 0x007161E0);

	ZENGIN_REGISTER_CLASS(oCMission);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::oCMission_OnInit, 0x00716390);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::AddEntry, 0x007165B0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::SetCurrentUser, 0x007166C0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::GetCurrentUser, 0x00716800);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::GetStatusInfo, 0x00716820);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::GetStartTime, 0x00716930);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::SetStartTime, 0x00716950);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::CheckMission, 0x00716970);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::IsAvailable, 0x007169E0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::OfferConditions, 0x007169F0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Offer, 0x00716BA0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::SuccessConditions, 0x00716D50);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Success, 0x00716F00);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::FailureConditions, 0x007170B0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Failure, 0x00717260);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::ObsoleteConditions, 0x00717410);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Obsolete, 0x007175C0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Running, 0x00717770);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::GetStatus, 0x00717920);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::SetStatus, 0x00717930);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::OnTime, 0x00717A70);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Archive, 0x00717AD0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Unarchive, 0x00717BB0);

} // namespace Gothic_II_Addon
