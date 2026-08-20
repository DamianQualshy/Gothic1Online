namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCNetHost);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetHost, &zCNetHost::zCNetHost_OnInit, void(zCNetHost::*)(void*), 0x004555B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetHost, &zCNetHost::zCNetHost_OnInit, void(zCNetHost::*)(zSTRING const&), 0x00455770);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetHost, &zCNetHost::zCNetHost_OnInit, void(zCNetHost::*)(zTNetAddress const&), 0x00455900);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::GetReadableAddr, 0x0044C7E0);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::InitHost, 0x004552E0);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::Init, 0x00455A90);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::InitHostForBroadcast, 0x00455B90);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::InitHostAddr, 0x00455D00);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::Pack, 0x00455F70);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::Unpack, 0x00455FE0);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::PackToBuffer, 0x00456330);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::HasAddress, 0x00456360);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::GetHostname, 0x00461BA0);

} // namespace Gothic_I_Classic
