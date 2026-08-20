namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCMenuSavegame);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::oCMenuSavegame_OnInit, 0x0042E7F0);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::GetMenuItemSlotNr, 0x0042FF30);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::SetScreenshot, 0x00430100);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::HandleEvent, 0x0042F180);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::Activate, 0x0042E930);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::ScreenInit, 0x0042F1E0);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::ScreenDone, 0x0042FA30);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::HandleSlotChange, 0x0042E940);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::GetSelectedSlot, 0x004300F0);

} // namespace Gothic_II_Addon
