namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCMemPoolBlock);

	ZENGIN_REGISTER_CLASS(zCVolatileMemoryBase);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCVolatileMemoryBase, &zCVolatileMemoryBase::zCVolatileMemoryBase_OnInit, void(zCVolatileMemoryBase::*)(unsigned int, unsigned int, zTVolatileOverflowMode), 0x0054ECC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCVolatileMemoryBase, &zCVolatileMemoryBase::zCVolatileMemoryBase_OnInit, void(zCVolatileMemoryBase::*)(unsigned int, zTVolatileOverflowMode), 0x0054ED30);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Init, 0x0054EDA0);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Alloc, 0x0054EDD0);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Mark, 0x0054EF80);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Restore, 0x0054EF90);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::MaxFillPercentage, 0x0054F050);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Destroyed, 0x0054ED20);

	ZENGIN_REGISTER_CLASS(zCMemPoolBase);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMemPoolBase, &zCMemPoolBase::zCMemPoolBase_OnInit, void(zCMemPoolBase::*)(unsigned int), 0x0054F060);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMemPoolBase, &zCMemPoolBase::zCMemPoolBase_OnInit, void(zCMemPoolBase::*)(unsigned int, unsigned int, unsigned int), 0x0054F090);
	ZENGIN_REGISTER_METHOD(zCMemPoolBase, &zCMemPoolBase::Alloc, 0x0054F170);
	ZENGIN_REGISTER_METHOD(zCMemPoolBase, &zCMemPoolBase::Free, 0x0054F320);
	ZENGIN_REGISTER_METHOD(zCMemPoolBase, &zCMemPoolBase::PreAlloc, 0x0054F360);
	ZENGIN_REGISTER_METHOD(zCMemPoolBase, &zCMemPoolBase::PoolAdd, 0x0054F570);

} // namespace Gothic_I_Classic
