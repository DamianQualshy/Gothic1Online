namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCRigidBody);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::zCRigidBody_OnInit, 0x005B0070);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ComputeForceTorque, 0x005B0150);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::Star, 0x005B0160);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::SetSliding, 0x005B01E0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::Integrate, 0x005B0470);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::RunSimulation, 0x005B0730);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::SetInertiaTensorBlock, 0x005B0760);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ApplyForceCM, 0x005B0800);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ApplyForce, 0x005B0840);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::GetPointVelocity, 0x005B0880);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ApplyImpulseCM, 0x005B0920);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ApplyImpulse, 0x005B09A0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::CollisionImpulseStatic, 0x005B0A20);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::CollisionImpulseCenterStatic, 0x005B0B60);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::CollisionImpulse, 0x005B0DA0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::StopRotation, 0x005B0FA0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::StopTranslation, 0x005B1040);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::StopTransRot, 0x005B10E0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::SetVelocity, 0x005B1220);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::SetMode, 0x005B12D0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ShouldSlide, 0x005B12F0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::Archive, 0x005B14C0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::Unarchive, 0x005B1540);

} // namespace Gothic_I_Addon
