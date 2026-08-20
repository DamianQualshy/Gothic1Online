namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCViewDialogItemContainer);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::oCViewDialogItemContainer_OnInit, 0x00689A50);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::SetItemContainer, 0x00689B10);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::SetAlignment, 0x00689B40);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::GetSelectedItem, 0x00689B50);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::GetSelectedItemCount, 0x00689B70);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::RemoveSelectedItem, 0x00689B90);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::InsertItem, 0x00689C00);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::RemoveItem, 0x00689C20);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::TransferAllItemsTo, 0x00689C40);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::UpdateValue, 0x00689D10);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::CanHandleLeft, 0x00689D20);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::CanHandleRight, 0x00689D30);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::_GetClassDef, 0x00689A40);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::Activate, 0x00689AF0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::StartSelection, 0x00689D90);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::StopSelection, 0x00689DF0);
	ZENGIN_REGISTER_METHOD(oCViewDialogItemContainer, &oCViewDialogItemContainer::HandleEvent, 0x00689D40);

} // namespace Gothic_II_Addon
