namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCArchiverFactory);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::EndOfArchive, 0x0051E2F0);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::ReadLine, 0x0051E360);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::ReadLineArg, 0x0051E580);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::ReadHeader, 0x0051E840);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::WriteLine, void(zCArchiverFactory::*)(zSTRING const&, zCBuffer*, zFILE*), 0x0051F120);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::WriteLine, void(zCArchiverFactory::*)(char const* const, zCBuffer*, zFILE*), 0x0051F230);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::WriteHeader, 0x0051F340);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::CreateArchiverFromMode, 0x0051FA70);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverRead, zCArchiver*(zCArchiverFactory::*)(zCBuffer*, int), 0x0051EE60);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverRead, zCArchiver*(zCArchiverFactory::*)(zFILE*, int), 0x0051EEF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverRead, zCArchiver*(zCArchiverFactory::*)(zSTRING const&, int), 0x0051EF60);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverWrite, zCArchiver*(zCArchiverFactory::*)(zCBuffer*, zTArchiveMode, int, int), 0x0051FB80);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverWrite, zCArchiver*(zCArchiverFactory::*)(zTArchiveMode, int, int), 0x0051FD10);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverWrite, zCArchiver*(zCArchiverFactory::*)(zFILE*, zTArchiveMode, int, int), 0x0051FDB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverWrite, zCArchiver*(zCArchiverFactory::*)(zSTRING const&, zTArchiveMode, int, int), 0x0051FD30);

	ZENGIN_REGISTER_CLASS(zCArchiver);
	ZENGIN_REGISTER_METHOD(zCArchiver, &zCArchiver::_GetClassDef, 0x00520C30);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiver, &zCArchiver::ReadObjectAccount, zCObject*(__fastcall zCArchiver::*)(char const*, int, zCObject*), 0x0051FE00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiver, &zCArchiver::ReadObjectAccount, zCObject*(__fastcall zCArchiver::*)(char const*, int, char const*, zCObject*), 0x0051FE30);

	ZENGIN_REGISTER_CLASS(zCArchiver::zTChunkRecord);
	ZENGIN_REGISTER_METHOD(zCArchiver::zTChunkRecord, &zCArchiver::zTChunkRecord::zTChunkRecord_OnInit, 0x00526230);

} // namespace Gothic_I_Addon
