namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCViewDialogStealContainer);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::oCViewDialogStealContainer_OnInit, 0x0068A300);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::SetStealContainer, 0x0068A3C0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::SetAlignment, 0x0068A3F0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::GetSelectedItem, 0x0068A400);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::GetSelectedItemCount, 0x0068A420);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::RemoveSelectedItem, 0x0068A440);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::InsertItem, 0x0068A500);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::RemoveItem, 0x0068A550);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::TransferAllItemsTo, 0x0068A5B0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::UpdateValue, 0x0068A6B0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::CanHandleLeft, 0x0068A750);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::CanHandleRight, 0x0068A760);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::_GetClassDef, 0x0068A2F0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::Activate, 0x0068A3A0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::StartSelection, 0x0068A7C0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::StopSelection, 0x0068A820);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::HandleEvent, 0x0068A770);

} // namespace Gothic_II_Addon
