namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCGuilds);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::oCGuilds_OnInit, 0x00663050);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::GetAttitude, 0x00663170);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::SetAttitude, 0x00663340);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::InitGuildTable, 0x00663370);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::GetGuildName, 0x00663580);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::SaveGuildTable, 0x00663700);
	ZENGIN_REGISTER_METHOD(oCGuilds, &oCGuilds::LoadGuildTable, 0x00663730);

} // namespace Gothic_I_Classic
