namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCPlayerInfo);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::oCPlayerInfo_OnInit, 0x00437490);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::GetInstanceName, 0x00437790);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::GetInstance, 0x004377F0);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::Init, 0x00437610);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::Reset, 0x00437840);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::Pack, 0x00437800);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::Unpack, 0x00437820);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::SetInstance, 0x00437640);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::SetInstanceByName, 0x00437650);

} // namespace Gothic_I_Addon
