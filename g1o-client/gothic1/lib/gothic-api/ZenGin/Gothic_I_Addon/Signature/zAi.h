namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCAIBase);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::_GetClassDef, 0x0048F200);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::CanThisCollideWith, 0x0048F210);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::ReportCollisionToAI, 0x0048F2C0);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::HasAIDetectedCollision, 0x0048F220);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::AICollisionResponseSelfDetected, 0x0048F230);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::HostVobRemovedFromWorld, 0x0048F240);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::HostVobAddedToWorld, 0x0048F2D0);

	ZENGIN_REGISTER_CLASS(zCAIBaseSound);
	ZENGIN_REGISTER_METHOD(zCAIBaseSound, &zCAIBaseSound::RemoveSlideSound, 0x0050F7F0);
	ZENGIN_REGISTER_METHOD(zCAIBaseSound, &zCAIBaseSound::CheckSlideSound, 0x0050F810);
	ZENGIN_REGISTER_METHOD(zCAIBaseSound, &zCAIBaseSound::StartDefaultCollisionSound, 0x0050F8A0);

} // namespace Gothic_I_Addon
