namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCConvexCollisionCache);
	ZENGIN_REGISTER_METHOD(zCConvexCollisionCache, &zCConvexCollisionCache::zCConvexCollisionCache_OnInit, 0x00554E20);

	ZENGIN_REGISTER_CLASS(zCConvexPrimitive);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::PointNearestToPlane, 0x00553F60);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::Draw, 0x00554E70);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::GetCenterLocal, 0x005553D0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::SymetrySphere, 0x00555520);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::SymetryRotation, 0x00555530);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::UpdateBBox, 0x00555540);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::DrawVirtual, 0x00555150);

	ZENGIN_REGISTER_CLASS(zCConvexPrimitiveUnitSphere);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::zCConvexPrimitiveUnitSphere_OnInit, 0x00555380);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::PointNearestToPlaneLocal, 0x00555410);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::PointIsInLocal, 0x005556F0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::SymetrySphere, 0x00555430);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::SymetryRotation, 0x00555440);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::UpdateBBox, 0x00555480);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::DrawVirtual, 0x005555D0);

	ZENGIN_REGISTER_CLASS(zCConvexPrimitiveScaleTrans);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::zCConvexPrimitiveScaleTrans_OnInit, 0x00555730);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::PointNearestToPlaneLocal, 0x005557F0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::GetCenterLocal, 0x00555900);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::PointIsInLocal, 0x005558B0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::UpdateBBox, 0x00555940);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::DrawVirtual, 0x00555990);

	ZENGIN_REGISTER_CLASS(zCConvexPrimitiveEllipsoid);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveEllipsoid, &zCConvexPrimitiveEllipsoid::zCConvexPrimitiveEllipsoid_OnInit, 0x00555A40);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveEllipsoid, &zCConvexPrimitiveEllipsoid::Snap, 0x00555C10);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveEllipsoid, &zCConvexPrimitiveEllipsoid::SymetryRotation, 0x00555B90);

} // namespace Gothic_II_Addon
