namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCPortalRoom);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCPortalRoom, &oCPortalRoom::oCPortalRoom_OnInit, void(oCPortalRoom::*)(), 0x006CA580);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCPortalRoom, &oCPortalRoom::oCPortalRoom_OnInit, void(oCPortalRoom::*)(zSTRING const&), 0x006CA700);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::GetOwnerNpc, 0x006CA950);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::GetOwnerGuild, 0x006CA9A0);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::GetPortalName, 0x006CA9B0);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::IsPortalMyRoom, 0x006CA9C0);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::SavePortalData, 0x006CAB60);
	ZENGIN_REGISTER_METHOD(oCPortalRoom, &oCPortalRoom::LoadPortalData, 0x006CABA0);

	ZENGIN_REGISTER_CLASS(oCPortalRoomManager);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::oCPortalRoomManager_OnInit, 0x006CAC50);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::CleanUp, 0x006CAC80);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::AssignPortalToNpc, 0x006CAD70);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::AssignPortalToGuild, 0x006CAFB0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetPortalRoomIndex, 0x006CB1E0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::IsPlayerInMyRoom, 0x006CB380);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::WasPlayerInMyRoom, 0x006CB3C0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::IsPortalMyRoom, 0x006CB3F0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetCurPlayerPortalRoomOwner, 0x006CB550);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetCurPlayerPortalRoomGuild, 0x006CB5B0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetFormerPlayerPortalRoomOwner, 0x006CB5C0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::GetFormerPlayerPortalRoomGuild, 0x006CB620);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::HasPlayerChangedPortalRoom, 0x006CB630);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::ShowDebugInfo, 0x006CB680);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::ShowPortalInfo, 0x006CBC30);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::SavePortalData, 0x006CBFC0);
	ZENGIN_REGISTER_METHOD(oCPortalRoomManager, &oCPortalRoomManager::LoadPortalData, 0x006CC030);

} // namespace Gothic_I_Classic
