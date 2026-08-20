namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCViewDialogStealContainer);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::oCViewDialogStealContainer_OnInit, 0x00765A00);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::SetStealContainer, 0x00765AC0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::SetAlignment, 0x00765AF0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::GetSelectedItem, 0x00765B00);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::GetSelectedItemCount, 0x00765B20);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::RemoveSelectedItem, 0x00765B40);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::InsertItem, 0x00765C60);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::RemoveItem, 0x00765D10);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::TransferAllItemsTo, 0x00765DC0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::UpdateValue, 0x00765F30);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::CanHandleLeft, 0x007660D0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::CanHandleRight, 0x007660E0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::_GetClassDef, 0x007659F0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::Activate, 0x00765AA0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::StartSelection, 0x00766140);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::StopSelection, 0x007661C0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::HandleEvent, 0x007660F0);

} // namespace Gothic_I_Addon
