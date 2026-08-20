namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCTriggerChangeLevel);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::oCTriggerChangeLevel_OnInit, 0x00438240);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::SetLevelName, 0x004386B0);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::_GetClassDef, 0x00437F60);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::Archive, 0x004388E0);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::Unarchive, 0x00438920);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::TriggerTarget, 0x00438370);
	ZENGIN_REGISTER_METHOD(oCTriggerChangeLevel, &oCTriggerChangeLevel::UntriggerTarget, 0x004386A0);

	ZENGIN_REGISTER_CLASS(oCTriggerScript);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::oCTriggerScript_OnInit, 0x00438960);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::SetScriptFunc, 0x00439020);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::_GetClassDef, 0x00438230);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::Archive, 0x00439170);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::Unarchive, 0x004391A0);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::TriggerTarget, 0x00438A30);
	ZENGIN_REGISTER_METHOD(oCTriggerScript, &oCTriggerScript::UntriggerTarget, 0x00438D90);

	ZENGIN_REGISTER_CLASS(oCObjectGenerator);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::oCObjectGenerator_OnInit, 0x004391D0);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::SetObjectName, 0x004392E0);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::SetObjectSpeed, 0x00439420);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::Archive, 0x00439720);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::Unarchive, 0x00439760);
	ZENGIN_REGISTER_METHOD(oCObjectGenerator, &oCObjectGenerator::OnTrigger, 0x00439430);

} // namespace Gothic_I_Classic
