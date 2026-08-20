namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCMissionManager);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::oCMissionManager_OnInit, 0x00673DD0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::ClearMissions, 0x00673F00);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::GetMission, 0x00673F80);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::CreateAllMissions, 0x00673FE0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::OfferThisMission, 0x006741D0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::GetAvailableMission, 0x006744B0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::GetStatus, 0x00674790);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::SetStatus, 0x006749B0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::CancelMission, 0x00674BF0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::CreateMissionInfoList, 0x00674E30);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::TestNextMission, 0x00675080);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::Archive, 0x006750C0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::Unarchive, 0x00675100);

	ZENGIN_REGISTER_CLASS(oCMission);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::oCMission_OnInit, 0x006752E0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::AddEntry, 0x00675510);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::SetCurrentUser, 0x00675620);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::GetCurrentUser, 0x00675790);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::GetStatusInfo, 0x006757B0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::GetStartTime, 0x006758F0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::SetStartTime, 0x00675910);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::CheckMission, 0x00675930);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::IsAvailable, 0x006759A0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::OfferConditions, 0x006759B0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Offer, 0x00675B60);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::SuccessConditions, 0x00675D10);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Success, 0x00675EC0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::FailureConditions, 0x00676070);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Failure, 0x00676220);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::ObsoleteConditions, 0x006763D0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Obsolete, 0x00676580);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Running, 0x00676730);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::GetStatus, 0x006768E0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::SetStatus, 0x006768F0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::OnTime, 0x00676A30);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Archive, 0x00676A90);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Unarchive, 0x00676B70);

} // namespace Gothic_I_Classic
