namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCSoundSystem);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetNumReverbPresets, 0x005C19F0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetReverbPresetName, 0x005C1A00);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::LoadSoundFX, 0x004DDDE0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::LoadSoundFXScript, 0x004DDDF0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetSFXParser, 0x004DDE00);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetPlayingTimeMSEC, 0x004DDE10);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetSound3DDefaultRadius, 0x004DDE20);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetSound3DDefaultRadius, 0x004DDE30);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetMasterVolume, 0x004DDE40);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetMasterVolume, 0x004DDE50);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::StopSound, 0x004DDE60);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::StopAllSounds, 0x004DDE70);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetSoundProps, 0x004DDE80);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::UpdateSoundProps, 0x004DDE90);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::IsSoundActive, 0x004DDEA0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetListener, 0x004DDEB0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetGlobalReverbPreset, 0x004DDEC0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetReverbEnabled, 0x004DDED0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetReverbEnabled, 0x004DDEE0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetNumProvider, 0x004DDEF0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetProviderName, 0x004DDF00);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetProvider, 0x004DDF10);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetSpeakerType, 0x004DDF20);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetSpeakerType, 0x004DDF30);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetCPULoad, 0x004DDF40);

	ZENGIN_REGISTER_CLASS(zCSoundSystem::zTSound3DParams);
	ZENGIN_REGISTER_METHOD(zCSoundSystem::zTSound3DParams, &zCSoundSystem::zTSound3DParams::SetDefaults, 0x005E6020);

	ZENGIN_REGISTER_CLASS(zCSoundFX);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::zCSoundFX_OnInit, 0x004E09C0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::_GetClassDef, 0x004E09B0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetCacheConfig, 0x005C1A20);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetNumChannels, 0x004E09F0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetNumChannelFrames, 0x004E0A00);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetChannelFrame, 0x004E0A10);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetChannelFrame, 0x004E0A20);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetPlayingTimeMSEC, 0x004E0A30);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetPan, 0x004E0A40);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetPan, 0x004E0A50);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetVolume, 0x004E0A60);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetVolume, 0x004E0A70);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetFrequency, 0x004E0A80);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetFrequency, 0x004E0A90);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetLooping, 0x004E0AA0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::IsLooping, 0x004E0AB0);

	ZENGIN_REGISTER_CLASS(zCSoundSystemDummy);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::LoadSoundFX, 0x00603740);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundSystemDummy, &zCSoundSystemDummy::PlaySound, int(zCSoundSystemDummy::*)(zCSoundFX*, int), 0x00603800);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundSystemDummy, &zCSoundSystemDummy::PlaySound, int(zCSoundSystemDummy::*)(zCSoundFX*, int, int, float, float), 0x00603810);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundSystemDummy, &zCSoundSystemDummy::PlaySound3D, int(zCSoundSystemDummy::*)(zCSoundFX*, zCVob*, int, zCSoundSystem::zTSound3DParams*), 0x00603830);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundSystemDummy, &zCSoundSystemDummy::PlaySound3D, int(zCSoundSystemDummy::*)(zSTRING const&, zCVob*, int, zCSoundSystem::zTSound3DParams*), 0x00603840);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::GetSound3DProps, 0x00603850);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::UpdateSound3D, 0x00603860);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::DoSoundUpdate, 0x00603730);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::SetGlobalOcclusion, 0x00603820);

} // namespace Gothic_I_Classic
