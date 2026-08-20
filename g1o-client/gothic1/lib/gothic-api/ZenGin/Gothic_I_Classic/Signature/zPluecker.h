namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCPluecker);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPluecker, &zCPluecker::zCPluecker_OnInit, void(zCPluecker::*)(zVEC3 const&, zVEC3 const&), 0x005957B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPluecker, &zCPluecker::zCPluecker_OnInit, void(zCPluecker::*)(), 0x00595800);
	ZENGIN_REGISTER_METHOD(zCPluecker, &zCPluecker::Length2, 0x00595820);
	ZENGIN_REGISTER_METHOD(zCPluecker, &zCPluecker::Normalize, 0x00595850);

} // namespace Gothic_I_Classic
