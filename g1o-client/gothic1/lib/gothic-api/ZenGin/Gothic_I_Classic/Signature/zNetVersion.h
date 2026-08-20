namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCNetVersion);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::zCNetVersion_OnInit, 0x00458170);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::GetVersionString, 0x004581F0);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::GetVersionNumber, 0x004581C0);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::GetChecksum, 0x004581D0);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::CreateChecksum, 0x004581E0);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::Pack, 0x00458210);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::Unpack, 0x00458240);

} // namespace Gothic_I_Classic
