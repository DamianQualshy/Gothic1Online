namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCPlayerInfo);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::zCPlayerInfo_OnInit, 0x00469BC0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::GetName, 0x0045BC00);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::CreateDistinctPlayer, 0x0046A090);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::GetID, 0x0046A910);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::PackToBuffer, 0x0046A940);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetActive, 0x0046A960);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::IsActive, 0x0046AC20);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::StorePlayerVobAsScript, 0x0046AC40);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::CreatePlayerVobFromScript, 0x0046AD50);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::GetPlayerVobScript, 0x0046ADF0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetPlayerVobScript, 0x0046AE00);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetPingStart, 0x0046AF60);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetPingEnd, 0x0046AF80);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPlayerInfo, &zCPlayerInfo::Init, void(zCPlayerInfo::*)(zSTRING const&, zSTRING const&), 0x0046A4E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPlayerInfo, &zCPlayerInfo::Init, void(zCPlayerInfo::*)(zSTRING const&, void*), 0x0046A330);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetName, 0x004374B0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetPlayerVob, 0x0046AEC0);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::Reset, 0x0046AC30);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::Deactivate, 0x0046AF00);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::IsDeactivated, 0x0046AF20);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::SetReady, 0x0046AF30);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::IsReady, 0x0046AF50);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::Pack, 0x0046A670);
	ZENGIN_REGISTER_METHOD(zCPlayerInfo, &zCPlayerInfo::Unpack, 0x0046A720);

} // namespace Gothic_I_Addon
