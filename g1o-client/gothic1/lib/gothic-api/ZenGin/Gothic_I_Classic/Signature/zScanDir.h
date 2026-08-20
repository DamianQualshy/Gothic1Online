namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCScanDirFileHandler);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::zCScanDirFileHandler_OnInit, 0x00463500);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::CanHandleFile, 0x00463700);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::GetNumMessages, 0x00463920);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::GetMessageA, 0x00463930);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::RegisterFileType, 0x00463AC0);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::AddMessage, 0x00463C30);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::ClearMessages, 0x00463DA0);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::SetName, 0x00463DD0);
	ZENGIN_REGISTER_METHOD(zCScanDirFileHandler, &zCScanDirFileHandler::GetName, 0x00463F10);

	ZENGIN_REGISTER_CLASS(zCScanDir);
	ZENGIN_REGISTER_METHOD(zCScanDir, &zCScanDir::zCScanDir_OnInit, 0x00463F20);
	ZENGIN_REGISTER_METHOD(zCScanDir, &zCScanDir::ScanX, 0x00464140);
	ZENGIN_REGISTER_METHOD(zCScanDir, &zCScanDir::RegisterFileHandler, 0x00463FF0);
	ZENGIN_REGISTER_METHOD(zCScanDir, &zCScanDir::Scan, 0x00464900);

} // namespace Gothic_I_Classic
