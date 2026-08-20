namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCGameInfo);
	ZENGIN_REGISTER_METHOD(oCGameInfo, &oCGameInfo::oCGameInfo_OnInit, 0x00423E30);
	ZENGIN_REGISTER_METHOD(oCGameInfo, &oCGameInfo::Init, 0x00424010);
	ZENGIN_REGISTER_METHOD(oCGameInfo, &oCGameInfo::Pack, 0x004240D0);
	ZENGIN_REGISTER_METHOD(oCGameInfo, &oCGameInfo::Unpack, 0x004240E0);

} // namespace Gothic_II_Addon
