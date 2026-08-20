namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCCollisionObjectDef);
	ZENGIN_REGISTER_METHOD(zCCollisionObjectDef, &zCCollisionObjectDef::zCCollisionObjectDef_OnInit, 0x0054D250);

	ZENGIN_REGISTER_CLASS(zCCollisionObject);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::CalcIntermediateTrafo, 0x0054D400);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::GetCollObjClass, 0x0054D1E0);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::DetectCollisionsSelf, 0x0054D1F0);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::CollisionResponse, 0x0054D200);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::GetAdaptiveStepSize, 0x0054D210);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::SuppressCollisionResponse, 0x0054D220);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::GetLargestBBox3DLocal, 0x0054D520);

} // namespace Gothic_II_Addon
