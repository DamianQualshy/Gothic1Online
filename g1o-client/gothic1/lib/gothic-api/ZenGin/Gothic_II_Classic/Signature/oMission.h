namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCMissionManager);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::oCMissionManager_OnInit, 0x006B6F40);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::ClearMissions, 0x006B7060);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::GetMission, 0x006B70E0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::CreateAllMissions, 0x006B7140);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::OfferThisMission, 0x006B7320);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::GetAvailableMission, 0x006B75F0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::GetStatus, 0x006B78C0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::SetStatus, 0x006B7A80);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::CancelMission, 0x006B7CB0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::CreateMissionInfoList, 0x006B7E80);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::TestNextMission, 0x006B80D0);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::Archive, 0x006B8110);
	ZENGIN_REGISTER_METHOD(oCMissionManager, &oCMissionManager::Unarchive, 0x006B8150);

	ZENGIN_REGISTER_CLASS(oCMission);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::oCMission_OnInit, 0x006B8300);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::AddEntry, 0x006B8520);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::SetCurrentUser, 0x006B8630);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::GetCurrentUser, 0x006B8770);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::GetStatusInfo, 0x006B8790);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::GetStartTime, 0x006B88A0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::SetStartTime, 0x006B88C0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::CheckMission, 0x006B88E0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::IsAvailable, 0x006B8950);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::OfferConditions, 0x006B8960);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Offer, 0x006B8B10);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::SuccessConditions, 0x006B8CC0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Success, 0x006B8E70);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::FailureConditions, 0x006B9020);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Failure, 0x006B91D0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::ObsoleteConditions, 0x006B9380);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Obsolete, 0x006B9530);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Running, 0x006B96E0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::GetStatus, 0x006B9890);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::SetStatus, 0x006B98A0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::OnTime, 0x006B99E0);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Archive, 0x006B9A40);
	ZENGIN_REGISTER_METHOD(oCMission, &oCMission::Unarchive, 0x006B9B20);

} // namespace Gothic_II_Classic
