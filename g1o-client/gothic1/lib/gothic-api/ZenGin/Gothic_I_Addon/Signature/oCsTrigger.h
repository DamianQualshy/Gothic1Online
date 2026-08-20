namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCCSTrigger);
	ZENGIN_REGISTER_METHOD(oCCSTrigger, &oCCSTrigger::_GetClassDef, 0x00404980);
	ZENGIN_REGISTER_METHOD(oCCSTrigger, &oCCSTrigger::Archive, 0x00405330);
	ZENGIN_REGISTER_METHOD(oCCSTrigger, &oCCSTrigger::Unarchive, 0x00405340);
	ZENGIN_REGISTER_METHOD(oCCSTrigger, &oCCSTrigger::TriggerTarget, 0x004049D0);
	ZENGIN_REGISTER_METHOD(oCCSTrigger, &oCCSTrigger::UntriggerTarget, 0x004050B0);

} // namespace Gothic_I_Addon
