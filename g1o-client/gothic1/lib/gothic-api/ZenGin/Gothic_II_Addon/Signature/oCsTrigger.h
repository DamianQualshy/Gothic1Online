namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCCSTrigger);
	ZENGIN_REGISTER_METHOD(oCCSTrigger, &oCCSTrigger::_GetClassDef, 0x00404330);
	ZENGIN_REGISTER_METHOD(oCCSTrigger, &oCCSTrigger::Archive, 0x00404C30);
	ZENGIN_REGISTER_METHOD(oCCSTrigger, &oCCSTrigger::Unarchive, 0x00404C40);
	ZENGIN_REGISTER_METHOD(oCCSTrigger, &oCCSTrigger::TriggerTarget, 0x00404380);
	ZENGIN_REGISTER_METHOD(oCCSTrigger, &oCCSTrigger::UntriggerTarget, 0x004049F0);

} // namespace Gothic_II_Addon
