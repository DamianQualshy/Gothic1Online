namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCScanDirFileHandler);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::zCScanDirFileHandler_OnInit, 0x0046B010);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::CanHandleFile, 0x0046B220);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::GetNumMessages, 0x0046B460);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::GetMessageA, 0x0046B470);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::RegisterFileType, 0x0046B620);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::AddMessage, 0x0046B7B0);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::ClearMessages, 0x0046B940);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::SetName, 0x0046B970);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::GetName, 0x0046BAB0);

	ZENGIN_REGISTER_CLASS(zCScanDir);
	ZENGIN_REGISTER_METHOD(zCScanDir, &zCScanDir::zCScanDir_OnInit, 0x0046BAC0);
	ZENGIN_REGISTER_METHOD(zCScanDir, &zCScanDir::ScanX, 0x0046BCD0);
	ZENGIN_REGISTER_METHOD(zCScanDir, &zCScanDir::RegisterFileHandler, 0x0046BB90);
	ZENGIN_REGISTER_METHOD(zCScanDir, &zCScanDir::Scan, 0x0046C520);

} // namespace Gothic_I_Addon
