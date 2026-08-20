namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCPluecker);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPluecker, &zCPluecker::zCPluecker_OnInit, void(zCPluecker::*)(zVEC3 const&, zVEC3 const&), 0x005B16A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPluecker, &zCPluecker::zCPluecker_OnInit, void(zCPluecker::*)(), 0x005B16F0);
	ZENGIN_REGISTER_METHOD(zCPluecker, &zCPluecker::Length2, 0x005B1710);
	ZENGIN_REGISTER_METHOD(zCPluecker, &zCPluecker::Normalize, 0x005B1740);

} // namespace Gothic_I_Addon
