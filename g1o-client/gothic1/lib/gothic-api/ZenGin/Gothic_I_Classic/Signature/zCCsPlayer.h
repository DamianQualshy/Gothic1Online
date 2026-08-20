namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCCSPlayer);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::zCCSPlayer_OnInit, 0x0041C5B0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Interrupt, 0x0041D8A0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Resume, 0x0041D900);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::IsAssigned, 0x0041FA50);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::PrintListOfCutscenes, 0x0041FAB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPlayer, &zCCSPlayer::GetStartedCutscene, zCCSCutsceneContext*(zCCSPlayer::*)(zCVob*), 0x0041FE50);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPlayer, &zCCSPlayer::GetStartedCutscene, zCCSCutsceneContext*(zCCSPlayer::*)(zSTRING const&), 0x0041FEC0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::GetPlayingGlobalCutscene, 0x00420020);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::UpdateCutscenesNow, 0x004200C0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::DebugResetInfoscreen, 0x00420110);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::DebugAddCutscene, 0x00420140);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ToggleDebugInfo, 0x00420510);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::_GetClassDef, 0x0041C5A0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Archive, 0x0041E380);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Unarchive, 0x0041E650);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CreateNewOutputUnit, 0x0041D000);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::StartOutputUnit, 0x0041D2E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPlayer, &zCCSPlayer::StartCutscene, zCCSCutsceneContext*(zCCSPlayer::*)(zSTRING&, zCVob*), 0x0041CD00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPlayer, &zCCSPlayer::StartCutscene, zCCSCutsceneContext*(zCCSPlayer::*)(zCCutscene*, zCVob*, zSTRING), 0x0041C850);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ForgetCutscene, 0x0041D7A0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ResetCutscenePlayer, 0x0041F3B0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::StopAllCutscenes, 0x0041F3D0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::StopAllOutputUnits, 0x0041F700);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::InsertCutscene, 0x0041D9A0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::RemoveCutscene, 0x0041DC70);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::OnCSTrigger, 0x0041DF50);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::OnCSUntrigger, 0x0041E1F0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::SetOwnerWorld, 0x0041C830);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::SetOwnerManager, 0x0041C840);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Process, 0x00420170);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ProcessCutscene, 0x00420410);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ProcessList, 0x00420230);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_BeginSyncBlock, 0x0041EA10);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_BeginAtomBlock, 0x0041EB10);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_EndAtomBlock, 0x0041ED30);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_Error, 0x0041EF30);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_Warning, 0x0041F160);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_StartPlaying, 0x0041F390);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_Stop, 0x0041F3A0);

} // namespace Gothic_I_Classic
