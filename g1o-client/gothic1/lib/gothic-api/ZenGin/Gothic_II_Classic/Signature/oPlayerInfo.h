namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCPlayerInfo);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::oCPlayerInfo_OnInit, 0x00435EE0);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::GetInstanceName, 0x004361D0);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::GetInstance, 0x00436220);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::Init, 0x00436060);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::Reset, 0x00436270);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::Pack, 0x00436230);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::Unpack, 0x00436250);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::SetInstance, 0x00436080);
	ZENGIN_REGISTER_METHOD(oCPlayerInfo, &oCPlayerInfo::SetInstanceByName, 0x00436090);

} // namespace Gothic_II_Classic
