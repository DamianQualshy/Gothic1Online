namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCOptionEntry);
	ZENGIN_REGISTER_METHOD(zCOptionEntry, &zCOptionEntry::zCOptionEntry_OnInit, 0x0045FE00);

	ZENGIN_REGISTER_CLASS(zCOptionSection);
	ZENGIN_REGISTER_METHOD(zCOptionSection, &zCOptionSection::zCOptionSection_OnInit, 0x00460080);

	ZENGIN_REGISTER_CLASS(zCOption);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::zCOption_OnInit, 0x00460350);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::Load, 0x004607B0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::Save, 0x004616C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteBool, int(zCOption::*)(zSTRING const&, char const*, int, int), 0x00461DE0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteInt, int(zCOption::*)(zSTRING const&, char const*, int, int), 0x00461E30);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteDWord, int(zCOption::*)(zSTRING const&, char const*, unsigned long, int), 0x00461E60);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteReal, int(zCOption::*)(zSTRING const&, char const*, float, int), 0x00461F90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteString, int(zCOption::*)(zSTRING const&, char const*, zSTRING, int), 0x00461FD0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadBool, int(zCOption::*)(zSTRING const&, char const*, int), 0x00462160);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadInt, int(zCOption::*)(zSTRING const&, char const*, int), 0x00462390);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadDWord, unsigned long(zCOption::*)(zSTRING const&, char const*, unsigned long), 0x004624F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadReal, float(zCOption::*)(zSTRING const&, char const*, float), 0x00462650);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadString, zSTRING(zCOption::*)(zSTRING const&, char const*, char const*), 0x004627E0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::EntryExists, 0x00462950);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetNumEntries, 0x00462A20);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetEntry, 0x00462A40);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::RemoveEntry, 0x00462A70);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::SetFlag, 0x00462C10);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetEntryByName, 0x00462D10);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetSectionByName, 0x00463000);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::SectionExists, 0x00463250);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetNumSections, 0x00463270);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetSection, 0x00463280);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::RemoveSection, 0x004632B0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::InsertChangeHandler, 0x00463310);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteRaw, int(zCOption::*)(zSTRING const&, char const*, void*, int, int), 0x004634E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadRaw, int(zCOption::*)(zSTRING const&, char const*, void*&, void*, int), 0x004636C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteBool, int(zCOption::*)(zSTRING const&, zSTRING const&, int, int), 0x004638A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteInt, int(zCOption::*)(zSTRING const&, zSTRING const&, int, int), 0x004638C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteDWord, int(zCOption::*)(zSTRING const&, zSTRING const&, unsigned long, int), 0x004638E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteReal, int(zCOption::*)(zSTRING const&, zSTRING const&, float, int), 0x00463900);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteString, int(zCOption::*)(zSTRING const&, zSTRING const&, zSTRING, int), 0x00463930);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteRaw, int(zCOption::*)(zSTRING const&, zSTRING const&, void*, int, int), 0x004639E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadBool, int(zCOption::*)(zSTRING const&, zSTRING const&, int), 0x00463A00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadInt, int(zCOption::*)(zSTRING const&, zSTRING const&, int), 0x00463A20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadDWord, unsigned long(zCOption::*)(zSTRING const&, zSTRING const&, unsigned long), 0x00463A40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadReal, float(zCOption::*)(zSTRING const&, zSTRING const&, float), 0x00463A60);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadString, zSTRING(zCOption::*)(zSTRING const&, zSTRING const&, char const*), 0x00463A90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadRaw, int(zCOption::*)(zSTRING const&, zSTRING const&, void*, int), 0x00463AD0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::AddParameters, 0x00463B00);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::Init, 0x00463C20);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ChangeDir, 0x00465160);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetDir, 0x00465250);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetDirString, 0x00465260);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::Parm, 0x00465270);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ParmValue, 0x00465380);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ParmValueRaw, 0x00465580);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ParmValueInt, 0x00465780);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ParmValueFloat, 0x00465940);

} // namespace Gothic_II_Addon
