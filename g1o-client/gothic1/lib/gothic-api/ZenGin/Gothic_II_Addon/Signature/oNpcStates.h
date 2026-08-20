namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(TNpcAIState);
	ZENGIN_REGISTER_METHOD(TNpcAIState, &TNpcAIState::TNpcAIState_OnInit, 0x0076BAD0);

	ZENGIN_REGISTER_CLASS(oCNpc_States);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::oCNpc_States_OnInit, 0x0076BB60);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::ClearParserReferences, 0x0076BF90);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetOwner, 0x0076C010);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetState, 0x0076C020);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsInState, 0x0076C040);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsScriptStateActive, 0x0076C080);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetStateTime, 0x0076C0A0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetStateTime, 0x0076C0D0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetRoutine, 0x0076C0F0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::StartRtnState, 0x0076C2E0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::ActivateRtnState, 0x0076C330);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::StartAIState, int(oCNpc_States::*)(zSTRING const&, int, int, float, int), 0x0076C700);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::StartAIState, int(oCNpc_States::*)(int, int, int, float, int), 0x0076C840);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::CanPlayerUseAIState, int(oCNpc_States::*)(TNpcAIState const&), 0x0076CFC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::CanPlayerUseAIState, int(oCNpc_States::*)(), 0x0076D010);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::DoAIState, 0x0076D1A0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::ClearAIState, 0x0076D6E0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::EndCurrentState, 0x0076D880);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsInRoutine, 0x0076D8A0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsInCutscene, 0x0076D8D0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::StartOutputUnit, 0x0076D8F0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::StartCutscene, 0x0076D910);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::CloseCutscenes, 0x0076D9E0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetParserInstanceNpc, 0x0076DAF0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetParserInstanceItem, 0x0076DBB0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::InitRoutine, 0x0076DC10);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::ChangeRoutine, void(oCNpc_States::*)(zSTRING const&), 0x0076DD50);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::ChangeRoutine, void(oCNpc_States::*)(int), 0x0076DF60);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetRoutineName, 0x0076E180);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::BeginInsertOverlayRoutine, 0x0076E250);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::StopInsertOverlayRoutine, 0x0076E2C0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::RemoveOverlayEntry, 0x0076E3F0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::RemoveOverlay, 0x0076E460);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::InsertRoutine, 0x0076E4A0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::InsertRoutineCS, 0x0076E600);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetLastRoutineState, 0x0076E890);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetLastState, 0x0076E8B0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsAIStateDriven, 0x0076E8C0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::InitAIStateDriven, 0x0076E8E0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetAIStatePosition, 0x0076EA90);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetStateInfo, 0x0076EAA0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetLastError, 0x0076EE30);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::Archive, 0x0076EE70);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::Unarchive, 0x0076EFF0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::PackState, 0x0076F530);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::UnpackState, 0x0076F570);

} // namespace Gothic_II_Addon
