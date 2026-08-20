namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCSoundManager);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::DebugMessage, 0x005C1B70);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::SearchMediumTypeIDList, 0x005C1DB0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::GetMediumIndex, 0x005C1FD0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::GetCollSndTableIndex, 0x005C20B0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::StartHitSound, 0x005C21F0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::StartAttackSound, 0x005C2F40);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::StartSlideSound, 0x005C3460);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::StartDestructionSound, 0x005C36C0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::Init, 0x005C3A20);

	ZENGIN_REGISTER_CLASS(zCSoundManager::zTScriptSoundData);
	ZENGIN_REGISTER_METHOD(zCSoundManager::zTScriptSoundData, &zCSoundManager::zTScriptSoundData::zTScriptSoundData_OnInit, 0x005C1B30);

	ZENGIN_REGISTER_CLASS(zCSoundManager::zCSoundEventData);
	ZENGIN_REGISTER_METHOD(zCSoundManager::zCSoundEventData, &zCSoundManager::zCSoundEventData::zCSoundEventData_OnInit, 0x005C2CB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundManager::zCSoundEventData, &zCSoundManager::zCSoundEventData::GetData, void(zCSoundManager::zCSoundEventData::*)(zSTRING const&, zCSoundFX*&, zCParticleEmitter*&), 0x005C2E00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundManager::zCSoundEventData, &zCSoundManager::zCSoundEventData::GetData, void(zCSoundManager::zCSoundEventData::*)(zCSoundFX*&, zCParticleEmitter*&), 0x005C2EE0);

	ZENGIN_REGISTER_CLASS(zCSoundManager::zCMediumType);
	ZENGIN_REGISTER_METHOD(zCSoundManager::zCMediumType, &zCSoundManager::zCMediumType::zCMediumType_OnInit, 0x005C4660);

	ZENGIN_REGISTER_CLASS(zCSoundManager::zCTableEntry);
	ZENGIN_REGISTER_METHOD(zCSoundManager::zCTableEntry, &zCSoundManager::zCTableEntry::zCTableEntry_OnInit, 0x005C1C10);

} // namespace Gothic_I_Classic
