namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCSoundSystem);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetNumReverbPresets, 0x005E52B0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetReverbPresetName, 0x005E52C0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::LoadSoundFX, 0x004E86E0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::LoadSoundFXScript, 0x004E86F0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetSFXParser, 0x004E8700);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetPlayingTimeMSEC, 0x004E8710);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetSound3DDefaultRadius, 0x004E8720);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetSound3DDefaultRadius, 0x004E8730);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetMasterVolume, 0x004E8740);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetMasterVolume, 0x004E8750);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::StopSound, 0x004E8760);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::StopAllSounds, 0x004E8770);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetSoundProps, 0x004E8780);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::UpdateSoundProps, 0x004E8790);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::IsSoundActive, 0x004E87A0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetListener, 0x004E87B0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetGlobalReverbPreset, 0x004E87C0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetReverbEnabled, 0x004E87D0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetReverbEnabled, 0x004E87E0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetNumProvider, 0x004E87F0);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetProviderName, 0x004E8800);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetProvider, 0x004E8810);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::SetSpeakerType, 0x004E8820);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetSpeakerType, 0x004E8830);
	ZENGIN_REGISTER_METHOD(zCSoundSystem, &zCSoundSystem::GetCPULoad, 0x004E8840);

	ZENGIN_REGISTER_CLASS(zCSoundSystem::zTSound3DParams);
	ZENGIN_REGISTER_METHOD(zCSoundSystem::zTSound3DParams, &zCSoundSystem::zTSound3DParams::SetDefaults, 0x0060B890);

	ZENGIN_REGISTER_CLASS(zCSoundFX);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::zCSoundFX_OnInit, 0x004EB2D0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::_GetClassDef, 0x004EB2C0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetCacheConfig, 0x005E52E0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetNumChannels, 0x004EB300);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetNumChannelFrames, 0x004EB310);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetChannelFrame, 0x004EB320);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetChannelFrame, 0x004EB330);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetPlayingTimeMSEC, 0x004EB340);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetPan, 0x004EB350);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetPan, 0x004EB360);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetVolume, 0x004EB370);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetVolume, 0x004EB380);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetFrequency, 0x004EB390);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetFrequency, 0x004EB3A0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetLooping, 0x004EB3B0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::IsLooping, 0x004EB3C0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::SetIsFixed, 0x004EB3D0);
	ZENGIN_REGISTER_METHOD(zCSoundFX, &zCSoundFX::GetIsFixed, 0x004EB3E0);

	ZENGIN_REGISTER_CLASS(zCSoundSystemDummy);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::LoadSoundFX, 0x0062B2F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundSystemDummy, &zCSoundSystemDummy::PlaySound, int(zCSoundSystemDummy::*)(zCSoundFX*, int), 0x0062B390);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundSystemDummy, &zCSoundSystemDummy::PlaySound, int(zCSoundSystemDummy::*)(zCSoundFX*, int, int, float, float), 0x0062B3A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundSystemDummy, &zCSoundSystemDummy::PlaySound3D, int(zCSoundSystemDummy::*)(zCSoundFX*, zCVob*, int, zCSoundSystem::zTSound3DParams*), 0x0062B3C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSoundSystemDummy, &zCSoundSystemDummy::PlaySound3D, int(zCSoundSystemDummy::*)(zSTRING const&, zCVob*, int, zCSoundSystem::zTSound3DParams*), 0x0062B3D0);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::GetSound3DProps, 0x0062B3E0);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::UpdateSound3D, 0x0062B3F0);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::DoSoundUpdate, 0x0062B2E0);
	ZENGIN_REGISTER_METHOD(zCSoundSystemDummy, &zCSoundSystemDummy::SetGlobalOcclusion, 0x0062B3B0);

} // namespace Gothic_II_Classic
