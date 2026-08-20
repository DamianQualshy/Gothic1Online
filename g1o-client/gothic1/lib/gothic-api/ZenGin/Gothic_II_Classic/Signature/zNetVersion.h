namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCNetVersion);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::zCNetVersion_OnInit, 0x0045CB40);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::GetVersionString, 0x0045CBC0);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::GetVersionNumber, 0x0045CB90);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::GetChecksum, 0x0045CBA0);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::CreateChecksum, 0x0045CBB0);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::Pack, 0x0045CCC0);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::Unpack, 0x0045CCF0);

} // namespace Gothic_II_Classic
