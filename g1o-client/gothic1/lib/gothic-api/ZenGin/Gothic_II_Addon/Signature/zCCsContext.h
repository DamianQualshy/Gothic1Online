namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCCSCutsceneContext);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::zCCSCutsceneContext_OnInit, void(zCCSCutsceneContext::*)(), 0x00404FE0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::zCCSCutsceneContext_OnInit, void(zCCSCutsceneContext::*)(zSTRING&), 0x00405070);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::zCCSCutsceneContext_OnInit, void(zCCSCutsceneContext::*)(zCCSBlock*, int, int), 0x00405790);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::UseThisSubBlock, 0x00405A80);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::GetCSName, 0x00406230);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::HandleTrigger, 0x00408F00);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::HandleUntrigger, 0x004091A0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::GetLastTimePoint, 0x004091B0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::GetLastTimeStamp, 0x004091C0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::GetLastPlayResult, 0x004091D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::AreU, int(zCCSCutsceneContext::*)(zSTRING const&), 0x004096A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::AreU, int(zCCSCutsceneContext::*)(int), 0x00409760);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::IsForcedInterrupted, 0x00409780);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::ReplayCutscene, 0x004097F0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::ForcedResume, 0x00409930);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::_GetClassDef, 0x00404FA0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::Archive, 0x00405E20);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::Unarchive, 0x00406350);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::IsFinished, 0x004097D0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::AddMainRole, 0x00409FC0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::StartPlaying, 0x00406810);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::Stop, 0x00406E60);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::Interrupt, 0x004076C0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::IsCutscene, 0x00404FB0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::PrintDebugInfo, 0x004099C0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::GetStage, 0x004098A0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::CatchPlayer, 0x00409920);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::PrepareBlock, 0x00409860);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::SetPoolItem, 0x00409800);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::SetStage, 0x004098C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::Play, void(zCCSCutsceneContext::*)(zCArray<zCEventManager*> const&), 0x0040D600);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::Play, void(zCCSCutsceneContext::*)(zCArray<zCEventManager*> const&, float, float), 0x0040D6D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::Play, void(zCCSCutsceneContext::*)(zCEventManager*), 0x0040D4F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::Play, void(zCCSCutsceneContext::*)(zCEventManager*, float, float), 0x0040D540);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::Play, int(zCCSCutsceneContext::*)(zVEC3), 0x00407C20);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::ForcedInterrupt, 0x00407970);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::CheckRoleReactions, 0x00409950);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::IsPlaying, 0x004097A0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::IsOutputUnit, 0x00404FC0);

} // namespace Gothic_II_Addon
