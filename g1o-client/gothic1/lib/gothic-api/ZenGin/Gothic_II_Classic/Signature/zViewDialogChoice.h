namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCViewDialogChoice);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::zCViewDialogChoice_OnInit, 0x007A57D0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::ScrollUp, 0x007A5DB0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::ScrollDown, 0x007A5DF0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::IsSelectedOutsideAbove, 0x007A5E30);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::IsSelectedOutsideBelow, 0x007A5E50);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::ShowSelected, 0x007A5EE0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::SelectPrevious, 0x007A5F80);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::SelectNext, 0x007A6090);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::Select, 0x007A61A0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::GetSelection, 0x007A62A0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::GetSelectedText, 0x007A62B0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::HighlightSelected, 0x007A6380);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::AddChoice, 0x007A6470);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewDialogChoice, &zCViewDialogChoice::RemoveChoice, void(__fastcall zCViewDialogChoice::*)(zSTRING&), 0x007A6700);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewDialogChoice, &zCViewDialogChoice::RemoveChoice, void(__fastcall zCViewDialogChoice::*)(int), 0x007A6710);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::RemoveAllChoices, 0x007A6720);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::_GetClassDef, 0x007A57C0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::BlitText, 0x007A5D40);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::StartSelection, 0x007A5CD0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::StopSelection, 0x007A5D10);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::HandleEvent, 0x007A5910);

} // namespace Gothic_II_Classic
