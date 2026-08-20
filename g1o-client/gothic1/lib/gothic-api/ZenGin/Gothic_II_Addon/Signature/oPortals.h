namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCPortalRoom);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCPortalRoom, &oCPortalRoom::oCPortalRoom_OnInit, void(oCPortalRoom::*)(), 0x00771F00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCPortalRoom, &oCPortalRoom::oCPortalRoom_OnInit, void(oCPortalRoom::*)(zSTRING const&), 0x00772080);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::GetOwnerNpc, 0x007722D0);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::GetOwnerGuild, 0x00772320);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::GetPortalName, 0x00772330);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::IsPortalMyRoom, 0x00772340);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::SavePortalData, 0x007725A0);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::LoadPortalData, 0x007725E0);

	ZENGIN_REGISTER_CLASS(oCPortalRoomManager);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::oCPortalRoomManager_OnInit, 0x00772690);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::CleanUp, 0x007726C0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::AssignPortalToNpc, 0x007727B0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::AssignPortalToGuild, 0x007729E0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetPortalRoomIndex, 0x00772BE0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::IsPlayerInMyRoom, 0x00772D80);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::IsNSCInPlayerRoom, 0x00772DC0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::WasPlayerInMyRoom, 0x00772E00);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::IsPortalMyRoom, 0x00772E30);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetCurPlayerPortalRoomOwner, 0x00772F90);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetCurPlayerPortalRoomGuild, 0x00772FF0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetFormerPlayerPortalRoomOwner, 0x00773000);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetFormerPlayerPortalRoomGuild, 0x00773060);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::HasPlayerChangedPortalRoom, 0x00773070);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetCurNpcPortalRoomOwner, 0x007730C0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetCurNpcPortalRoomGuild, 0x00773160);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::ShowDebugInfo, 0x007731A0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::ShowPortalInfo, 0x007737E0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::SavePortalData, 0x00773B70);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::LoadPortalData, 0x00773BE0);

} // namespace Gothic_II_Addon
