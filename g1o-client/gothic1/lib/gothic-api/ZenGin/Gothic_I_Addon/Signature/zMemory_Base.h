namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCMalloc);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::GetStats, 0x00567000);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::GetProcessStats, 0x00567010);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::DumpHeap, 0x00567020);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::CheckHeap, 0x00567030);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::CheckPtr, 0x00567040);

} // namespace Gothic_I_Addon
