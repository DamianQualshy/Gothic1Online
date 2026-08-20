namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCMallocGeneric);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::zCMallocGeneric_OnInit, 0x00567070);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMallocGeneric, &zCMallocGeneric::Malloc, void*(zCMallocGeneric::*)(unsigned int), 0x00567120);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMallocGeneric, &zCMallocGeneric::Malloc, void*(zCMallocGeneric::*)(unsigned int, char const*, char const*, int), 0x00567130);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::Realloc, 0x00567140);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::Free, 0x00567160);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::GetStats, 0x00567170);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::Init, 0x00567190);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::Shutdown, 0x005671A0);

} // namespace Gothic_I_Addon
