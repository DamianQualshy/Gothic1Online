namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCConvexCollisionCache);
	ZENGIN_REGISTER_METHOD(zCConvexCollisionCache, &zCConvexCollisionCache::zCConvexCollisionCache_OnInit, 0x0054FC00);

	ZENGIN_REGISTER_CLASS(zCConvexPrimitive);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::PointNearestToPlane, 0x0054ED40);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::Draw, 0x0054FC50);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::GetCenterLocal, 0x005501B0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::SymetrySphere, 0x00550300);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::SymetryRotation, 0x00550310);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::UpdateBBox, 0x00550320);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::DrawVirtual, 0x0054FF30);

	ZENGIN_REGISTER_CLASS(zCConvexPrimitiveUnitSphere);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::zCConvexPrimitiveUnitSphere_OnInit, 0x00550160);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::PointNearestToPlaneLocal, 0x005501F0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::PointIsInLocal, 0x005504D0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::SymetrySphere, 0x00550210);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::SymetryRotation, 0x00550220);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::UpdateBBox, 0x00550260);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::DrawVirtual, 0x005503B0);

	ZENGIN_REGISTER_CLASS(zCConvexPrimitiveScaleTrans);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::zCConvexPrimitiveScaleTrans_OnInit, 0x00550510);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::PointNearestToPlaneLocal, 0x005505D0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::GetCenterLocal, 0x005506E0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::PointIsInLocal, 0x00550690);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::UpdateBBox, 0x00550720);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::DrawVirtual, 0x00550770);

	ZENGIN_REGISTER_CLASS(zCConvexPrimitiveEllipsoid);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveEllipsoid, &zCConvexPrimitiveEllipsoid::zCConvexPrimitiveEllipsoid_OnInit, 0x00550820);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveEllipsoid, &zCConvexPrimitiveEllipsoid::Snap, 0x005509F0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveEllipsoid, &zCConvexPrimitiveEllipsoid::SymetryRotation, 0x00550970);

} // namespace Gothic_II_Classic
