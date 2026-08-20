namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCGameInfo);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::zCGameInfo_OnInit, 0x0044FE20);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::PackToBuffer, 0x00450070);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetNumPlayers, 0x004500A0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::Init, 0x0044FFE0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::Reset, 0x0044FFF0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::SetName, 0x00423E50);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetName, 0x00423F90);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::AddPlayer, 0x00450000);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::RemPlayer, 0x00450010);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetPlayerByID, 0x00450020);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetPlayerByVobID, 0x00450030);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetPlayerByNetAddress, 0x00450350);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::Pack, 0x004500C0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::Unpack, 0x00450160);

} // namespace Gothic_II_Addon
