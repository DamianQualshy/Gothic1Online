namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCRigidBody);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::zCRigidBody_OnInit, 0x00594310);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ComputeForceTorque, 0x005943E0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::Star, 0x005943F0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::SetSliding, 0x00594470);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::Integrate, 0x00594700);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::RunSimulation, 0x005949A0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::SetInertiaTensorBlock, 0x005949D0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ApplyForceCM, 0x00594A60);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ApplyForce, 0x00594AA0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::GetPointVelocity, 0x00594AE0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ApplyImpulseCM, 0x00594B60);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ApplyImpulse, 0x00594BD0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::CollisionImpulseStatic, 0x00594C40);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::CollisionImpulseCenterStatic, 0x00594D50);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::CollisionImpulse, 0x00594F40);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::StopRotation, 0x00595100);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::StopTranslation, 0x005951A0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::StopTransRot, 0x00595240);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::SetVelocity, 0x00595380);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::SetMode, 0x00595420);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::ShouldSlide, 0x00595440);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::Archive, 0x005955E0);
	ZENGIN_REGISTER_METHOD(zCRigidBody, &zCRigidBody::Unarchive, 0x00595660);

} // namespace Gothic_I_Classic
