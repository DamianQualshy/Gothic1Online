namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCGameInfo);
	ZENGIN_REGISTER_METHOD(oCGameInfo, &oCGameInfo::oCGameInfo_OnInit, 0x00425B90);
	ZENGIN_REGISTER_METHOD(oCGameInfo, &oCGameInfo::Init, 0x00425D70);
	ZENGIN_REGISTER_METHOD(oCGameInfo, &oCGameInfo::Pack, 0x00425E30);
	ZENGIN_REGISTER_METHOD(oCGameInfo, &oCGameInfo::Unpack, 0x00425E50);

} // namespace Gothic_I_Addon
