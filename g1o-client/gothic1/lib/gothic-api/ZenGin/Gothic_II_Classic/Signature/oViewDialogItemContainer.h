namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCViewDialogItemContainer);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::oCViewDialogItemContainer_OnInit, 0x00773D00);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::SetItemContainer, 0x00773DC0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::SetAlignment, 0x00773DF0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::GetSelectedItem, 0x00773E00);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::GetSelectedItemCount, 0x00773E20);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::RemoveSelectedItem, 0x00773E40);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::InsertItem, 0x00773EB0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::RemoveItem, 0x00773ED0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::TransferAllItemsTo, 0x00773EF0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::UpdateValue, 0x00773FC0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::CanHandleLeft, 0x00773FD0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::CanHandleRight, 0x00773FE0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::_GetClassDef, 0x00773CF0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::Activate, 0x00773DA0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::StartSelection, 0x00774040);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::StopSelection, 0x007740A0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::HandleEvent, 0x00773FF0);

} // namespace Gothic_II_Classic
