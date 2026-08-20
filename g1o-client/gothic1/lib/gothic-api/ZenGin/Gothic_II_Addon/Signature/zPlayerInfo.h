namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCPlayerInfo);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::zCPlayerInfo_OnInit, 0x00467820);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::GetName, 0x00459E60);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::CreateDistinctPlayer, 0x00467CD0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::GetID, 0x00468500);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::PackToBuffer, 0x00468530);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetActive, 0x00468550);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::IsActive, 0x00468820);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::StorePlayerVobAsScript, 0x00468840);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::CreatePlayerVobFromScript, 0x00468930);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::GetPlayerVobScript, 0x004689D0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetPlayerVobScript, 0x004689E0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetPingStart, 0x00468B30);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetPingEnd, 0x00468B50);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPlayerInfo, &zCPlayerInfo::Init, void(zCPlayerInfo::*)(zSTRING const&, zSTRING const&), 0x00468100);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPlayerInfo, &zCPlayerInfo::Init, void(zCPlayerInfo::*)(zSTRING const&, void*), 0x00467F60);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetName, 0x00436400);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetPlayerVob, 0x00468A90);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::Reset, 0x00468830);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::Deactivate, 0x00468AD0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::IsDeactivated, 0x00468AF0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetReady, 0x00468B00);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::IsReady, 0x00468B20);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::Pack, 0x00468280);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::Unpack, 0x00468320);

} // namespace Gothic_II_Addon
