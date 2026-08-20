namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(TNpcAIState);
	ZENGIN_REGISTER_METHOD(TNpcAIState, &TNpcAIState::TNpcAIState_OnInit, 0x0070C570);

	ZENGIN_REGISTER_CLASS(oCNpc_States);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::oCNpc_States_OnInit, 0x0070C600);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::ClearParserReferences, 0x0070CA30);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetOwner, 0x0070CAB0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetState, 0x0070CAC0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsInState, 0x0070CAE0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsScriptStateActive, 0x0070CB20);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetStateTime, 0x0070CB40);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetStateTime, 0x0070CB70);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetRoutine, 0x0070CB90);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::StartRtnState, 0x0070CD80);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::ActivateRtnState, 0x0070CDD0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::StartAIState, int(oCNpc_States::*)(zSTRING const&, int, int, float, int), 0x0070D1A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::StartAIState, int(oCNpc_States::*)(int, int, int, float, int), 0x0070D2E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::CanPlayerUseAIState, int(oCNpc_States::*)(TNpcAIState const&), 0x0070DA60);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::CanPlayerUseAIState, int(oCNpc_States::*)(), 0x0070DAB0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::DoAIState, 0x0070DC40);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::ClearAIState, 0x0070E180);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::EndCurrentState, 0x0070E320);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsInRoutine, 0x0070E340);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsInCutscene, 0x0070E370);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::StartOutputUnit, 0x0070E390);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::StartCutscene, 0x0070E3B0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::CloseCutscenes, 0x0070E480);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetParserInstanceNpc, 0x0070E590);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetParserInstanceItem, 0x0070E650);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::InitRoutine, 0x0070E6B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::ChangeRoutine, void(oCNpc_States::*)(zSTRING const&), 0x0070E7F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::ChangeRoutine, void(oCNpc_States::*)(int), 0x0070EA00);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetRoutineName, 0x0070EC20);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::BeginInsertOverlayRoutine, 0x0070ECF0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::StopInsertOverlayRoutine, 0x0070ED60);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::RemoveOverlayEntry, 0x0070EE90);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::RemoveOverlay, 0x0070EF00);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::InsertRoutine, 0x0070EF40);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::InsertRoutineCS, 0x0070F0A0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetLastRoutineState, 0x0070F330);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetLastState, 0x0070F350);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsAIStateDriven, 0x0070F360);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::InitAIStateDriven, 0x0070F380);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetAIStatePosition, 0x0070F530);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetStateInfo, 0x0070F540);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetLastError, 0x0070F8D0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::Archive, 0x0070F910);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::Unarchive, 0x0070FA90);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::PackState, 0x0070FFC0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::UnpackState, 0x00710000);

} // namespace Gothic_II_Classic
