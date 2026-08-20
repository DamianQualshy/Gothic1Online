namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCMalloc);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::GetStats, 0x0054EB00);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::GetProcessStats, 0x0054EB10);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::DumpHeap, 0x0054EB20);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::CheckHeap, 0x0054EB30);
	ZENGIN_REGISTER_METHOD(zCMalloc, &zCMalloc::CheckPtr, 0x0054EB40);

} // namespace Gothic_I_Classic
