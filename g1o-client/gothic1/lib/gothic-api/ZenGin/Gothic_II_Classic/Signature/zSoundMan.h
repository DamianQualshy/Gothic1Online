namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCSoundManager);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::DebugMessage, 0x005E56B0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::SearchMediumTypeIDList, 0x005E58F0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::GetMediumIndex, 0x005E5B10);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::GetCollSndTableIndex, 0x005E5BF0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::StartHitSound, 0x005E5D30);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::StartAttackSound, 0x005E6AF0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::StartSlideSound, 0x005E70B0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::StartDestructionSound, 0x005E7310);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::Init, 0x005E7640);

	ZENGIN_REGISTER_CLASS(zCSoundManager::zTScriptSoundData);
	ZENGIN_REGISTER_METHOD(zCSoundManager::zTScriptSoundData, &zCSoundManager::zTScriptSoundData::zTScriptSoundData_OnInit, 0x005E5670);

	ZENGIN_REGISTER_CLASS(zCSoundManager::zCSoundEventData);
	ZENGIN_REGISTER_METHOD(zCSoundManager::zCSoundEventData, &zCSoundManager::zCSoundEventData::zCSoundEventData_OnInit, 0x005E6860);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundManager::zCSoundEventData, &zCSoundManager::zCSoundEventData::GetData, void(zCSoundManager::zCSoundEventData::*)(zSTRING const&, zCSoundFX*&, zCParticleEmitter*&), 0x005E69B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundManager::zCSoundEventData, &zCSoundManager::zCSoundEventData::GetData, void(zCSoundManager::zCSoundEventData::*)(zCSoundFX*&, zCParticleEmitter*&), 0x005E6A90);

	ZENGIN_REGISTER_CLASS(zCSoundManager::zCMediumType);
	ZENGIN_REGISTER_METHOD(zCSoundManager::zCMediumType, &zCSoundManager::zCMediumType::zCMediumType_OnInit, 0x005E82A0);

	ZENGIN_REGISTER_CLASS(zCSoundManager::zCTableEntry);
	ZENGIN_REGISTER_METHOD(zCSoundManager::zCTableEntry, &zCSoundManager::zCTableEntry::zCTableEntry_OnInit, 0x005E5750);

} // namespace Gothic_II_Classic
