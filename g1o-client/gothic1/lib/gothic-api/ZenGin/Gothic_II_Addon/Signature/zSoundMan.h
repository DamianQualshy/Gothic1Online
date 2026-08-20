namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCSoundManager);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::DebugMessage, 0x005EC460);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::SearchMediumTypeIDList, 0x005EC6A0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::GetMediumIndex, 0x005EC8C0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::GetCollSndTableIndex, 0x005EC9A0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::StartHitSound, 0x005ECAE0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::StartAttackSound, 0x005ED8A0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::StartSlideSound, 0x005EDE60);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::StartDestructionSound, 0x005EE0C0);
	ZENGIN_REGISTER_METHOD(zCSoundManager, &zCSoundManager::Init, 0x005EE3F0);

	ZENGIN_REGISTER_CLASS(zCSoundManager::zTScriptSoundData);
	ZENGIN_REGISTER_METHOD(zCSoundManager::zTScriptSoundData, &zCSoundManager::zTScriptSoundData::zTScriptSoundData_OnInit, 0x005EC420);

	ZENGIN_REGISTER_CLASS(zCSoundManager::zCSoundEventData);
	ZENGIN_REGISTER_METHOD(zCSoundManager::zCSoundEventData, &zCSoundManager::zCSoundEventData::zCSoundEventData_OnInit, 0x005ED610);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundManager::zCSoundEventData, &zCSoundManager::zCSoundEventData::GetData, void(zCSoundManager::zCSoundEventData::*)(zSTRING const&, zCSoundFX*&, zCParticleEmitter*&), 0x005ED760);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundManager::zCSoundEventData, &zCSoundManager::zCSoundEventData::GetData, void(zCSoundManager::zCSoundEventData::*)(zCSoundFX*&, zCParticleEmitter*&), 0x005ED840);

	ZENGIN_REGISTER_CLASS(zCSoundManager::zCMediumType);
	ZENGIN_REGISTER_METHOD(zCSoundManager::zCMediumType, &zCSoundManager::zCMediumType::zCMediumType_OnInit, 0x005EF050);

	ZENGIN_REGISTER_CLASS(zCSoundManager::zCTableEntry);
	ZENGIN_REGISTER_METHOD(zCSoundManager::zCTableEntry, &zCSoundManager::zCTableEntry::zCTableEntry_OnInit, 0x005EC500);

} // namespace Gothic_II_Addon
