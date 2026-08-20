namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCTriggerChangeLevel);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::oCTriggerChangeLevel_OnInit, 0x0043CBD0);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::SetLevelName, 0x0043D090);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::_GetClassDef, 0x0043C8E0);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::Archive, 0x0043D2C0);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::Unarchive, 0x0043D300);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::TriggerTarget, 0x0043CD10);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::UntriggerTarget, 0x0043D080);

	ZENGIN_REGISTER_CLASS(oCTriggerScript);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::oCTriggerScript_OnInit, 0x0043D340);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::SetScriptFunc, 0x0043DAA0);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::_GetClassDef, 0x0043CBC0);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::Archive, 0x0043DBF0);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::Unarchive, 0x0043DC20);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::TriggerTarget, 0x0043D420);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::UntriggerTarget, 0x0043D7E0);

	ZENGIN_REGISTER_CLASS(oCObjectGenerator);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::oCObjectGenerator_OnInit, 0x0043DC50);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::SetObjectName, 0x0043DD70);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::SetObjectSpeed, 0x0043DEB0);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::Archive, 0x0043E1F0);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::Unarchive, 0x0043E230);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::OnTrigger, 0x0043DEC0);

} // namespace Gothic_I_Addon
