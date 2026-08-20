namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCCSPlayer);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::zCCSPlayer_OnInit, 0x0041CB00);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Interrupt, 0x0041DEB0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Resume, 0x0041DF10);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::IsAssigned, 0x00420180);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::PrintListOfCutscenes, 0x004201E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPlayer, &zCCSPlayer::GetStartedCutscene, zCCSCutsceneContext*(zCCSPlayer::*)(zCVob*), 0x004205A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPlayer, &zCCSPlayer::GetStartedCutscene, zCCSCutsceneContext*(zCCSPlayer::*)(zSTRING const&), 0x00420610);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::GetPlayingGlobalCutscene, 0x00420770);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::UpdateCutscenesNow, 0x00420810);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::DebugResetInfoscreen, 0x00420860);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::DebugAddCutscene, 0x00420890);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ToggleDebugInfo, 0x00420C60);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::_GetClassDef, 0x0041CAF0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Archive, 0x0041EA10);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Unarchive, 0x0041ED10);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CreateNewOutputUnit, 0x0041D540);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::StartOutputUnit, 0x0041D850);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPlayer, &zCCSPlayer::StartCutscene, zCCSCutsceneContext*(zCCSPlayer::*)(zSTRING&, zCVob*), 0x0041D240);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPlayer, &zCCSPlayer::StartCutscene, zCCSCutsceneContext*(zCCSPlayer::*)(zCCutscene*, zCVob*, zSTRING), 0x0041CDA0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ForgetCutscene, 0x0041DDB0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ResetCutscenePlayer, 0x0041FAE0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::StopAllCutscenes, 0x0041FB00);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::StopAllOutputUnits, 0x0041FE30);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::InsertCutscene, 0x0041DFB0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::RemoveCutscene, 0x0041E2C0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::OnCSTrigger, 0x0041E5E0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::OnCSUntrigger, 0x0041E880);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::SetOwnerWorld, 0x0041CD80);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::SetOwnerManager, 0x0041CD90);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Process, 0x004208C0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ProcessCutscene, 0x00420B60);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ProcessList, 0x00420980);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_BeginSyncBlock, 0x0041F110);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_BeginAtomBlock, 0x0041F210);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_EndAtomBlock, 0x0041F450);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_Error, 0x0041F660);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_Warning, 0x0041F890);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_StartPlaying, 0x0041FAC0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_Stop, 0x0041FAD0);

} // namespace Gothic_II_Addon
