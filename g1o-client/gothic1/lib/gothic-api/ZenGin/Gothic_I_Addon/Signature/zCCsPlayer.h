namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCCSPlayer);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::zCCSPlayer_OnInit, 0x0041E430);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Interrupt, 0x0041F8D0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Resume, 0x0041F930);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::IsAssigned, 0x00421DB0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::PrintListOfCutscenes, 0x00421E20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPlayer, &zCCSPlayer::GetStartedCutscene, zCCSCutsceneContext*(zCCSPlayer::*)(zCVob*), 0x004221D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPlayer, &zCCSPlayer::GetStartedCutscene, zCCSCutsceneContext*(zCCSPlayer::*)(zSTRING const&), 0x00422240);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::GetPlayingGlobalCutscene, 0x004223E0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::UpdateCutscenesNow, 0x00422480);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::DebugResetInfoscreen, 0x004224D0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::DebugAddCutscene, 0x00422500);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ToggleDebugInfo, 0x004228C0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::_GetClassDef, 0x0041E420);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Archive, 0x00420480);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Unarchive, 0x00420790);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CreateNewOutputUnit, 0x0041EF20);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::StartOutputUnit, 0x0041F250);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPlayer, &zCCSPlayer::StartCutscene, zCCSCutsceneContext*(zCCSPlayer::*)(zSTRING&, zCVob*), 0x0041EC00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPlayer, &zCCSPlayer::StartCutscene, zCCSCutsceneContext*(zCCSPlayer::*)(zCCutscene*, zCVob*, zSTRING), 0x0041E6E0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ForgetCutscene, 0x0041F7C0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ResetCutscenePlayer, 0x00421670);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::StopAllCutscenes, 0x00421690);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::StopAllOutputUnits, 0x00421A10);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::InsertCutscene, 0x0041F9C0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::RemoveCutscene, 0x0041FCE0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::OnCSTrigger, 0x00420010);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::OnCSUntrigger, 0x004202E0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::SetOwnerWorld, 0x0041E6C0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::SetOwnerManager, 0x0041E6D0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::Process, 0x00422530);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ProcessCutscene, 0x004227C0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::ProcessList, 0x00422600);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_BeginSyncBlock, 0x00420BA0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_BeginAtomBlock, 0x00420CA0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_EndAtomBlock, 0x00420F10);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_Error, 0x00421110);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_Warning, 0x004213A0);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_StartPlaying, 0x00421630);
	ZENGIN_REGISTER_METHOD(zCCSPlayer, &zCCSPlayer::CSDB_Stop, 0x00421650);

} // namespace Gothic_I_Addon
