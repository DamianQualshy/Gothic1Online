namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCWorldInfo);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::zCWorldInfo_OnInit, 0x0046A4E0);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::GetName, 0x0046A740);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::GetPlayerGroup, 0x0046A790);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::IsMember, 0x0046A7A0);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::GetLevelMaster, 0x0046A7B0);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::EnterWorld, 0x0046A800);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::LeaveWorld, 0x0046A890);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::ShowDebugInfo, 0x0046A8D0);

} // namespace Gothic_I_Classic
