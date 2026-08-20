namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCNetHost);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetHost, &zCNetHost::zCNetHost_OnInit, void(zCNetHost::*)(void*), 0x0045C4C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetHost, &zCNetHost::zCNetHost_OnInit, void(zCNetHost::*)(zSTRING const&), 0x0045C680);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetHost, &zCNetHost::zCNetHost_OnInit, void(zCNetHost::*)(zTNetAddress const&), 0x0045C810);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::GetReadableAddr, 0x00452DE0);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::InitHost, 0x0045C160);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::Init, 0x0045C9A0);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::InitHostForBroadcast, 0x0045CAA0);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::InitHostAddr, 0x0045CC40);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::Pack, 0x0045CEF0);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::Unpack, 0x0045CF60);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::PackToBuffer, 0x0045D2B0);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::HasAddress, 0x0045D2E0);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::GetHostname, 0x004695C0);

} // namespace Gothic_I_Addon
