namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCAIBase);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::_GetClassDef, 0x004840E0);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::CanThisCollideWith, 0x004840F0);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::ReportCollisionToAI, 0x004841A0);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::HasAIDetectedCollision, 0x00484100);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::AICollisionResponseSelfDetected, 0x00484110);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::HostVobRemovedFromWorld, 0x00484120);
	ZENGIN_REGISTER_METHOD(zCAIBase, &zCAIBase::HostVobAddedToWorld, 0x004841B0);

	ZENGIN_REGISTER_CLASS(zCAIBaseSound);
	ZENGIN_REGISTER_METHOD(zCAIBaseSound, &zCAIBaseSound::RemoveSlideSound, 0x004FC6E0);
	ZENGIN_REGISTER_METHOD(zCAIBaseSound, &zCAIBaseSound::CheckSlideSound, 0x004FC700);
	ZENGIN_REGISTER_METHOD(zCAIBaseSound, &zCAIBaseSound::StartDefaultCollisionSound, 0x004FC790);

} // namespace Gothic_I_Classic
