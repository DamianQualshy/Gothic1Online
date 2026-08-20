namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCCSTrigger);
	ZENGIN_REGISTER_METHOD(oCCSTrigger, &oCCSTrigger::_GetClassDef, 0x004041F0);
	ZENGIN_REGISTER_METHOD(oCCSTrigger, &oCCSTrigger::Archive, 0x00404AF0);
	ZENGIN_REGISTER_METHOD(oCCSTrigger, &oCCSTrigger::Unarchive, 0x00404B00);
	ZENGIN_REGISTER_METHOD(oCCSTrigger, &oCCSTrigger::TriggerTarget, 0x00404240);
	ZENGIN_REGISTER_METHOD(oCCSTrigger, &oCCSTrigger::UntriggerTarget, 0x004048B0);

} // namespace Gothic_I_Classic
