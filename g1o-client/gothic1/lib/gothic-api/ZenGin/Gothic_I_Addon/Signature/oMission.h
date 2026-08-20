namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCMissionManager);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::oCMissionManager_OnInit, 0x006A1E40);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::ClearMissions, 0x006A1F60);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::GetMission, 0x006A1FD0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::CreateAllMissions, 0x006A2030);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::OfferThisMission, 0x006A2260);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::GetAvailableMission, 0x006A2550);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::GetStatus, 0x006A2840);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::SetStatus, 0x006A2A60);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::CancelMission, 0x006A2CA0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::CreateMissionInfoList, 0x006A2ED0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::TestNextMission, 0x006A3110);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::Archive, 0x006A3150);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::Unarchive, 0x006A3190);

	ZENGIN_REGISTER_CLASS(oCMission);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::oCMission_OnInit, 0x006A3370);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::AddEntry, 0x006A35C0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::SetCurrentUser, 0x006A36D0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::GetCurrentUser, 0x006A3830);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::GetStatusInfo, 0x006A3850);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::GetStartTime, 0x006A3990);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::SetStartTime, 0x006A39B0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::CheckMission, 0x006A39D0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::IsAvailable, 0x006A3A40);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::OfferConditions, 0x006A3A50);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Offer, 0x006A3C20);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::SuccessConditions, 0x006A3DF0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Success, 0x006A3FC0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::FailureConditions, 0x006A4190);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Failure, 0x006A4360);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::ObsoleteConditions, 0x006A4530);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Obsolete, 0x006A4700);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Running, 0x006A48D0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::GetStatus, 0x006A4AA0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::SetStatus, 0x006A4AB0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::OnTime, 0x006A4C10);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Archive, 0x006A4C70);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Unarchive, 0x006A4D50);

} // namespace Gothic_I_Addon
