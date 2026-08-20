namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCAIBase);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::_GetClassDef, 0x0048BD20);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::CanThisCollideWith, 0x0048BD30);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::ReportCollisionToAI, 0x0048BDF0);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::HasAIDetectedCollision, 0x0048BD40);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::AICollisionResponseSelfDetected, 0x0048BD50);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::HostVobRemovedFromWorld, 0x0048BD60);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::HostVobAddedToWorld, 0x0048BE00);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::GetIsProjectile, 0x0048BE10);

	ZENGIN_REGISTER_CLASS(zCAIBaseSound);
	ZENGIN_REGISTER_METHOD(zCAIBaseSound, &zCAIBaseSound::RemoveSlideSound, 0x0050C120);
	ZENGIN_REGISTER_METHOD(zCAIBaseSound, &zCAIBaseSound::CheckSlideSound, 0x0050C140);
	ZENGIN_REGISTER_METHOD(zCAIBaseSound, &zCAIBaseSound::StartDefaultCollisionSound, 0x0050C1D0);

} // namespace Gothic_II_Addon
