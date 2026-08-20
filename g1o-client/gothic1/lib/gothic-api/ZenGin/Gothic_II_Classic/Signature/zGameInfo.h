namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCGameInfo);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::zCGameInfo_OnInit, 0x0044F6D0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::PackToBuffer, 0x0044F920);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetNumPlayers, 0x0044F950);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::Init, 0x0044F890);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::Reset, 0x0044F8A0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::SetName, 0x00423B20);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetName, 0x00423C60);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::AddPlayer, 0x0044F8B0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::RemPlayer, 0x0044F8C0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetPlayerByID, 0x0044F8D0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetPlayerByVobID, 0x0044F8E0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetPlayerByNetAddress, 0x0044FC00);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::Pack, 0x0044F970);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::Unpack, 0x0044FA10);

} // namespace Gothic_II_Classic
