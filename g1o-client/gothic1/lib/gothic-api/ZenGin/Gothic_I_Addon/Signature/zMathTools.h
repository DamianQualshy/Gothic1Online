namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCPose);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::zCPose_OnInit, 0x004DD5A0);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::SetPose, 0x004C9970);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::SetInertiaRot, 0x004DCC10);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::SetInertiaPos, 0x004DCC90);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::SetInertiaSamplesRot, 0x004DCD10);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::SetInertiaSamplesPos, 0x004DCD70);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::CalcAvgRot, 0x004DCDD0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::UpdatePose, void(zCPose::*)(zMAT4&), 0x004DCFE0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::UpdatePose, void(zCPose::*)(zCQuat&, zVEC3&), 0x004DD1B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::UpdateRot, void(zCPose::*)(zMAT4&), 0x004DD360);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::UpdateRot, void(zCPose::*)(zCQuat&), 0x004DD3E0);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::UpdatePos, 0x004DD460);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::SetRot, void(zCPose::*)(zMAT4&), 0x004DD610);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::SetRot, void(zCPose::*)(zCQuat&), 0x004DD690);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::SetPos, void(zCPose::*)(zMAT4&), 0x004DD700);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::SetPos, void(zCPose::*)(zVEC3&), 0x004DD7B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::GetPose, void(zCPose::*)(zMAT4&), 0x004DD810);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPose, &zCPose::GetPose, zMAT4&(zCPose::*)(), 0x004DD850);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::GetPoseAbs, 0x004DD8A0);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::GetRotMatAbs, 0x004DD8E0);
	ZENGIN_REGISTER_METHOD(zCPose, &zCPose::GetRotMat, 0x004DD910);

} // namespace Gothic_I_Addon
