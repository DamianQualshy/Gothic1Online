namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCSoundManager);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::DebugMessage, 0x005DFAF0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::SearchMediumTypeIDList, 0x005DFD40);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::GetMediumIndex, 0x005DFFB0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::GetCollSndTableIndex, 0x005E00B0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::StartHitSound, 0x005E01F0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::StartAttackSound, 0x005E1080);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::StartSlideSound, 0x005E15E0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::StartDestructionSound, 0x005E18A0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::Init, 0x005E1C70);

	ZENGIN_REGISTER_CLASS(zCSoundManager::zTScriptSoundData);
	ZENGIN_REGISTER_METHOD(zCSoundManager::zTScriptSoundData, &zCSoundManager::zTScriptSoundData::zTScriptSoundData_OnInit, 0x005DFAB0);

	ZENGIN_REGISTER_CLASS(zCSoundManager::zCSoundEventData);
	ZENGIN_REGISTER_METHOD(zCSoundManager::zCSoundEventData, &zCSoundManager::zCSoundEventData::zCSoundEventData_OnInit, 0x005E0DE0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundManager::zCSoundEventData, &zCSoundManager::zCSoundEventData::GetData, void(zCSoundManager::zCSoundEventData::*)(zSTRING const&, zCSoundFX*&, zCParticleEmitter*&), 0x005E0F30);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundManager::zCSoundEventData, &zCSoundManager::zCSoundEventData::GetData, void(zCSoundManager::zCSoundEventData::*)(zCSoundFX*&, zCParticleEmitter*&), 0x005E1020);

	ZENGIN_REGISTER_CLASS(zCSoundManager::zCMediumType);
	ZENGIN_REGISTER_METHOD(zCSoundManager::zCMediumType, &zCSoundManager::zCMediumType::zCMediumType_OnInit, 0x005E29B0);

	ZENGIN_REGISTER_CLASS(zCSoundManager::zCTableEntry);
	ZENGIN_REGISTER_METHOD(zCSoundManager::zCTableEntry, &zCSoundManager::zCTableEntry::zCTableEntry_OnInit, 0x005DFBA0);

} // namespace Gothic_I_Addon
