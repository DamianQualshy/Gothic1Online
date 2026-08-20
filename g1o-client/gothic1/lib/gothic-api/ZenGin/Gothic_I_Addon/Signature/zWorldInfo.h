namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCWorldInfo);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::zCWorldInfo_OnInit, 0x004726B0);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::GetName, 0x00472940);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::GetPlayerGroup, 0x00472990);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::IsMember, 0x004729A0);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::GetLevelMaster, 0x004729B0);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::EnterWorld, 0x00472A00);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::LeaveWorld, 0x00472A90);
	ZENGIN_REGISTER_METHOD(zCWorldInfo, &zCWorldInfo::ShowDebugInfo, 0x00472AD0);

} // namespace Gothic_I_Addon
