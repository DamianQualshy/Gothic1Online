namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCGameInfo);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::zCGameInfo_OnInit, 0x00451BD0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::PackToBuffer, 0x00451E70);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetNumPlayers, 0x00451EB0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::Init, 0x00451DB0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::Reset, 0x00451DC0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::SetName, 0x00425BB0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetName, 0x00425CF0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::AddPlayer, 0x00451DD0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::RemPlayer, 0x00451DF0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetPlayerByID, 0x00451E10);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetPlayerByVobID, 0x00451E30);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::GetPlayerByNetAddress, 0x00452150);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::Pack, 0x00451ED0);
	ZENGIN_REGISTER_METHOD(zCGameInfo, &zCGameInfo::Unpack, 0x00451F60);

} // namespace Gothic_I_Addon
