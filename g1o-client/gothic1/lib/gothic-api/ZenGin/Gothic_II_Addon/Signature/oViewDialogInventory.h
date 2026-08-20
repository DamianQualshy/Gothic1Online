namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCViewDialogInventory);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::oCViewDialogInventory_OnInit, 0x00689020);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::SetInventory, 0x006890D0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::SetAlignment, 0x00689100);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::GetSelectedItem, 0x00689110);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::GetSelectedItemCount, 0x00689130);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::RemoveSelectedItem, 0x00689150);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::InsertItem, 0x006891E0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::CanHandleLeft, 0x00689200);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::CanHandleRight, 0x00689210);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::_GetClassDef, 0x00689010);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::Activate, 0x006890B0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::StartSelection, 0x00689270);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::StopSelection, 0x006892D0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::HandleEvent, 0x00689220);

} // namespace Gothic_II_Addon
