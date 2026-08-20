namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCTriggerChangeLevel);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::oCTriggerChangeLevel_OnInit, 0x0043BCF0);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::SetLevelName, 0x0043C140);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::_GetClassDef, 0x0043BA20);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::Archive, 0x0043C370);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::Unarchive, 0x0043C3B0);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::TriggerTarget, 0x0043BE20);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::UntriggerTarget, 0x0043C130);

	ZENGIN_REGISTER_CLASS(oCTriggerScript);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::oCTriggerScript_OnInit, 0x0043C3F0);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::SetScriptFunc, 0x0043CAB0);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::_GetClassDef, 0x0043BCE0);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::Archive, 0x0043CC00);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::Unarchive, 0x0043CC30);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::TriggerTarget, 0x0043C4C0);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::UntriggerTarget, 0x0043C820);

	ZENGIN_REGISTER_CLASS(oCObjectGenerator);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::oCObjectGenerator_OnInit, 0x0043CC60);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::SetObjectName, 0x0043CD70);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::SetObjectSpeed, 0x0043CEB0);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::Archive, 0x0043D1A0);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::Unarchive, 0x0043D1E0);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::OnTrigger, 0x0043CEC0);

} // namespace Gothic_II_Addon
