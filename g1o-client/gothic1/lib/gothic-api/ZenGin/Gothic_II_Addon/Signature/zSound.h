namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCSoundSystem);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetNumReverbPresets, 0x005EC060);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetReverbPresetName, 0x005EC070);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::LoadSoundFX, 0x004EB360);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::LoadSoundFXScript, 0x004EB370);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetSFXParser, 0x004EB380);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetPlayingTimeMSEC, 0x004EB390);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetSound3DDefaultRadius, 0x004EB3A0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetSound3DDefaultRadius, 0x004EB3B0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetMasterVolume, 0x004EB3C0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetMasterVolume, 0x004EB3D0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::StopSound, 0x004EB3E0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::StopAllSounds, 0x004EB3F0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetSoundProps, 0x004EB400);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::UpdateSoundProps, 0x004EB410);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::IsSoundActive, 0x004EB420);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetListener, 0x004EB430);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetGlobalReverbPreset, 0x004EB440);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetReverbEnabled, 0x004EB450);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetReverbEnabled, 0x004EB460);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetNumProvider, 0x004EB470);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetProviderName, 0x004EB480);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetProvider, 0x004EB490);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetSpeakerType, 0x004EB4A0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetSpeakerType, 0x004EB4B0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetCPULoad, 0x004EB4C0);

	ZENGIN_REGISTER_CLASS(zCSoundSystem::zTSound3DParams);
	ZENGIN_REGISTER_METHOD(zCSoundSystem::zTSound3DParams, &zCSoundSystem::zTSound3DParams::SetDefaults, 0x00612F50);

	ZENGIN_REGISTER_CLASS(zCSoundFX);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::zCSoundFX_OnInit, 0x004EDF50);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::_GetClassDef, 0x004EDF40);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetCacheConfig, 0x005EC090);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetNumChannels, 0x004EDF80);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetNumChannelFrames, 0x004EDF90);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetChannelFrame, 0x004EDFA0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetChannelFrame, 0x004EDFB0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetPlayingTimeMSEC, 0x004EDFC0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetPan, 0x004EDFD0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetPan, 0x004EDFE0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetVolume, 0x004EDFF0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetVolume, 0x004EE000);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetFrequency, 0x004EE010);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetFrequency, 0x004EE020);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetLooping, 0x004EE030);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::IsLooping, 0x004EE040);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetIsFixed, 0x004EE050);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetIsFixed, 0x004EE060);

	ZENGIN_REGISTER_CLASS(zCSoundSystemDummy);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::LoadSoundFX, 0x00632AC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundSystemDummy, &zCSoundSystemDummy::PlaySound, int(zCSoundSystemDummy::*)(zCSoundFX*, int), 0x00632B60);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundSystemDummy, &zCSoundSystemDummy::PlaySound, int(zCSoundSystemDummy::*)(zCSoundFX*, int, int, float, float), 0x00632B70);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundSystemDummy, &zCSoundSystemDummy::PlaySound3D, int(zCSoundSystemDummy::*)(zCSoundFX*, zCVob*, int, zCSoundSystem::zTSound3DParams*), 0x00632B90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundSystemDummy, &zCSoundSystemDummy::PlaySound3D, int(zCSoundSystemDummy::*)(zSTRING const&, zCVob*, int, zCSoundSystem::zTSound3DParams*), 0x00632BA0);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::GetSound3DProps, 0x00632BB0);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::UpdateSound3D, 0x00632BC0);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::DoSoundUpdate, 0x00632AB0);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::SetGlobalOcclusion, 0x00632B80);

} // namespace Gothic_II_Addon
