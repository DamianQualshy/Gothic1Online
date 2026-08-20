namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCGuilds);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::oCGuilds_OnInit, 0x00700C30);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::GetAttitude, 0x00700D40);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::SetAttitude, 0x00700F70);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::InitGuildTable, 0x00700FA0);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::GetGuildName, 0x007011E0);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::SaveGuildTable, 0x00701360);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::LoadGuildTable, 0x00701390);

} // namespace Gothic_II_Addon
