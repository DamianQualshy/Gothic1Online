namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCMemPoolBlock);

	ZENGIN_REGISTER_CLASS(zCVolatileMemoryBase);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCVolatileMemoryBase, &zCVolatileMemoryBase::zCVolatileMemoryBase_OnInit, void(zCVolatileMemoryBase::*)(unsigned int, unsigned int, zTVolatileOverflowMode), 0x00560E50);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCVolatileMemoryBase, &zCVolatileMemoryBase::zCVolatileMemoryBase_OnInit, void(zCVolatileMemoryBase::*)(unsigned int, zTVolatileOverflowMode), 0x00560EB0);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Init, 0x00560F20);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Alloc, 0x00560F40);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Mark, 0x005610E0);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Restore, 0x005610F0);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::MaxFillPercentage, 0x005611A0);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Destroyed, 0x00560EA0);

	ZENGIN_REGISTER_CLASS(zCMemPoolBase);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMemPoolBase, &zCMemPoolBase::zCMemPoolBase_OnInit, void(zCMemPoolBase::*)(unsigned int), 0x005611B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMemPoolBase, &zCMemPoolBase::zCMemPoolBase_OnInit, void(zCMemPoolBase::*)(unsigned int, unsigned int, unsigned int), 0x005611E0);
	ZENGIN_REGISTER_METHOD(zCMemPoolBase, &zCMemPoolBase::Alloc, 0x005612C0);
	ZENGIN_REGISTER_METHOD(zCMemPoolBase, &zCMemPoolBase::Free, 0x00561460);
	ZENGIN_REGISTER_METHOD(zCMemPoolBase, &zCMemPoolBase::PreAlloc, 0x005614A0);
	ZENGIN_REGISTER_METHOD(zCMemPoolBase, &zCMemPoolBase::PoolAdd, 0x005616A0);

} // namespace Gothic_II_Classic
