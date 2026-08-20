namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCViewDialogStealContainer);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::oCViewDialogStealContainer_OnInit, 0x00727ED0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::SetStealContainer, 0x00727F90);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::SetAlignment, 0x00727FC0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::GetSelectedItem, 0x00727FD0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::GetSelectedItemCount, 0x00727FF0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::RemoveSelectedItem, 0x00728010);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::InsertItem, 0x00728130);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::RemoveItem, 0x007281F0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::TransferAllItemsTo, 0x007282B0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::UpdateValue, 0x00728420);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::CanHandleLeft, 0x007285C0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::CanHandleRight, 0x007285D0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::_GetClassDef, 0x00727EC0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::Activate, 0x00727F70);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::StartSelection, 0x00728630);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::StopSelection, 0x007286B0);
	ZENGIN_REGISTER_METHOD(oCViewDialogStealContainer, &oCViewDialogStealContainer::HandleEvent, 0x007285E0);

} // namespace Gothic_I_Classic
