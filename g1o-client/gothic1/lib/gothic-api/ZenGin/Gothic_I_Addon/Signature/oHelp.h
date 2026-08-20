namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCHelp);
	ZENGIN_REGISTER_METHOD(oCHelp, &oCHelp::oCHelp_OnInit, 0x00690640);
	ZENGIN_REGISTER_METHOD(oCHelp, &oCHelp::CalcPos, 0x00691000);
	ZENGIN_REGISTER_METHOD(oCHelp, &oCHelp::Toggle, 0x006910B0);
	ZENGIN_REGISTER_METHOD(oCHelp, &oCHelp::Update, 0x00691270);
	ZENGIN_REGISTER_METHOD(oCHelp, &oCHelp::Redraw, 0x00691280);

} // namespace Gothic_I_Addon
