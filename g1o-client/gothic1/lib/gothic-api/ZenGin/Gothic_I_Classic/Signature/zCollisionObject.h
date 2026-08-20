namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCCollisionObjectDef);
	ZENGIN_REGISTER_METHOD(zCCollisionObjectDef, &zCCollisionObjectDef::zCCollisionObjectDef_OnInit, 0x00538D60);

	ZENGIN_REGISTER_CLASS(zCCollisionObject);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::CalcIntermediateTrafo, 0x00538F40);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::GetCollObjClass, 0x00538CF0);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::DetectCollisionsSelf, 0x00538D00);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::CollisionResponse, 0x00538D10);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::GetAdaptiveStepSize, 0x00538D20);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::SuppressCollisionResponse, 0x00538D30);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::GetLargestBBox3DLocal, 0x00539060);

} // namespace Gothic_I_Classic
