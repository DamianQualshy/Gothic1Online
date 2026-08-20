namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCPluecker);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPluecker, &zCPluecker::zCPluecker_OnInit, void(zCPluecker::*)(zVEC3 const&, zVEC3 const&), 0x005B0F90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPluecker, &zCPluecker::zCPluecker_OnInit, void(zCPluecker::*)(), 0x005B0FE0);
	ZENGIN_REGISTER_METHOD(zCPluecker, &zCPluecker::Length2, 0x005B1000);
	ZENGIN_REGISTER_METHOD(zCPluecker, &zCPluecker::Normalize, 0x005B1030);

} // namespace Gothic_II_Classic
