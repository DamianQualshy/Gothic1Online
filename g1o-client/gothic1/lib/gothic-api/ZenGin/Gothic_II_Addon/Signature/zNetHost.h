namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCNetHost);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetHost, &zCNetHost::zCNetHost_OnInit, void(zCNetHost::*)(void*), 0x0045A650);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetHost, &zCNetHost::zCNetHost_OnInit, void(zCNetHost::*)(zSTRING const&), 0x0045A810);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetHost, &zCNetHost::zCNetHost_OnInit, void(zCNetHost::*)(zTNetAddress const&), 0x0045A9A0);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::GetReadableAddr, 0x00450F80);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::InitHost, 0x0045A380);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::Init, 0x0045AB30);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::InitHostForBroadcast, 0x0045AC30);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::InitHostAddr, 0x0045ADA0);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::Pack, 0x0045B010);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::Unpack, 0x0045B080);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::PackToBuffer, 0x0045B3C0);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::HasAddress, 0x0045B3F0);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::GetHostname, 0x00467210);

} // namespace Gothic_II_Addon
