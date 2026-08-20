namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCMenuSavegame);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::oCMenuSavegame_OnInit, 0x0042C2D0);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::GetMenuItemSlotNr, 0x0042D6E0);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::SetScreenshot, 0x0042D850);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::HandleEvent, 0x0042C830);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::Activate, 0x0042C410);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::ScreenInit, 0x0042C890);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::ScreenDone, 0x0042D170);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::HandleSlotChange, 0x0042C420);
	ZENGIN_REGISTER_METHOD(oCMenuSavegame, &oCMenuSavegame::GetSelectedSlot, 0x0042D840);

} // namespace Gothic_I_Classic
