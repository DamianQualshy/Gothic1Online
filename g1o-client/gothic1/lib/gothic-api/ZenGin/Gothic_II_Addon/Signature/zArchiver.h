namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCArchiverFactory);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::EndOfArchive, 0x00519650);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::ReadLine, 0x005196C0);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::ReadLineArg, 0x005198D0);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::ReadHeader, 0x00519B50);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::WriteLine, void(zCArchiverFactory::*)(zSTRING const&, zCBuffer*, zFILE*), 0x0051A290);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::WriteLine, void(zCArchiverFactory::*)(char const* const, zCBuffer*, zFILE*), 0x0051A390);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::WriteHeader, 0x0051A490);
	ZENGIN_REGISTER_METHOD(zCArchiverFactory, &zCArchiverFactory::CreateArchiverFromMode, 0x0051ACD0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverRead, zCArchiver*(zCArchiverFactory::*)(zCBuffer*, int), 0x0051A020);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverRead, zCArchiver*(zCArchiverFactory::*)(zFILE*, int), 0x0051A0B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverRead, zCArchiver*(zCArchiverFactory::*)(zSTRING const&, int), 0x0051A120);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverWrite, zCArchiver*(zCArchiverFactory::*)(zCBuffer*, zTArchiveMode, int, int), 0x0051ADB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverWrite, zCArchiver*(zCArchiverFactory::*)(zTArchiveMode, int, int), 0x0051AF00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverWrite, zCArchiver*(zCArchiverFactory::*)(zFILE*, zTArchiveMode, int, int), 0x0051AFA0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiverFactory, &zCArchiverFactory::CreateArchiverWrite, zCArchiver*(zCArchiverFactory::*)(zSTRING const&, zTArchiveMode, int, int), 0x0051AF20);

	ZENGIN_REGISTER_CLASS(zCArchiver);
	ZENGIN_REGISTER_METHOD(zCArchiver, &zCArchiver::_GetClassDef, 0x0051BFF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiver, &zCArchiver::ReadObjectAccount, zCObject*(__fastcall zCArchiver::*)(char const*, int, zCObject*), 0x0051AFF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCArchiver, &zCArchiver::ReadObjectAccount, zCObject*(__fastcall zCArchiver::*)(char const*, int, char const*, zCObject*), 0x0051B020);

	ZENGIN_REGISTER_CLASS(zCArchiver::zTChunkRecord);
	ZENGIN_REGISTER_METHOD(zCArchiver::zTChunkRecord, &zCArchiver::zTChunkRecord::zTChunkRecord_OnInit, 0x005213C0);

} // namespace Gothic_II_Addon
