namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCPlayerInfo);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::oCPlayerInfo_OnInit, 0x004363E0);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::GetInstanceName, 0x004366D0);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::GetInstance, 0x00436720);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::Init, 0x00436560);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::Reset, 0x00436770);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::Pack, 0x00436730);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::Unpack, 0x00436750);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::SetInstance, 0x00436580);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::SetInstanceByName, 0x00436590);

} // namespace Gothic_II_Addon
