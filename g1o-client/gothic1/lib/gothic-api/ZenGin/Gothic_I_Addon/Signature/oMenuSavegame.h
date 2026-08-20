namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCMenuSavegame);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::oCMenuSavegame_OnInit, 0x0042F3B0);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::GetMenuItemSlotNr, 0x00430930);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::SetScreenshot, 0x00430AD0);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::HandleEvent, 0x0042F970);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::Activate, 0x0042F4F0);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::ScreenInit, 0x0042F9D0);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::ScreenDone, 0x00430340);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::HandleSlotChange, 0x0042F500);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::GetSelectedSlot, 0x00430AC0);

} // namespace Gothic_I_Addon
