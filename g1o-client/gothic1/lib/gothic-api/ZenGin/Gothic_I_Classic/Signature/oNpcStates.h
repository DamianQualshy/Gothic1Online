namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(TNpcAIState);
	ZENGIN_REGISTER_METHOD(TNpcAIState, &TNpcAIState::TNpcAIState_OnInit, 0x006C4720);

	ZENGIN_REGISTER_CLASS(oCNpc_States);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::oCNpc_States_OnInit, 0x006C47B0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::ClearParserReferences, 0x006C4BE0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetOwner, 0x006C4C60);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetState, 0x006C4C70);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsInState, 0x006C4C90);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsScriptStateActive, 0x006C4CD0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetStateTime, 0x006C4CF0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetStateTime, 0x006C4D20);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetRoutine, 0x006C4D40);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::StartRtnState, 0x006C4F30);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::ActivateRtnState, 0x006C4F80);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::StartAIState, int(oCNpc_States::*)(zSTRING const&, int, int, float, int), 0x006C5350);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::StartAIState, int(oCNpc_States::*)(int, int, int, float, int), 0x006C5490);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::CanPlayerUseAIState, 0x006C5AD0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::DoAIState, 0x006C5C60);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::ClearAIState, 0x006C61A0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::EndCurrentState, 0x006C6340);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsInRoutine, 0x006C6360);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsInCutscene, 0x006C6390);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::StartOutputUnit, 0x006C63B0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::StartCutscene, 0x006C63D0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::CloseCutscenes, 0x006C64A0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetParserInstanceNpc, 0x006C65B0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::SetParserInstanceItem, 0x006C6670);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::InitRoutine, 0x006C66D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::ChangeRoutine, void(oCNpc_States::*)(zSTRING const&), 0x006C6810);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpc_States, &oCNpc_States::ChangeRoutine, void(oCNpc_States::*)(int), 0x006C69F0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetRoutineName, 0x006C6C10);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::BeginInsertOverlayRoutine, 0x006C6CE0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::StopInsertOverlayRoutine, 0x006C6D20);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::RemoveOverlayEntry, 0x006C6E60);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::RemoveOverlay, 0x006C6ED0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::InsertRoutine, 0x006C6F10);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::InsertRoutineCS, 0x006C7060);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetLastRoutineState, 0x006C7300);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetLastState, 0x006C7320);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::IsAIStateDriven, 0x006C7330);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::InitAIStateDriven, 0x006C7350);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetAIStatePosition, 0x006C7500);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetStateInfo, 0x006C7510);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::GetLastError, 0x006C77D0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::Archive, 0x006C7810);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::Unarchive, 0x006C7990);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::PackState, 0x006C7EC0);
	ZENGIN_REGISTER_METHOD(oCNpc_States, &oCNpc_States::UnpackState, 0x006C7F00);

} // namespace Gothic_I_Classic
