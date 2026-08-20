namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCCSPlayer);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::zCCSPlayer_OnInit, 0x0041C7D0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Interrupt, 0x0041DB80);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Resume, 0x0041DBE0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::IsAssigned, 0x0041FE50);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::PrintListOfCutscenes, 0x0041FEB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPlayer, &zCCSPlayer::GetStartedCutscene, zCCSCutsceneContext*(zCCSPlayer::*)(zCVob*), 0x00420270);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPlayer, &zCCSPlayer::GetStartedCutscene, zCCSCutsceneContext*(zCCSPlayer::*)(zSTRING const&), 0x004202E0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::GetPlayingGlobalCutscene, 0x00420440);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::UpdateCutscenesNow, 0x004204E0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::DebugResetInfoscreen, 0x00420530);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::DebugAddCutscene, 0x00420560);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ToggleDebugInfo, 0x00420930);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::_GetClassDef, 0x0041C7C0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Archive, 0x0041E6E0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Unarchive, 0x0041E9E0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CreateNewOutputUnit, 0x0041D210);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::StartOutputUnit, 0x0041D520);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPlayer, &zCCSPlayer::StartCutscene, zCCSCutsceneContext*(zCCSPlayer::*)(zSTRING&, zCVob*), 0x0041CF10);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPlayer, &zCCSPlayer::StartCutscene, zCCSCutsceneContext*(zCCSPlayer::*)(zCCutscene*, zCVob*, zSTRING), 0x0041CA70);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ForgetCutscene, 0x0041DA80);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ResetCutscenePlayer, 0x0041F7B0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::StopAllCutscenes, 0x0041F7D0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::StopAllOutputUnits, 0x0041FB00);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::InsertCutscene, 0x0041DC80);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::RemoveCutscene, 0x0041DF90);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::OnCSTrigger, 0x0041E2B0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::OnCSUntrigger, 0x0041E550);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::SetOwnerWorld, 0x0041CA50);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::SetOwnerManager, 0x0041CA60);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Process, 0x00420590);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ProcessCutscene, 0x00420830);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ProcessList, 0x00420650);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_BeginSyncBlock, 0x0041EDE0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_BeginAtomBlock, 0x0041EEE0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_EndAtomBlock, 0x0041F120);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_Error, 0x0041F330);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_Warning, 0x0041F560);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_StartPlaying, 0x0041F790);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_Stop, 0x0041F7A0);

} // namespace Gothic_II_Classic
