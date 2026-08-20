namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCRigidBody);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::zCRigidBody_OnInit, 0x005B5660);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ComputeForceTorque, 0x005B5730);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::Star, 0x005B5740);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::SetSliding, 0x005B57C0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::Integrate, 0x005B5A50);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::RunSimulation, 0x005B5CF0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::SetInertiaTensorBlock, 0x005B5D20);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ApplyForceCM, 0x005B5DB0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ApplyForce, 0x005B5DF0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::GetPointVelocity, 0x005B5E30);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ApplyImpulseCM, 0x005B5EB0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ApplyImpulse, 0x005B5F20);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::CollisionImpulseStatic, 0x005B5F90);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::CollisionImpulseCenterStatic, 0x005B60A0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::CollisionImpulse, 0x005B6290);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::StopRotation, 0x005B6450);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::StopTranslation, 0x005B64F0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::StopTransRot, 0x005B6590);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::SetVelocity, 0x005B66D0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::SetMode, 0x005B6770);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ShouldSlide, 0x005B6790);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::Archive, 0x005B6930);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::Unarchive, 0x005B69B0);

} // namespace Gothic_II_Addon
