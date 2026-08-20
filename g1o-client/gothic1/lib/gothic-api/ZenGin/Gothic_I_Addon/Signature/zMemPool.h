namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCMemPoolBlock);

	ZENGIN_REGISTER_CLASS(zCVolatileMemoryBase);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCVolatileMemoryBase, &zCVolatileMemoryBase::zCVolatileMemoryBase_OnInit, void(zCVolatileMemoryBase::*)(unsigned int, unsigned int, zTVolatileOverflowMode), 0x005671C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCVolatileMemoryBase, &zCVolatileMemoryBase::zCVolatileMemoryBase_OnInit, void(zCVolatileMemoryBase::*)(unsigned int, zTVolatileOverflowMode), 0x00567230);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Init, 0x005672A0);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Alloc, 0x005672D0);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Mark, 0x00567490);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Restore, 0x005674A0);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::MaxFillPercentage, 0x00567570);
	ZENGIN_REGISTER_METHOD(zCVolatileMemoryBase, &zCVolatileMemoryBase::Destroyed, 0x00567220);

	ZENGIN_REGISTER_CLASS(zCMemPoolBase);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMemPoolBase, &zCMemPoolBase::zCMemPoolBase_OnInit, void(zCMemPoolBase::*)(unsigned int), 0x00567580);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMemPoolBase, &zCMemPoolBase::zCMemPoolBase_OnInit, void(zCMemPoolBase::*)(unsigned int, unsigned int, unsigned int), 0x005675B0);
	ZENGIN_REGISTER_METHOD(zCMemPoolBase, &zCMemPoolBase::Alloc, 0x00567690);
	ZENGIN_REGISTER_METHOD(zCMemPoolBase, &zCMemPoolBase::Free, 0x00567840);
	ZENGIN_REGISTER_METHOD(zCMemPoolBase, &zCMemPoolBase::PreAlloc, 0x00567880);
	ZENGIN_REGISTER_METHOD(zCMemPoolBase, &zCMemPoolBase::PoolAdd, 0x00567A90);

} // namespace Gothic_I_Addon
