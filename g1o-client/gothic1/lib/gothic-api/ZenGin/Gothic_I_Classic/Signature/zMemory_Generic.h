namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCMallocGeneric);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::zCMallocGeneric_OnInit, 0x0054EB70);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMallocGeneric, &zCMallocGeneric::Malloc, void*(zCMallocGeneric::*)(unsigned int), 0x0054EC20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMallocGeneric, &zCMallocGeneric::Malloc, void*(zCMallocGeneric::*)(unsigned int, char const*, char const*, int), 0x0054EC30);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::Realloc, 0x0054EC40);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::Free, 0x0054EC60);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::GetStats, 0x0054EC70);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::Init, 0x0054EC90);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::Shutdown, 0x0054ECA0);

} // namespace Gothic_I_Classic
