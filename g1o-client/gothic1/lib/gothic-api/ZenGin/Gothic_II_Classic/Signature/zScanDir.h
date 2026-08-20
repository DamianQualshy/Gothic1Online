namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCScanDirFileHandler);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::zCScanDirFileHandler_OnInit, 0x00467FB0);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::CanHandleFile, 0x004681B0);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::GetNumMessages, 0x004683D0);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::GetMessageA, 0x004683E0);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::RegisterFileType, 0x00468570);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::AddMessage, 0x004686D0);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::ClearMessages, 0x00468830);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::SetName, 0x00468860);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::GetName, 0x004689A0);

	ZENGIN_REGISTER_CLASS(zCScanDir);
	ZENGIN_REGISTER_METHOD(zCScanDir, &zCScanDir::zCScanDir_OnInit, 0x004689B0);
	ZENGIN_REGISTER_METHOD(zCScanDir, &zCScanDir::ScanX, 0x00468BD0);
	ZENGIN_REGISTER_METHOD(zCScanDir, &zCScanDir::RegisterFileHandler, 0x00468A80);
	ZENGIN_REGISTER_METHOD(zCScanDir, &zCScanDir::Scan, 0x00469390);

} // namespace Gothic_II_Classic
