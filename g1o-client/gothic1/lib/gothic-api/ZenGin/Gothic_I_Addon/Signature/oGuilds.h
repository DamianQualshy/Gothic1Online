namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCGuilds);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::oCGuilds_OnInit, 0x0068FBB0);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::GetAttitude, 0x0068FCD0);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::SetAttitude, 0x0068FEE0);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::InitGuildTable, 0x0068FF10);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::GetGuildName, 0x00690140);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::SaveGuildTable, 0x00690310);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::LoadGuildTable, 0x00690340);

} // namespace Gothic_I_Addon
