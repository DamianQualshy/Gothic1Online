namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCPortalRoom);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCPortalRoom, &oCPortalRoom::oCPortalRoom_OnInit, void(oCPortalRoom::*)(), 0x00700790);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCPortalRoom, &oCPortalRoom::oCPortalRoom_OnInit, void(oCPortalRoom::*)(zSTRING const&), 0x00700910);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::GetOwnerNpc, 0x00700B70);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::GetOwnerGuild, 0x00700BD0);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::GetPortalName, 0x00700BE0);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::IsPortalMyRoom, 0x00700BF0);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::SavePortalData, 0x00700DC0);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::LoadPortalData, 0x00700E00);

	ZENGIN_REGISTER_CLASS(oCPortalRoomManager);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::oCPortalRoomManager_OnInit, 0x00700EB0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::CleanUp, 0x00700EE0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::AssignPortalToNpc, 0x00700FF0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::AssignPortalToGuild, 0x00701240);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetPortalRoomIndex, 0x00701480);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::IsPlayerInMyRoom, 0x00701670);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::WasPlayerInMyRoom, 0x007016B0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::IsPortalMyRoom, 0x007016E0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetCurPlayerPortalRoomOwner, 0x00701830);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetCurPlayerPortalRoomGuild, 0x00701890);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetFormerPlayerPortalRoomOwner, 0x007018A0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetFormerPlayerPortalRoomGuild, 0x00701900);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::HasPlayerChangedPortalRoom, 0x00701910);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::ShowDebugInfo, 0x00701960);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::ShowPortalInfo, 0x00701FA0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::SavePortalData, 0x00702380);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::LoadPortalData, 0x007023F0);

} // namespace Gothic_I_Addon
