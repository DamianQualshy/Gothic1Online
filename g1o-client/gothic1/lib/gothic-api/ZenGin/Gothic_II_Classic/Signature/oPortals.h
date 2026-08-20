namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCPortalRoom);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCPortalRoom, &oCPortalRoom::oCPortalRoom_OnInit, void(oCPortalRoom::*)(), 0x00712970);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCPortalRoom, &oCPortalRoom::oCPortalRoom_OnInit, void(oCPortalRoom::*)(zSTRING const&), 0x00712AF0);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::GetOwnerNpc, 0x00712D40);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::GetOwnerGuild, 0x00712D90);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::GetPortalName, 0x00712DA0);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::IsPortalMyRoom, 0x00712DB0);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::SavePortalData, 0x00713010);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::LoadPortalData, 0x00713050);

	ZENGIN_REGISTER_CLASS(oCPortalRoomManager);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::oCPortalRoomManager_OnInit, 0x00713100);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::CleanUp, 0x00713130);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::AssignPortalToNpc, 0x00713220);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::AssignPortalToGuild, 0x00713450);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetPortalRoomIndex, 0x00713650);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::IsPlayerInMyRoom, 0x007137F0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::IsNSCInPlayerRoom, 0x00713830);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::WasPlayerInMyRoom, 0x00713870);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::IsPortalMyRoom, 0x007138A0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetCurPlayerPortalRoomOwner, 0x00713A00);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetCurPlayerPortalRoomGuild, 0x00713A60);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetFormerPlayerPortalRoomOwner, 0x00713A70);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetFormerPlayerPortalRoomGuild, 0x00713AD0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::HasPlayerChangedPortalRoom, 0x00713AE0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetCurNpcPortalRoomOwner, 0x00713B30);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetCurNpcPortalRoomGuild, 0x00713BD0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::ShowDebugInfo, 0x00713C10);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::ShowPortalInfo, 0x00714250);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::SavePortalData, 0x007145E0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::LoadPortalData, 0x00714650);

} // namespace Gothic_II_Classic
