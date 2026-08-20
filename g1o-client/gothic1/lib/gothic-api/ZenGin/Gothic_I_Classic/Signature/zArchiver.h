namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCArchiverFactory);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::EndOfArchive, 0x005097C0);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::ReadLine, 0x00509830);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::ReadLineArg, 0x00509A40);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::ReadHeader, 0x00509CC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::WriteLine, void(zCArchiverFactory::*)(zSTRING const&, zCBuffer*, zFILE*), 0x0050A420);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::WriteLine, void(zCArchiverFactory::*)(char const* const, zCBuffer*, zFILE*), 0x0050A520);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::WriteHeader, 0x0050A620);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::CreateArchiverFromMode, 0x0050ACC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverRead, zCArchiver*(zCArchiverFactory::*)(zCBuffer*, int), 0x0050A1B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverRead, zCArchiver*(zCArchiverFactory::*)(zFILE*, int), 0x0050A240);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverRead, zCArchiver*(zCArchiverFactory::*)(zSTRING const&, int), 0x0050A2B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverWrite, zCArchiver*(zCArchiverFactory::*)(zCBuffer*, zTArchiveMode, int, int), 0x0050ADD0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverWrite, zCArchiver*(zCArchiverFactory::*)(zTArchiveMode, int, int), 0x0050AF60);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverWrite, zCArchiver*(zCArchiverFactory::*)(zFILE*, zTArchiveMode, int, int), 0x0050B000);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverWrite, zCArchiver*(zCArchiverFactory::*)(zSTRING const&, zTArchiveMode, int, int), 0x0050AF80);

	ZENGIN_REGISTER_CLASS(zCArchiver);
	ZENGIN_REGISTER_METHOD(zCArchiver, &zCArchiver::_GetClassDef, 0x0050BED0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiver, &zCArchiver::ReadObjectAccount, zCObject*(__fastcall zCArchiver::*)(char const*, int, zCObject*), 0x0050B050);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiver, &zCArchiver::ReadObjectAccount, zCObject*(__fastcall zCArchiver::*)(char const*, int, char const*, zCObject*), 0x0050B080);

	ZENGIN_REGISTER_CLASS(zCArchiver::zTChunkRecord);
	ZENGIN_REGISTER_METHOD(zCArchiver::zTChunkRecord, &zCArchiver::zTChunkRecord::zTChunkRecord_OnInit, 0x00510FA0);

} // namespace Gothic_I_Classic
