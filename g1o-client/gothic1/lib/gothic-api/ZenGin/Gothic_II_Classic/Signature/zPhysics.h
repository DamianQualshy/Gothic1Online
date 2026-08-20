namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCRigidBody);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::zCRigidBody_OnInit, 0x005AFAF0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ComputeForceTorque, 0x005AFBC0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::Star, 0x005AFBD0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::SetSliding, 0x005AFC50);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::Integrate, 0x005AFEE0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::RunSimulation, 0x005B0180);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::SetInertiaTensorBlock, 0x005B01B0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ApplyForceCM, 0x005B0240);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ApplyForce, 0x005B0280);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::GetPointVelocity, 0x005B02C0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ApplyImpulseCM, 0x005B0340);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ApplyImpulse, 0x005B03B0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::CollisionImpulseStatic, 0x005B0420);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::CollisionImpulseCenterStatic, 0x005B0530);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::CollisionImpulse, 0x005B0720);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::StopRotation, 0x005B08E0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::StopTranslation, 0x005B0980);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::StopTransRot, 0x005B0A20);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::SetVelocity, 0x005B0B60);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::SetMode, 0x005B0C00);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ShouldSlide, 0x005B0C20);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::Archive, 0x005B0DC0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::Unarchive, 0x005B0E40);

} // namespace Gothic_II_Classic
