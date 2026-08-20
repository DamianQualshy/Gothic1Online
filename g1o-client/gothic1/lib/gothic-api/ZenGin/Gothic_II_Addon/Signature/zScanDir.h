namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCScanDirFileHandler);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::zCScanDirFileHandler_OnInit, 0x00468BE0);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::CanHandleFile, 0x00468DE0);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::GetNumMessages, 0x00469000);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::GetMessageA, 0x00469010);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::RegisterFileType, 0x004691A0);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::AddMessage, 0x00469300);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::ClearMessages, 0x00469460);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::SetName, 0x00469490);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::GetName, 0x004695D0);

	ZENGIN_REGISTER_CLASS(zCScanDir);
	ZENGIN_REGISTER_METHOD(zCScanDir, &zCScanDir::zCScanDir_OnInit, 0x004695E0);
	ZENGIN_REGISTER_METHOD(zCScanDir, &zCScanDir::ScanX, 0x00469800);
	ZENGIN_REGISTER_METHOD(zCScanDir, &zCScanDir::RegisterFileHandler, 0x004696B0);
	ZENGIN_REGISTER_METHOD(zCScanDir, &zCScanDir::Scan, 0x00469FC0);

} // namespace Gothic_II_Addon
