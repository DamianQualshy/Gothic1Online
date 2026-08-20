namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCMallocGeneric);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::zCMallocGeneric_OnInit, 0x00560D00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMallocGeneric, &zCMallocGeneric::Malloc, void*(zCMallocGeneric::*)(unsigned int), 0x00560DB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMallocGeneric, &zCMallocGeneric::Malloc, void*(zCMallocGeneric::*)(unsigned int, char const*, char const*, int), 0x00560DC0);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::Realloc, 0x00560DD0);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::Free, 0x00560DF0);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::GetStats, 0x00560E00);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::Init, 0x00560E20);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::Shutdown, 0x00560E30);

} // namespace Gothic_II_Classic
