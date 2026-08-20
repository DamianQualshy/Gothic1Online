namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCMalloc);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::GetStats, 0x00565EB0);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::GetProcessStats, 0x00565EC0);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::DumpHeap, 0x00565ED0);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::CheckHeap, 0x00565EE0);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::CheckPtr, 0x00565EF0);

} // namespace Gothic_II_Addon
