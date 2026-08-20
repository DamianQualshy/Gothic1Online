namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCViewDialogStealContainer);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::oCViewDialogStealContainer_OnInit, 0x007745B0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::SetStealContainer, 0x00774670);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::SetAlignment, 0x007746A0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::GetSelectedItem, 0x007746B0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::GetSelectedItemCount, 0x007746D0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::RemoveSelectedItem, 0x007746F0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::InsertItem, 0x007747B0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::RemoveItem, 0x00774800);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::TransferAllItemsTo, 0x00774860);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::UpdateValue, 0x00774960);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::CanHandleLeft, 0x00774A00);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::CanHandleRight, 0x00774A10);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::_GetClassDef, 0x007745A0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::Activate, 0x00774650);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::StartSelection, 0x00774A70);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::StopSelection, 0x00774AD0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::HandleEvent, 0x00774A20);

} // namespace Gothic_II_Classic
