namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCViewDialogInventory);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::oCViewDialogInventory_OnInit, 0x007269E0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::SetInventory, 0x00726AD0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::SetAlignment, 0x00726B00);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::GetSelectedItem, 0x00726B10);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::GetSelectedItemCount, 0x00726B30);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::RemoveSelectedItem, 0x00726B50);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::InsertItem, 0x00726BE0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::CanHandleLeft, 0x00726C00);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::CanHandleRight, 0x00726C30);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::_GetClassDef, 0x007269D0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::Activate, 0x00726A70);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::StartSelection, 0x00726CB0);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::StopSelection, 0x00726D30);
	ZENGIN_REGISTER_METHOD(oCViewDialogInventory, &oCViewDialogInventory::HandleEvent, 0x00726C60);

} // namespace Gothic_I_Classic
