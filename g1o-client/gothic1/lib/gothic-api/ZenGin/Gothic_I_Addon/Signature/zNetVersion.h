namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCNetVersion);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::zCNetVersion_OnInit, 0x0045F230);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::GetVersionString, 0x0045F2B0);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::GetVersionNumber, 0x0045F280);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::GetChecksum, 0x0045F290);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::CreateChecksum, 0x0045F2A0);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::Pack, 0x0045F2D0);
	ZENGIN_REGISTER_METHOD(zCNetVersion, &zCNetVersion::Unpack, 0x0045F300);

} // namespace Gothic_I_Addon
