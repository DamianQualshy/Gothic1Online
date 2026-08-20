namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCOptionEntry);
	ZENGIN_REGISTER_METHOD(zCOptionEntry, &zCOptionEntry::zCOptionEntry_OnInit, 0x00461C20);
	ZENGIN_REGISTER_METHOD(zCOptionEntry, &zCOptionEntry::SetValue, 0x00464130);

	ZENGIN_REGISTER_CLASS(zCOptionSection);
	ZENGIN_REGISTER_METHOD(zCOptionSection, &zCOptionSection::zCOptionSection_OnInit, 0x00461E90);

	ZENGIN_REGISTER_CLASS(zCOption);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::zCOption_OnInit, 0x00462190);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::Load, 0x00462610);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::Save, 0x00463710);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteBool, int(zCOption::*)(zSTRING const&, char const*, int, int), 0x00463EC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteInt, int(zCOption::*)(zSTRING const&, char const*, int, int), 0x00463F10);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteDWord, int(zCOption::*)(zSTRING const&, char const*, unsigned long, int), 0x00463F40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteReal, int(zCOption::*)(zSTRING const&, char const*, float, int), 0x00463F70);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteString, int(zCOption::*)(zSTRING const&, char const*, zSTRING, int), 0x00463FB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadBool, int(zCOption::*)(zSTRING const&, char const*, int), 0x00464330);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadInt, int(zCOption::*)(zSTRING const&, char const*, int), 0x004645B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadDWord, unsigned long(zCOption::*)(zSTRING const&, char const*, unsigned long), 0x004646C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadReal, float(zCOption::*)(zSTRING const&, char const*, float), 0x004647D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadString, zSTRING(zCOption::*)(zSTRING const&, char const*, char const*), 0x004648E0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::EntryExists, 0x00464A10);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetNumEntries, 0x00464B00);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetEntry, 0x00464B20);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::RemoveEntry, 0x00464B50);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::SetFlag, 0x00464D20);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetEntryByName, 0x00464E30);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetSectionByName, 0x00465160);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::SectionExists, 0x00465400);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetNumSections, 0x00465420);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetSection, 0x00465430);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::RemoveSection, 0x00465460);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::InsertChangeHandler, 0x004654C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteRaw, int(zCOption::*)(zSTRING const&, char const*, void*, int, int), 0x004656B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadRaw, int(zCOption::*)(zSTRING const&, char const*, void*&, void*, int), 0x004658C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteBool, int(zCOption::*)(zSTRING const&, zSTRING const&, int, int), 0x00465A90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteInt, int(zCOption::*)(zSTRING const&, zSTRING const&, int, int), 0x00465AC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteDWord, int(zCOption::*)(zSTRING const&, zSTRING const&, unsigned long, int), 0x00465AF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteReal, int(zCOption::*)(zSTRING const&, zSTRING const&, float, int), 0x00465B20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteString, int(zCOption::*)(zSTRING const&, zSTRING const&, zSTRING, int), 0x00465B50);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteRaw, int(zCOption::*)(zSTRING const&, zSTRING const&, void*, int, int), 0x00465C10);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadBool, int(zCOption::*)(zSTRING const&, zSTRING const&, int), 0x00465C40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadInt, int(zCOption::*)(zSTRING const&, zSTRING const&, int), 0x00465C70);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadDWord, unsigned long(zCOption::*)(zSTRING const&, zSTRING const&, unsigned long), 0x00465CA0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadReal, float(zCOption::*)(zSTRING const&, zSTRING const&, float), 0x00465CD0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadString, zSTRING(zCOption::*)(zSTRING const&, zSTRING const&, char const*), 0x00465D00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadRaw, int(zCOption::*)(zSTRING const&, zSTRING const&, void*, int), 0x00465D40);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::Init, 0x00465E20);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ChangeDir, 0x004672F0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetDir, 0x004673F0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetDirString, 0x00467400);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::Parm, 0x00467410);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ParmValue, 0x00467540);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ParmValueRaw, 0x00467780);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ParmValueInt, 0x004679C0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ParmValueFloat, 0x00467BB0);

} // namespace Gothic_I_Addon
