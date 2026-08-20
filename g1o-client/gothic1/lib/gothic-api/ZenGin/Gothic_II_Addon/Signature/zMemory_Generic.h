namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCMallocGeneric);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::zCMallocGeneric_OnInit, 0x00565F20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMallocGeneric, &zCMallocGeneric::Malloc, void*(zCMallocGeneric::*)(unsigned int), 0x00565FD0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMallocGeneric, &zCMallocGeneric::Malloc, void*(zCMallocGeneric::*)(unsigned int, char const*, char const*, int), 0x00565FE0);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::Realloc, 0x00565FF0);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::Free, 0x00566010);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::GetStats, 0x00566020);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::Init, 0x00566040);
	ZENGIN_REGISTER_METHOD(zCMallocGeneric, &zCMallocGeneric::Shutdown, 0x00566050);

} // namespace Gothic_II_Addon
