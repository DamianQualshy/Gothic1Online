namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCTriggerChangeLevel);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::oCTriggerChangeLevel_OnInit, 0x0043B6C0);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::SetLevelName, 0x0043BB10);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::_GetClassDef, 0x0043B3F0);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::Archive, 0x0043BD40);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::Unarchive, 0x0043BD80);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::TriggerTarget, 0x0043B7F0);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::UntriggerTarget, 0x0043BB00);

	ZENGIN_REGISTER_CLASS(oCTriggerScript);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::oCTriggerScript_OnInit, 0x0043BDC0);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::SetScriptFunc, 0x0043C480);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::_GetClassDef, 0x0043B6B0);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::Archive, 0x0043C5D0);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::Unarchive, 0x0043C600);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::TriggerTarget, 0x0043BE90);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::UntriggerTarget, 0x0043C1F0);

	ZENGIN_REGISTER_CLASS(oCObjectGenerator);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::oCObjectGenerator_OnInit, 0x0043C630);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::SetObjectName, 0x0043C740);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::SetObjectSpeed, 0x0043C880);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::Archive, 0x0043CB70);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::Unarchive, 0x0043CBB0);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::OnTrigger, 0x0043C890);

} // namespace Gothic_II_Classic
