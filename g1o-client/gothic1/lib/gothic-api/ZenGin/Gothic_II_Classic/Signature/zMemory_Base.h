namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCMalloc);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::GetStats, 0x00560C90);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::GetProcessStats, 0x00560CA0);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::DumpHeap, 0x00560CB0);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::CheckHeap, 0x00560CC0);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::CheckPtr, 0x00560CD0);

} // namespace Gothic_II_Classic
