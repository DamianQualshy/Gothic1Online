namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCViewDialogInventory);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::oCViewDialogInventory_OnInit, 0x00764230);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::SetInventory, 0x00764320);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::SetAlignment, 0x00764350);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::GetSelectedItem, 0x00764360);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::GetSelectedItemCount, 0x00764380);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::RemoveSelectedItem, 0x007643A0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::InsertItem, 0x00764430);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::CanHandleLeft, 0x00764450);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::CanHandleRight, 0x00764480);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::_GetClassDef, 0x00764220);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::Activate, 0x007642C0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::StartSelection, 0x00764500);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::StopSelection, 0x00764580);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::HandleEvent, 0x007644B0);

} // namespace Gothic_I_Addon
