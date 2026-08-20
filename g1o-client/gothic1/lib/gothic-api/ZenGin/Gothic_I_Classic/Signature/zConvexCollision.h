namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCConvexCollisionCache);
	ZENGIN_REGISTER_METHOD(zCConvexCollisionCache, &zCConvexCollisionCache::zCConvexCollisionCache_OnInit, 0x005406D0);

	ZENGIN_REGISTER_CLASS(zCConvexPrimitive);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConvexPrimitive, &zCConvexPrimitive::PointNearestToPlane, void(zCConvexPrimitive::*)(zVEC3&, zVEC3 const&, zMAT4 const&, zMAT3 const&) const, 0x0053F810);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConvexPrimitive, &zCConvexPrimitive::PointNearestToPlane, void(zCConvexPrimitive::*)(zVEC3&, zVEC3 const&, zMAT4 const&) const, 0x00540290);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::Draw, 0x00540720);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::GetCenterLocal, 0x00540C80);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::SymetrySphere, 0x00540DD0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::SymetryRotation, 0x00540DE0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::UpdateBBox, 0x00540DF0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitive, &zCConvexPrimitive::DrawVirtual, 0x00540A00);

	ZENGIN_REGISTER_CLASS(zCConvexPrimitiveUnitSphere);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::zCConvexPrimitiveUnitSphere_OnInit, 0x00540C30);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::PointNearestToPlaneLocal, 0x00540CC0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::PointIsInLocal, 0x00540FA0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::SymetrySphere, 0x00540CE0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::SymetryRotation, 0x00540CF0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::UpdateBBox, 0x00540D30);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveUnitSphere, &zCConvexPrimitiveUnitSphere::DrawVirtual, 0x00540E80);

	ZENGIN_REGISTER_CLASS(zCConvexPrimitiveScaleTrans);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::zCConvexPrimitiveScaleTrans_OnInit, 0x00540FE0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::PointNearestToPlaneLocal, 0x005410A0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::GetCenterLocal, 0x005411B0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::PointIsInLocal, 0x00541160);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::UpdateBBox, 0x005411F0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveScaleTrans, &zCConvexPrimitiveScaleTrans::DrawVirtual, 0x00541240);

	ZENGIN_REGISTER_CLASS(zCConvexPrimitiveEllipsoid);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveEllipsoid, &zCConvexPrimitiveEllipsoid::zCConvexPrimitiveEllipsoid_OnInit, 0x005412F0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveEllipsoid, &zCConvexPrimitiveEllipsoid::Snap, 0x005414C0);
	ZENGIN_REGISTER_METHOD(zCConvexPrimitiveEllipsoid, &zCConvexPrimitiveEllipsoid::SymetryRotation, 0x00541440);

} // namespace Gothic_I_Classic
