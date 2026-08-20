namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(TNpcAIState);
	ZENGIN_REGISTER_METHOD(TNpcAIState, &TNpcAIState::TNpcAIState_OnInit, 0x006F9E20);

	ZENGIN_REGISTER_CLASS(oCNpc_States);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::oCNpc_States_OnInit, 0x006F9EB0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::ClearParserReferences, 0x006FA310);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetOwner, 0x006FA390);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetState, 0x006FA3A0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsInState, 0x006FA3C0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsScriptStateActive, 0x006FA400);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetStateTime, 0x006FA420);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetStateTime, 0x006FA450);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetRoutine, 0x006FA470);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::StartRtnState, 0x006FA690);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::ActivateRtnState, 0x006FA6E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::StartAIState, int(oCNpc_States::*)(zSTRING const&, int, int, float, int), 0x006FAAD0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::StartAIState, int(oCNpc_States::*)(int, int, int, float, int), 0x006FAC30);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::CanPlayerUseAIState, 0x006FB400);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::DoAIState, 0x006FB5B0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::ClearAIState, 0x006FBB00);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::EndCurrentState, 0x006FBCA0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsInRoutine, 0x006FBCC0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsInCutscene, 0x006FBCF0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::StartOutputUnit, 0x006FBD10);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::StartCutscene, 0x006FBD30);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::CloseCutscenes, 0x006FBE10);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetParserInstanceNpc, 0x006FBF30);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetParserInstanceItem, 0x006FC000);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::InitRoutine, 0x006FC070);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::ChangeRoutine, void(oCNpc_States::*)(zSTRING const&), 0x006FC1C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::ChangeRoutine, void(oCNpc_States::*)(int), 0x006FC3D0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetRoutineName, 0x006FC620);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::BeginInsertOverlayRoutine, 0x006FC6F0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::StopInsertOverlayRoutine, 0x006FC760);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::RemoveOverlayEntry, 0x006FC8B0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::RemoveOverlay, 0x006FC960);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::InsertRoutine, 0x006FC9A0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::InsertRoutineCS, 0x006FCAF0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetLastRoutineState, 0x006FCD90);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetLastState, 0x006FCDB0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsAIStateDriven, 0x006FCDC0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::InitAIStateDriven, 0x006FCDE0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetAIStatePosition, 0x006FCF90);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetStateInfo, 0x006FCFA0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetLastError, 0x006FD2F0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::Archive, 0x006FD340);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::Unarchive, 0x006FD4C0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::PackState, 0x006FDA70);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::UnpackState, 0x006FDAB0);

} // namespace Gothic_I_Addon
