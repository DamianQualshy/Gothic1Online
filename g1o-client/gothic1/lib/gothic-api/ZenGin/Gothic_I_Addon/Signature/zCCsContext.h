namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCCSCutsceneContext);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::zCCSCutsceneContext_OnInit, void(zCCSCutsceneContext::*)(), 0x00405700);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::zCCSCutsceneContext_OnInit, void(zCCSCutsceneContext::*)(zSTRING&), 0x00405790);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::zCCSCutsceneContext_OnInit, void(zCCSCutsceneContext::*)(zCCSBlock*, int, int), 0x00406110);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::UseThisSubBlock, 0x004063D0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::GetCSName, 0x00406B20);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::HandleTrigger, 0x00409BB0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::HandleUntrigger, 0x00409EA0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::GetLastTimePoint, 0x00409EB0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::GetLastTimeStamp, 0x00409EC0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::GetLastPlayResult, 0x00409ED0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::AreU, int(zCCSCutsceneContext::*)(zSTRING const&), 0x0040A3A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::AreU, int(zCCSCutsceneContext::*)(int), 0x0040A490);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::IsForcedInterrupted, 0x0040A4B0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::ReplayCutscene, 0x0040A520);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::ForcedResume, 0x0040A660);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::_GetClassDef, 0x004056C0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::Archive, 0x004066D0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::Unarchive, 0x00406C80);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::IsFinished, 0x0040A500);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::AddMainRole, 0x0040ACD0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::StartPlaying, 0x004071A0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::Stop, 0x00407880);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::Interrupt, 0x004081A0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::IsCutscene, 0x004056D0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::PrintDebugInfo, 0x0040A6F0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::GetStage, 0x0040A5D0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::CatchPlayer, 0x0040A650);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::PrepareBlock, 0x0040A590);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::SetPoolItem, 0x0040A530);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::SetStage, 0x0040A5F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::Play, void(zCCSCutsceneContext::*)(zCArray<zCEventManager*> const&), 0x0040E4B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::Play, void(zCCSCutsceneContext::*)(zCArray<zCEventManager*> const&, float, float), 0x0040E580);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::Play, void(zCCSCutsceneContext::*)(zCEventManager*), 0x0040E3D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::Play, void(zCCSCutsceneContext::*)(zCEventManager*, float, float), 0x0040E420);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::Play, int(zCCSCutsceneContext::*)(zVEC3), 0x00408770);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::ForcedInterrupt, 0x00408480);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::CheckRoleReactions, 0x0040A680);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::IsPlaying, 0x0040A4D0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::IsOutputUnit, 0x004056E0);

} // namespace Gothic_I_Addon
