namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCCollisionObjectDef);
	ZENGIN_REGISTER_METHOD(zCCollisionObjectDef, &zCCollisionObjectDef::zCCollisionObjectDef_OnInit, 0x00548030);

	ZENGIN_REGISTER_CLASS(zCCollisionObject);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::CalcIntermediateTrafo, 0x005481E0);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::GetCollObjClass, 0x00547FC0);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::DetectCollisionsSelf, 0x00547FD0);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::CollisionResponse, 0x00547FE0);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::GetAdaptiveStepSize, 0x00547FF0);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::SuppressCollisionResponse, 0x00548000);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::GetLargestBBox3DLocal, 0x00548300);

} // namespace Gothic_II_Classic
