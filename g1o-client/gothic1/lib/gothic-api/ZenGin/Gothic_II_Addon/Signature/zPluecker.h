namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCPluecker);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPluecker, &zCPluecker::zCPluecker_OnInit, void(zCPluecker::*)(zVEC3 const&, zVEC3 const&), 0x005B6B00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPluecker, &zCPluecker::zCPluecker_OnInit, void(zCPluecker::*)(), 0x005B6B50);
	ZENGIN_REGISTER_METHOD(zCPluecker, &zCPluecker::Length2, 0x005B6B70);
	ZENGIN_REGISTER_METHOD(zCPluecker, &zCPluecker::Normalize, 0x005B6BA0);

} // namespace Gothic_II_Addon
