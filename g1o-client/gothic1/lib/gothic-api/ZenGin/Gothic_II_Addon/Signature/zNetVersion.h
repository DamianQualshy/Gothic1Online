namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCNetVersion);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::zCNetVersion_OnInit, 0x0045D290);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::GetVersionString, 0x0045D310);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::GetVersionNumber, 0x0045D2E0);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::GetChecksum, 0x0045D2F0);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::CreateChecksum, 0x0045D300);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::Pack, 0x0045D410);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::Unpack, 0x0045D440);

} // namespace Gothic_II_Addon
