namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCOptionEntry);
	ZENGIN_REGISTER_METHOD(zCOptionEntry, &zCOptionEntry::zCOptionEntry_OnInit, 0x0045F5F0);

	ZENGIN_REGISTER_CLASS(zCOptionSection);
	ZENGIN_REGISTER_METHOD(zCOptionSection, &zCOptionSection::zCOptionSection_OnInit, 0x0045F870);

	ZENGIN_REGISTER_CLASS(zCOption);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::zCOption_OnInit, 0x0045FB40);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::Load, 0x0045FFA0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::Save, 0x00460EB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteBool, int(zCOption::*)(zSTRING const&, char const*, int, int), 0x004615D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteInt, int(zCOption::*)(zSTRING const&, char const*, int, int), 0x00461620);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteDWord, int(zCOption::*)(zSTRING const&, char const*, unsigned long, int), 0x00461650);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteReal, int(zCOption::*)(zSTRING const&, char const*, float, int), 0x00461780);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteString, int(zCOption::*)(zSTRING const&, char const*, zSTRING, int), 0x004617C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadBool, int(zCOption::*)(zSTRING const&, char const*, int), 0x00461950);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadInt, int(zCOption::*)(zSTRING const&, char const*, int), 0x00461B80);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadDWord, unsigned long(zCOption::*)(zSTRING const&, char const*, unsigned long), 0x00461CE0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadReal, float(zCOption::*)(zSTRING const&, char const*, float), 0x00461E40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadString, zSTRING(zCOption::*)(zSTRING const&, char const*, char const*), 0x00461FD0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::EntryExists, 0x00462140);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetNumEntries, 0x00462210);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetEntry, 0x00462230);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::RemoveEntry, 0x00462260);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::SetFlag, 0x00462400);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetEntryByName, 0x00462500);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetSectionByName, 0x004627F0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::SectionExists, 0x00462A40);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetNumSections, 0x00462A60);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetSection, 0x00462A70);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::RemoveSection, 0x00462AA0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::InsertChangeHandler, 0x00462B00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteRaw, int(zCOption::*)(zSTRING const&, char const*, void*, int, int), 0x00462CD0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadRaw, int(zCOption::*)(zSTRING const&, char const*, void*&, void*, int), 0x00462EB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteBool, int(zCOption::*)(zSTRING const&, zSTRING const&, int, int), 0x00463090);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteInt, int(zCOption::*)(zSTRING const&, zSTRING const&, int, int), 0x004630B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteDWord, int(zCOption::*)(zSTRING const&, zSTRING const&, unsigned long, int), 0x004630D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteReal, int(zCOption::*)(zSTRING const&, zSTRING const&, float, int), 0x004630F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteString, int(zCOption::*)(zSTRING const&, zSTRING const&, zSTRING, int), 0x00463120);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteRaw, int(zCOption::*)(zSTRING const&, zSTRING const&, void*, int, int), 0x004631D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadBool, int(zCOption::*)(zSTRING const&, zSTRING const&, int), 0x004631F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadInt, int(zCOption::*)(zSTRING const&, zSTRING const&, int), 0x00463210);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadDWord, unsigned long(zCOption::*)(zSTRING const&, zSTRING const&, unsigned long), 0x00463230);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadReal, float(zCOption::*)(zSTRING const&, zSTRING const&, float), 0x00463250);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadString, zSTRING(zCOption::*)(zSTRING const&, zSTRING const&, char const*), 0x00463280);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadRaw, int(zCOption::*)(zSTRING const&, zSTRING const&, void*, int), 0x004632C0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::Init, 0x004632F0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ChangeDir, 0x00464530);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetDir, 0x00464620);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetDirString, 0x00464630);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::Parm, 0x00464640);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ParmValue, 0x00464750);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ParmValueRaw, 0x00464950);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ParmValueInt, 0x00464B50);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ParmValueFloat, 0x00464D10);

} // namespace Gothic_II_Classic
