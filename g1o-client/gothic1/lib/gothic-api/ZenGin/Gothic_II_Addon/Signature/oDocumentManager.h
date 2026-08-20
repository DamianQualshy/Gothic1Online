namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCDocumentManager);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCDocumentManager, &oCDocumentManager::oCDocumentManager_OnInit, void(oCDocumentManager::*)(oCDocumentManager const&), 0x0065EAA0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCDocumentManager, &oCDocumentManager::oCDocumentManager_OnInit, void(oCDocumentManager::*)(), 0x0065EAC0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::CreateDocument, 0x0065ED20);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::CreateMap, 0x0065EEF0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetPages, 0x0065F0C0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetPage, 0x0065F100);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetFont, 0x0065F140);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetMargins, 0x0065F180);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetLevel, 0x0065F1D0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetLevelCoords, 0x0065F220);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::PrintLine, 0x0065F280);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::PrintLines, 0x0065F2C0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::Show, 0x0065F300);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::GetNextAvailableID, 0x0065F3B0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::GetDocumentView, 0x0065F3D0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::UpdateMap, 0x0065F400);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::HandleEvent, 0x0065F450);

} // namespace Gothic_II_Addon
