namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCConvexCollisionCache);
	ZENGIN_REGISTER_METHOD(zCConvexCollisionCache, &zCConvexCollisionCache::zCConvexCollisionCache_OnInit, 0x00558050);

	ZENGIN_REGISTER_CLASS(zCConvexPrimitive);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::PointNearestToPlane, 0x005571E0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::Draw, 0x005580A0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::GetCenterLocal, 0x005585B0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::SymetrySphere, 0x00558700);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::SymetryRotation, 0x00558710);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::UpdateBBox, 0x00558720);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::DrawVirtual, 0x00558360);

	ZENGIN_REGISTER_CLASS(zCConvexPrimitiveUnitSphere);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::zCConvexPrimitiveUnitSphere_OnInit, 0x00558560);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::PointNearestToPlaneLocal, 0x005585F0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::PointIsInLocal, 0x005588E0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::SymetrySphere, 0x00558610);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::SymetryRotation, 0x00558620);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::UpdateBBox, 0x00558660);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::DrawVirtual, 0x005587B0);

	ZENGIN_REGISTER_CLASS(zCConvexPrimitiveScaleTrans);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::zCConvexPrimitiveScaleTrans_OnInit, 0x00558920);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::PointNearestToPlaneLocal, 0x005589E0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::GetCenterLocal, 0x00558AE0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::PointIsInLocal, 0x00558A90);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::UpdateBBox, 0x00558B20);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::DrawVirtual, 0x00558B60);

	ZENGIN_REGISTER_CLASS(zCConvexPrimitiveEllipsoid);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveEllipsoid, &zCConvexPrimitiveEllipsoid::zCConvexPrimitiveEllipsoid_OnInit, 0x00558C10);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveEllipsoid, &zCConvexPrimitiveEllipsoid::Snap, 0x00558E00);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveEllipsoid, &zCConvexPrimitiveEllipsoid::SymetryRotation, 0x00558D80);

} // namespace Gothic_I_Addon
