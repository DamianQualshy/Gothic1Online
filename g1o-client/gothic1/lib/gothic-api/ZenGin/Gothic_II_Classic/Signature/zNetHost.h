namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCNetHost);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetHost, &zCNetHost::zCNetHost_OnInit, void(zCNetHost::*)(void*), 0x00459F00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetHost, &zCNetHost::zCNetHost_OnInit, void(zCNetHost::*)(zSTRING const&), 0x0045A0C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetHost, &zCNetHost::zCNetHost_OnInit, void(zCNetHost::*)(zTNetAddress const&), 0x0045A250);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::GetReadableAddr, 0x00450830);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::InitHost, 0x00459C30);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::Init, 0x0045A3E0);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::InitHostForBroadcast, 0x0045A4E0);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::InitHostAddr, 0x0045A650);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::Pack, 0x0045A8C0);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::Unpack, 0x0045A930);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::PackToBuffer, 0x0045AC70);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::HasAddress, 0x0045ACA0);
	ZENGIN_REGISTER_METHOD(zCNetHost, &zCNetHost::GetHostname, 0x004665E0);

} // namespace Gothic_II_Classic
