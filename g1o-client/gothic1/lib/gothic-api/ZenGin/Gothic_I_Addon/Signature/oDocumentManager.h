namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCDocumentManager);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCDocumentManager, &oCDocumentManager::oCDocumentManager_OnInit, void(oCDocumentManager::*)(oCDocumentManager const&), 0x00761170);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCDocumentManager, &oCDocumentManager::oCDocumentManager_OnInit, void(oCDocumentManager::*)(), 0x00761190);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::CreateDocument, 0x00761420);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::CreateMap, 0x00761630);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetPages, 0x00761840);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetPage, 0x00761870);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetFont, 0x007618B0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetMargins, 0x007618F0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetLevel, 0x00761930);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::PrintLine, 0x00761AB0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::PrintLines, 0x00761AF0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::Show, 0x00761B30);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::GetNextAvailableID, 0x00761BF0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::GetDocumentView, 0x00761C10);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::UpdateMap, 0x00761C30);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::HandleEvent, 0x00761C80);

} // namespace Gothic_I_Addon
