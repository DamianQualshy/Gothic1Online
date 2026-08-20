namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCMenuSavegame);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::oCMenuSavegame_OnInit, 0x0042E4D0);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::GetMenuItemSlotNr, 0x0042FC10);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::SetScreenshot, 0x0042FDE0);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::HandleEvent, 0x0042EE60);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::Activate, 0x0042E610);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::ScreenInit, 0x0042EEC0);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::ScreenDone, 0x0042F710);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::HandleSlotChange, 0x0042E620);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::GetSelectedSlot, 0x0042FDD0);

} // namespace Gothic_II_Classic
