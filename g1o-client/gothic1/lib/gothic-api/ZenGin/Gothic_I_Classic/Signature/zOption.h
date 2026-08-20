namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCOptionEntry);
	ZENGIN_REGISTER_METHOD(zCOptionEntry, &zCOptionEntry::zCOptionEntry_OnInit, 0x0045A880);

	ZENGIN_REGISTER_CLASS(zCOptionSection);
	ZENGIN_REGISTER_METHOD(zCOptionSection, &zCOptionSection::zCOptionSection_OnInit, 0x0045AB00);

	ZENGIN_REGISTER_CLASS(zCOption);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::zCOption_OnInit, 0x0045ADD0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::Load, 0x0045B240);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::Save, 0x0045C1E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteBool, int(zCOption::*)(zSTRING const&, char const*, int, int), 0x0045C900);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteInt, int(zCOption::*)(zSTRING const&, char const*, int, int), 0x0045C950);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteDWord, int(zCOption::*)(zSTRING const&, char const*, unsigned long, int), 0x0045C980);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteReal, int(zCOption::*)(zSTRING const&, char const*, float, int), 0x0045C9B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteString, int(zCOption::*)(zSTRING const&, char const*, zSTRING, int), 0x0045C9F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadBool, int(zCOption::*)(zSTRING const&, char const*, int), 0x0045CB80);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadInt, int(zCOption::*)(zSTRING const&, char const*, int), 0x0045CDB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadDWord, unsigned long(zCOption::*)(zSTRING const&, char const*, unsigned long), 0x0045CEA0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadReal, float(zCOption::*)(zSTRING const&, char const*, float), 0x0045CF90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadString, zSTRING(zCOption::*)(zSTRING const&, char const*, char const*), 0x0045D080);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::EntryExists, 0x0045D1F0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetNumEntries, 0x0045D2C0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetEntry, 0x0045D2E0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::RemoveEntry, 0x0045D310);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::SetFlag, 0x0045D4B0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetEntryByName, 0x0045D5B0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetSectionByName, 0x0045D8D0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::SectionExists, 0x0045DB30);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetNumSections, 0x0045DB50);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetSection, 0x0045DB60);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::RemoveSection, 0x0045DB90);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::InsertChangeHandler, 0x0045DBF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteRaw, int(zCOption::*)(zSTRING const&, char const*, void*, int, int), 0x0045DDE0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadRaw, int(zCOption::*)(zSTRING const&, char const*, void*&, void*, int), 0x0045DFC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteBool, int(zCOption::*)(zSTRING const&, zSTRING const&, int, int), 0x0045E1B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteInt, int(zCOption::*)(zSTRING const&, zSTRING const&, int, int), 0x0045E1D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteDWord, int(zCOption::*)(zSTRING const&, zSTRING const&, unsigned long, int), 0x0045E1F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteReal, int(zCOption::*)(zSTRING const&, zSTRING const&, float, int), 0x0045E210);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteString, int(zCOption::*)(zSTRING const&, zSTRING const&, zSTRING, int), 0x0045E240);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::WriteRaw, int(zCOption::*)(zSTRING const&, zSTRING const&, void*, int, int), 0x0045E2F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadBool, int(zCOption::*)(zSTRING const&, zSTRING const&, int), 0x0045E310);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadInt, int(zCOption::*)(zSTRING const&, zSTRING const&, int), 0x0045E330);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadDWord, unsigned long(zCOption::*)(zSTRING const&, zSTRING const&, unsigned long), 0x0045E350);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadReal, float(zCOption::*)(zSTRING const&, zSTRING const&, float), 0x0045E370);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadString, zSTRING(zCOption::*)(zSTRING const&, zSTRING const&, char const*), 0x0045E3A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCOption, &zCOption::ReadRaw, int(zCOption::*)(zSTRING const&, zSTRING const&, void*, int), 0x0045E3E0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::AddParameters, 0x0045E4B0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::Init, 0x0045E5D0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ChangeDir, 0x0045FB00);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetDir, 0x0045FBF0);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::GetDirString, 0x0045FC00);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::Parm, 0x0045FC10);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ParmValue, 0x0045FD20);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ParmValueRaw, 0x0045FF20);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ParmValueInt, 0x00460120);
	ZENGIN_REGISTER_METHOD(zCOption, &zCOption::ParmValueFloat, 0x004602E0);

} // namespace Gothic_I_Classic
