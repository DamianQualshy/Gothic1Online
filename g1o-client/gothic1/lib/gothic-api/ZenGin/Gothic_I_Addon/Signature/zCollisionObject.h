namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCCollisionObjectDef);
	ZENGIN_REGISTER_METHOD(zCCollisionObjectDef, &zCCollisionObjectDef::zCCollisionObjectDef_OnInit, 0x0054FFB0);

	ZENGIN_REGISTER_CLASS(zCCollisionObject);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::CalcIntermediateTrafo, 0x00550180);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::GetCollObjClass, 0x0054FF40);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::DetectCollisionsSelf, 0x0054FF50);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::CollisionResponse, 0x0054FF60);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::GetAdaptiveStepSize, 0x0054FF70);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::SuppressCollisionResponse, 0x0054FF80);
	ZENGIN_REGISTER_METHOD(zCCollisionObject, &zCCollisionObject::GetLargestBBox3DLocal, 0x00550300);

} // namespace Gothic_I_Addon
