namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCViewDialogChoice);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::zCViewDialogChoice_OnInit, 0x00758920);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::ScrollUp, 0x00758ED0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::ScrollDown, 0x00758F10);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::IsSelectedOutsideAbove, 0x00758F50);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::IsSelectedOutsideBelow, 0x00758F70);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::ShowSelected, 0x00759000);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::SelectPrevious, 0x007590A0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::SelectNext, 0x007591B0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::Select, 0x007592C0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::GetSelection, 0x007593C0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::GetSelectedText, 0x007593D0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::HighlightSelected, 0x007594A0);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::AddChoice, 0x00759590);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewDialogChoice, &zCViewDialogChoice::RemoveChoice, void(__fastcall zCViewDialogChoice::*)(zSTRING&), 0x007597F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewDialogChoice, &zCViewDialogChoice::RemoveChoice, void(__fastcall zCViewDialogChoice::*)(int), 0x00759800);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::RemoveAllChoices, 0x00759810);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::_GetClassDef, 0x00758910);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::BlitText, 0x00758E70);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::StartSelection, 0x00758E00);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::StopSelection, 0x00758E40);
	ZENGIN_REGISTER_METHOD(zCViewDialogChoice, &zCViewDialogChoice::HandleEvent, 0x00758A60);

} // namespace Gothic_I_Classic
