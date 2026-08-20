namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCViewDialogInventory);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::oCViewDialogInventory_OnInit, 0x00773300);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::SetInventory, 0x007733B0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::SetAlignment, 0x007733E0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::GetSelectedItem, 0x007733F0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::GetSelectedItemCount, 0x00773410);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::RemoveSelectedItem, 0x00773430);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::InsertItem, 0x007734C0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::CanHandleLeft, 0x007734E0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::CanHandleRight, 0x007734F0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::_GetClassDef, 0x007732F0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::Activate, 0x00773390);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::StartSelection, 0x00773550);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::StopSelection, 0x007735B0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::HandleEvent, 0x00773500);

} // namespace Gothic_II_Classic
