namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCWorldInfo);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::zCWorldInfo_OnInit, 0x0046F8E0);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::GetName, 0x0046FB30);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::GetPlayerGroup, 0x0046FB80);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::IsMember, 0x0046FB90);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::GetLevelMaster, 0x0046FBA0);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::EnterWorld, 0x0046FBF0);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::LeaveWorld, 0x0046FC80);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::ShowDebugInfo, 0x0046FCC0);

} // namespace Gothic_II_Addon
