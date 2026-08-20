namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCDocumentManager);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCDocumentManager, &oCDocumentManager::oCDocumentManager_OnInit, void(oCDocumentManager::*)(oCDocumentManager const&), 0x00724230);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCDocumentManager, &oCDocumentManager::oCDocumentManager_OnInit, void(oCDocumentManager::*)(), 0x00724250);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::CreateDocument, 0x007244D0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::CreateMap, 0x007246D0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetPages, 0x007248D0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetPage, 0x00724910);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetFont, 0x00724950);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetMargins, 0x00724990);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetLevel, 0x007249E0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::PrintLine, 0x00724B60);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::PrintLines, 0x00724BA0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::Show, 0x00724BE0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::GetNextAvailableID, 0x00724C90);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::GetDocumentView, 0x00724CB0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::UpdateMap, 0x00724CE0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::HandleEvent, 0x00724D30);

} // namespace Gothic_I_Classic
