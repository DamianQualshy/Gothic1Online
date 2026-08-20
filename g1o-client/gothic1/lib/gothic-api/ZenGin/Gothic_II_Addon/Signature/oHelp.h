namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCHelp);
	ZENGIN_REGISTER_METHOD(oCHelp, &oCHelp::oCHelp_OnInit, 0x007015D0);
	ZENGIN_REGISTER_METHOD(oCHelp, &oCHelp::CalcPos, 0x00701DA0);
	ZENGIN_REGISTER_METHOD(oCHelp, &oCHelp::Toggle, 0x00701E50);
	ZENGIN_REGISTER_METHOD(oCHelp, &oCHelp::Update, 0x00702000);
	ZENGIN_REGISTER_METHOD(oCHelp, &oCHelp::Redraw, 0x00702010);

} // namespace Gothic_II_Addon
