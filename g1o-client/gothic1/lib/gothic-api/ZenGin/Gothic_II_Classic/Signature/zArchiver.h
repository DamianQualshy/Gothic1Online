namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCArchiverFactory);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::EndOfArchive, 0x00516880);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::ReadLine, 0x005168F0);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::ReadLineArg, 0x00516B00);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::ReadHeader, 0x00516D80);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::WriteLine, void(zCArchiverFactory::*)(zSTRING const&, zCBuffer*, zFILE*), 0x005174C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::WriteLine, void(zCArchiverFactory::*)(char const* const, zCBuffer*, zFILE*), 0x005175C0);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::WriteHeader, 0x005176C0);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::CreateArchiverFromMode, 0x00517F00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverRead, zCArchiver*(zCArchiverFactory::*)(zCBuffer*, int), 0x00517250);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverRead, zCArchiver*(zCArchiverFactory::*)(zFILE*, int), 0x005172E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverRead, zCArchiver*(zCArchiverFactory::*)(zSTRING const&, int), 0x00517350);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverWrite, zCArchiver*(zCArchiverFactory::*)(zCBuffer*, zTArchiveMode, int, int), 0x00517FE0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverWrite, zCArchiver*(zCArchiverFactory::*)(zTArchiveMode, int, int), 0x00518130);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverWrite, zCArchiver*(zCArchiverFactory::*)(zFILE*, zTArchiveMode, int, int), 0x005181D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverWrite, zCArchiver*(zCArchiverFactory::*)(zSTRING const&, zTArchiveMode, int, int), 0x00518150);

	ZENGIN_REGISTER_CLASS(zCArchiver);
	ZENGIN_REGISTER_METHOD(zCArchiver, &zCArchiver::_GetClassDef, 0x00519220);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiver, &zCArchiver::ReadObjectAccount, zCObject*(__fastcall zCArchiver::*)(char const*, int, zCObject*), 0x00518220);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiver, &zCArchiver::ReadObjectAccount, zCObject*(__fastcall zCArchiver::*)(char const*, int, char const*, zCObject*), 0x00518250);

	ZENGIN_REGISTER_CLASS(zCArchiver::zTChunkRecord);
	ZENGIN_REGISTER_METHOD(zCArchiver::zTChunkRecord, &zCArchiver::zTChunkRecord::zTChunkRecord_OnInit, 0x0051E5F0);

} // namespace Gothic_II_Classic
