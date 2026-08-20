namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCGameInfo);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::zCGameInfo_OnInit, 0x0044B6A0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::PackToBuffer, 0x0044B8F0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetNumPlayers, 0x0044B920);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::Init, 0x0044B860);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::Reset, 0x0044B870);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::SetName, 0x00423470);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetName, 0x004235B0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::AddPlayer, 0x0044B880);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::RemPlayer, 0x0044B890);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetPlayerByID, 0x0044B8A0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetPlayerByVobID, 0x0044B8B0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetPlayerByNetAddress, 0x0044BBD0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::Pack, 0x0044B940);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::Unpack, 0x0044B9E0);

} // namespace Gothic_I_Classic
