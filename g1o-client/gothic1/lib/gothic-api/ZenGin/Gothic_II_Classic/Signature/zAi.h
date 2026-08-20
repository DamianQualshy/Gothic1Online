namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCAIBase);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::_GetClassDef, 0x0048A3C0);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::CanThisCollideWith, 0x0048A3D0);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::ReportCollisionToAI, 0x0048A480);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::HasAIDetectedCollision, 0x0048A3E0);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::AICollisionResponseSelfDetected, 0x0048A3F0);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::HostVobRemovedFromWorld, 0x0048A400);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::HostVobAddedToWorld, 0x0048A490);

	ZENGIN_REGISTER_CLASS(zCAIBaseSound);
	ZENGIN_REGISTER_METHOD(zCAIBaseSound, &zCAIBaseSound::RemoveSlideSound, 0x00509370);
	ZENGIN_REGISTER_METHOD(zCAIBaseSound, &zCAIBaseSound::CheckSlideSound, 0x00509390);
	ZENGIN_REGISTER_METHOD(zCAIBaseSound, &zCAIBaseSound::StartDefaultCollisionSound, 0x00509420);

} // namespace Gothic_II_Classic
