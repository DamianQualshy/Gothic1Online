namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCPose);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::zCPose_OnInit, 0x004D7470);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::SetPose, 0x004C1470);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::SetInertiaRot, 0x004D6B20);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::SetInertiaPos, 0x004D6BA0);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::SetInertiaSamplesRot, 0x004D6C10);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::SetInertiaSamplesPos, 0x004D6C80);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::CalcAvgRot, 0x004D6CE0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::UpdatePose, void(zCPose::*)(zMAT4&), 0x004D6EF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::UpdatePose, void(zCPose::*)(zCQuat&, zVEC3&), 0x004D70A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::UpdateRot, void(zCPose::*)(zMAT4&), 0x004D7240);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::UpdateRot, void(zCPose::*)(zCQuat&), 0x004D72C0);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::UpdatePos, 0x004D7340);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::SetRot, void(zCPose::*)(zMAT4&), 0x004D74E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::SetRot, void(zCPose::*)(zCQuat&), 0x004D7560);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::SetPos, void(zCPose::*)(zMAT4&), 0x004D75D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::SetPos, void(zCPose::*)(zVEC3&), 0x004D7670);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::GetPose, void(zCPose::*)(zMAT4&), 0x004D76D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::GetPose, zMAT4&(zCPose::*)(), 0x004D7710);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::GetPoseAbs, 0x004D7760);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::GetRotMatAbs, 0x004D77A0);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::GetRotMat, 0x004D77D0);

} // namespace Gothic_II_Classic
