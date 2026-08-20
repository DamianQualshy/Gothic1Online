namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCPlayerInfo);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::zCPlayerInfo_OnInit, 0x004621D0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::GetName, 0x00454DF0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::CreateDistinctPlayer, 0x00462650);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::GetID, 0x00462E60);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::PackToBuffer, 0x00462E90);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetActive, 0x00462EB0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::IsActive, 0x00463120);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::StorePlayerVobAsScript, 0x00463140);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::CreatePlayerVobFromScript, 0x00463240);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::GetPlayerVobScript, 0x004632E0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetPlayerVobScript, 0x004632F0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetPingStart, 0x00463450);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetPingEnd, 0x00463470);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPlayerInfo, &zCPlayerInfo::Init, void(zCPlayerInfo::*)(zSTRING const&, zSTRING const&), 0x00462A50);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPlayerInfo, &zCPlayerInfo::Init, void(zCPlayerInfo::*)(zSTRING const&, void*), 0x004628A0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetName, 0x004335A0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetPlayerVob, 0x004633B0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::Reset, 0x00463130);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::Deactivate, 0x004633F0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::IsDeactivated, 0x00463410);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetReady, 0x00463420);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::IsReady, 0x00463440);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::Pack, 0x00462BE0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::Unpack, 0x00462C80);

} // namespace Gothic_I_Classic
