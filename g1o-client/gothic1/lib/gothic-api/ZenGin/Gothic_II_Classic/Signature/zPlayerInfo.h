namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCPlayerInfo);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::zCPlayerInfo_OnInit, 0x00466BF0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::GetName, 0x00459710);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::CreateDistinctPlayer, 0x004670A0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::GetID, 0x004678D0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::PackToBuffer, 0x00467900);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetActive, 0x00467920);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::IsActive, 0x00467BF0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::StorePlayerVobAsScript, 0x00467C10);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::CreatePlayerVobFromScript, 0x00467D00);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::GetPlayerVobScript, 0x00467DA0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetPlayerVobScript, 0x00467DB0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetPingStart, 0x00467F00);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetPingEnd, 0x00467F20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPlayerInfo, &zCPlayerInfo::Init, void(zCPlayerInfo::*)(zSTRING const&, zSTRING const&), 0x004674D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPlayerInfo, &zCPlayerInfo::Init, void(zCPlayerInfo::*)(zSTRING const&, void*), 0x00467330);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetName, 0x00435F00);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetPlayerVob, 0x00467E60);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::Reset, 0x00467C00);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::Deactivate, 0x00467EA0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::IsDeactivated, 0x00467EC0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetReady, 0x00467ED0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::IsReady, 0x00467EF0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::Pack, 0x00467650);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::Unpack, 0x004676F0);

} // namespace Gothic_II_Classic
