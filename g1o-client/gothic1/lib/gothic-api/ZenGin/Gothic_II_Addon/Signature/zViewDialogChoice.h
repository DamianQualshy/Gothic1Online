namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCViewDialogChoice);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::zCViewDialogChoice_OnInit, 0x0068EA60);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::ScrollUp, 0x0068F050);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::ScrollDown, 0x0068F090);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::IsSelectedOutsideAbove, 0x0068F0D0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::IsSelectedOutsideBelow, 0x0068F0F0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::ShowSelected, 0x0068F180);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::SelectPrevious, 0x0068F220);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::SelectNext, 0x0068F330);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::Select, 0x0068F440);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::GetSelection, 0x0068F540);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::GetSelectedText, 0x0068F550);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::HighlightSelected, 0x0068F620);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::AddChoice, 0x0068F710);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewDialogChoice, &zCViewDialogChoice::RemoveChoice, void(__fastcall zCViewDialogChoice::*)(zSTRING&), 0x0068F9A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewDialogChoice, &zCViewDialogChoice::RemoveChoice, void(__fastcall zCViewDialogChoice::*)(int), 0x0068F9B0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::RemoveAllChoices, 0x0068F9C0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::_GetClassDef, 0x0068EA50);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::BlitText, 0x0068EFE0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::StartSelection, 0x0068EF70);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::StopSelection, 0x0068EFB0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::HandleEvent, 0x0068EBA0);

} // namespace Gothic_II_Addon
