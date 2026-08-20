namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCWorldInfo);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::zCWorldInfo_OnInit, 0x0046ECB0);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::GetName, 0x0046EF00);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::GetPlayerGroup, 0x0046EF50);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::IsMember, 0x0046EF60);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::GetLevelMaster, 0x0046EF70);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::EnterWorld, 0x0046EFC0);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::LeaveWorld, 0x0046F050);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::ShowDebugInfo, 0x0046F090);

} // namespace Gothic_II_Classic
