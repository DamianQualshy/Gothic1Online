namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCPose);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::zCPose_OnInit, 0x004CCE40);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::SetPose, 0x004BA610);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::SetInertiaRot, 0x004CC4F0);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::SetInertiaPos, 0x004CC570);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::SetInertiaSamplesRot, 0x004CC5E0);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::SetInertiaSamplesPos, 0x004CC650);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::CalcAvgRot, 0x004CC6B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::UpdatePose, void(zCPose::*)(zMAT4&), 0x004CC8C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::UpdatePose, void(zCPose::*)(zCQuat&, zVEC3&), 0x004CCA70);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::UpdateRot, void(zCPose::*)(zMAT4&), 0x004CCC10);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::UpdateRot, void(zCPose::*)(zCQuat&), 0x004CCC90);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::UpdatePos, 0x004CCD10);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::SetRot, void(zCPose::*)(zMAT4&), 0x004CCEB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::SetRot, void(zCPose::*)(zCQuat&), 0x004CCF30);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::SetPos, void(zCPose::*)(zMAT4&), 0x004CCFA0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::SetPos, void(zCPose::*)(zVEC3&), 0x004CD040);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::GetPose, void(zCPose::*)(zMAT4&), 0x004CD0A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::GetPose, zMAT4&(zCPose::*)(), 0x004CD0E0);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::GetPoseAbs, 0x004CD130);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::GetRotMatAbs, 0x004CD170);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::GetRotMat, 0x004CD1A0);

} // namespace Gothic_I_Classic
