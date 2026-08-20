namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCGuilds);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::oCGuilds_OnInit, 0x006A31A0);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::GetAttitude, 0x006A32B0);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::SetAttitude, 0x006A34E0);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::InitGuildTable, 0x006A3510);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::GetGuildName, 0x006A3750);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::SaveGuildTable, 0x006A38D0);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::LoadGuildTable, 0x006A3900);

} // namespace Gothic_II_Classic
