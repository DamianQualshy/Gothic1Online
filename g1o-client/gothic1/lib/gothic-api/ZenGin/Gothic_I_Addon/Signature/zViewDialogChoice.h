namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCViewDialogChoice);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::zCViewDialogChoice_OnInit, 0x0079AE80);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::ScrollUp, 0x0079B490);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::ScrollDown, 0x0079B4D0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::IsSelectedOutsideAbove, 0x0079B510);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::IsSelectedOutsideBelow, 0x0079B530);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::ShowSelected, 0x0079B5C0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::SelectPrevious, 0x0079B660);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::SelectNext, 0x0079B760);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::Select, 0x0079B870);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::GetSelection, 0x0079B970);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::GetSelectedText, 0x0079B980);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::HighlightSelected, 0x0079BA50);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::AddChoice, 0x0079BB30);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewDialogChoice, &zCViewDialogChoice::RemoveChoice, void(__fastcall zCViewDialogChoice::*)(zSTRING&), 0x0079BDA0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewDialogChoice, &zCViewDialogChoice::RemoveChoice, void(__fastcall zCViewDialogChoice::*)(int), 0x0079BDB0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::RemoveAllChoices, 0x0079BDC0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::_GetClassDef, 0x0079AE70);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::BlitText, 0x0079B430);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::StartSelection, 0x0079B3C0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::StopSelection, 0x0079B400);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::HandleEvent, 0x0079AFC0);

} // namespace Gothic_I_Addon
