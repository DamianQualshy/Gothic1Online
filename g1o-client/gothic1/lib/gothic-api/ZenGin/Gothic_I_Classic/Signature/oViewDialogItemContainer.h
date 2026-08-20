namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCViewDialogItemContainer);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::oCViewDialogItemContainer_OnInit, 0x007274A0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::SetItemContainer, 0x00727560);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::SetAlignment, 0x00727590);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::GetSelectedItem, 0x007275A0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::GetSelectedItemCount, 0x007275C0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::RemoveSelectedItem, 0x007275E0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::InsertItem, 0x007276C0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::RemoveItem, 0x00727740);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::TransferAllItemsTo, 0x007277D0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::UpdateValue, 0x00727900);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::CanHandleLeft, 0x00727A90);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::CanHandleRight, 0x00727AA0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::_GetClassDef, 0x00727490);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::Activate, 0x00727540);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::StartSelection, 0x00727B00);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::StopSelection, 0x00727B90);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::HandleEvent, 0x00727AB0);

} // namespace Gothic_I_Classic
