namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCViewDialogItemContainer);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::oCViewDialogItemContainer_OnInit, 0x00764D30);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::SetItemContainer, 0x00764DF0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::SetAlignment, 0x00764E20);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::GetSelectedItem, 0x00764E30);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::GetSelectedItemCount, 0x00764E50);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::RemoveSelectedItem, 0x00764E70);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::InsertItem, 0x00764F50);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::RemoveItem, 0x00764FD0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::TransferAllItemsTo, 0x00765050);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::UpdateValue, 0x00765180);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::CanHandleLeft, 0x00765310);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::CanHandleRight, 0x00765320);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::_GetClassDef, 0x00764D20);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::Activate, 0x00764DD0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::StartSelection, 0x00765380);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::StopSelection, 0x00765410);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::HandleEvent, 0x00765330);

} // namespace Gothic_I_Addon
