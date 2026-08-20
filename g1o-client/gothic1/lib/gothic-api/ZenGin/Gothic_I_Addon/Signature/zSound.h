namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCSoundSystem);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetNumReverbPresets, 0x005DF950);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetReverbPresetName, 0x005DF960);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::LoadSoundFX, 0x004EF290);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::LoadSoundFXScript, 0x004EF2A0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetSFXParser, 0x004EF2B0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetPlayingTimeMSEC, 0x004EF2C0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetSound3DDefaultRadius, 0x004EF2D0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetSound3DDefaultRadius, 0x004EF2E0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetMasterVolume, 0x004EF2F0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetMasterVolume, 0x004EF300);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::StopSound, 0x004EF310);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::StopAllSounds, 0x004EF320);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetSoundProps, 0x004EF330);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::UpdateSoundProps, 0x004EF340);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::IsSoundActive, 0x004EF350);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetListener, 0x004EF360);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetGlobalReverbPreset, 0x004EF370);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetReverbEnabled, 0x004EF380);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetReverbEnabled, 0x004EF390);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetNumProvider, 0x004EF3A0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetProviderName, 0x004EF3B0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetProvider, 0x004EF3C0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetSpeakerType, 0x004EF3D0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetSpeakerType, 0x004EF3E0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetCPULoad, 0x004EF3F0);

	ZENGIN_REGISTER_CLASS(zCSoundSystem::zTSound3DParams);
	ZENGIN_REGISTER_METHOD(zCSoundSystem::zTSound3DParams, &zCSoundSystem::zTSound3DParams::SetDefaults, 0x00606310);

	ZENGIN_REGISTER_CLASS(zCSoundFX);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::zCSoundFX_OnInit, 0x004F2380);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::_GetClassDef, 0x004F2370);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetCacheConfig, 0x005DF980);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetNumChannels, 0x004F23B0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetNumChannelFrames, 0x004F23C0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetChannelFrame, 0x004F23D0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetChannelFrame, 0x004F23E0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetPlayingTimeMSEC, 0x004F23F0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetPan, 0x004F2400);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetPan, 0x004F2410);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetVolume, 0x004F2420);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetVolume, 0x004F2430);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetFrequency, 0x004F2440);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetFrequency, 0x004F2450);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetLooping, 0x004F2460);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::IsLooping, 0x004F2470);

	ZENGIN_REGISTER_CLASS(zCSoundSystemDummy);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::LoadSoundFX, 0x00625780);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundSystemDummy, &zCSoundSystemDummy::PlaySound, int(zCSoundSystemDummy::*)(zCSoundFX*, int), 0x00625840);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundSystemDummy, &zCSoundSystemDummy::PlaySound, int(zCSoundSystemDummy::*)(zCSoundFX*, int, int, float, float), 0x00625850);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundSystemDummy, &zCSoundSystemDummy::PlaySound3D, int(zCSoundSystemDummy::*)(zCSoundFX*, zCVob*, int, zCSoundSystem::zTSound3DParams*), 0x00625870);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundSystemDummy, &zCSoundSystemDummy::PlaySound3D, int(zCSoundSystemDummy::*)(zSTRING const&, zCVob*, int, zCSoundSystem::zTSound3DParams*), 0x00625880);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::GetSound3DProps, 0x00625890);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::UpdateSound3D, 0x006258A0);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::DoSoundUpdate, 0x00625770);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::SetGlobalOcclusion, 0x00625860);

} // namespace Gothic_I_Addon
