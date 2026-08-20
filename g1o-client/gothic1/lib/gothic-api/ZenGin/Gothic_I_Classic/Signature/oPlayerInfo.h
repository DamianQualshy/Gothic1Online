namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCPlayerInfo);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::oCPlayerInfo_OnInit, 0x00433580);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::GetInstanceName, 0x00433870);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::GetInstance, 0x004338C0);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::Init, 0x00433700);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::Reset, 0x00433910);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::Pack, 0x004338D0);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::Unpack, 0x004338F0);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::SetInstance, 0x00433720);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::SetInstanceByName, 0x00433730);

} // namespace Gothic_I_Classic
