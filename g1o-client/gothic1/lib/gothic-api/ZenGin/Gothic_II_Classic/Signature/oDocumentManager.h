namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCDocumentManager);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCDocumentManager, &oCDocumentManager::oCDocumentManager_OnInit, void(oCDocumentManager::*)(oCDocumentManager const&), 0x00770550);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCDocumentManager, &oCDocumentManager::oCDocumentManager_OnInit, void(oCDocumentManager::*)(), 0x00770570);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::CreateDocument, 0x007707D0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::CreateMap, 0x007709A0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetPages, 0x00770B70);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetPage, 0x00770BB0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetFont, 0x00770BF0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetMargins, 0x00770C30);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetLevel, 0x00770C80);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::SetLevelCoords, 0x00770CD0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::PrintLine, 0x00770D30);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::PrintLines, 0x00770D70);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::Show, 0x00770DB0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::GetNextAvailableID, 0x00770E60);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::GetDocumentView, 0x00770E80);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::UpdateMap, 0x00770EB0);
	ZENGIN_REGISTER_METHOD(oCDocumentManager, &oCDocumentManager::HandleEvent, 0x00770F00);

} // namespace Gothic_II_Classic
