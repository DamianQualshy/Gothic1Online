namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCMemPoolBlock);

	ZENGIN_REGISTER_CLASS(zCVolatileMemoryBase);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCVolatileMemoryBase, &zCVolatileMemoryBase::zCVolatileMemoryBase_OnInit, void(zCVolatileMemoryBase::*)(unsigned int, unsigned int, zTVolatileOverflowMode), 0x00566070);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCVolatileMemoryBase, &zCVolatileMemoryBase::zCVolatileMemoryBase_OnInit, void(zCVolatileMemoryBase::*)(unsigned int, zTVolatileOverflowMode), 0x005660D0);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Init, 0x00566140);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Alloc, 0x00566160);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Mark, 0x00566300);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Restore, 0x00566310);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::MaxFillPercentage, 0x005663C0);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Destroyed, 0x005660C0);

	ZENGIN_REGISTER_CLASS(zCMemPoolBase);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMemPoolBase, &zCMemPoolBase::zCMemPoolBase_OnInit, void(zCMemPoolBase::*)(unsigned int), 0x005663D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMemPoolBase, &zCMemPoolBase::zCMemPoolBase_OnInit, void(zCMemPoolBase::*)(unsigned int, unsigned int, unsigned int), 0x00566400);
	ZENGIN_REGISTER_METHOD(zCMemPoolBase, &zCMemPoolBase::Alloc, 0x005664E0);
	ZENGIN_REGISTER_METHOD(zCMemPoolBase, &zCMemPoolBase::Free, 0x00566680);
	ZENGIN_REGISTER_METHOD(zCMemPoolBase, &zCMemPoolBase::PreAlloc, 0x005666C0);
	ZENGIN_REGISTER_METHOD(zCMemPoolBase, &zCMemPoolBase::PoolAdd, 0x005668C0);

} // namespace Gothic_II_Addon
