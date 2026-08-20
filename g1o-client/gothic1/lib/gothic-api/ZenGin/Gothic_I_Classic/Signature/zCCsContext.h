namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCCSCutsceneContext);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::zCCSCutsceneContext_OnInit, void(zCCSCutsceneContext::*)(), 0x00404EB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::zCCSCutsceneContext_OnInit, void(zCCSCutsceneContext::*)(zSTRING&), 0x00404F40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::zCCSCutsceneContext_OnInit, void(zCCSCutsceneContext::*)(zCCSBlock*, int, int), 0x00405630);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::UseThisSubBlock, 0x004058C0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::GetCSName, 0x00405FC0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::HandleTrigger, 0x00408C60);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::HandleUntrigger, 0x00408F00);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::GetLastTimePoint, 0x00408F10);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::GetLastTimeStamp, 0x00408F20);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::GetLastPlayResult, 0x00408F30);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::AreU, int(zCCSCutsceneContext::*)(zSTRING const&), 0x00409400);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::AreU, int(zCCSCutsceneContext::*)(int), 0x004094C0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::IsForcedInterrupted, 0x004094E0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::ReplayCutscene, 0x00409550);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::ForcedResume, 0x00409690);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::_GetClassDef, 0x00404E70);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::Archive, 0x00405BB0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::Unarchive, 0x004060E0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::IsFinished, 0x00409530);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::AddMainRole, 0x00409C60);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::StartPlaying, 0x004065A0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::Stop, 0x00406BF0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::Interrupt, 0x00407450);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::IsCutscene, 0x00404E80);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::PrintDebugInfo, 0x00409720);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::GetStage, 0x00409600);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::CatchPlayer, 0x00409680);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::PrepareBlock, 0x004095C0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::SetPoolItem, 0x00409560);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::SetStage, 0x00409620);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::Play, void(zCCSCutsceneContext::*)(zCArray<zCEventManager*> const&), 0x0040D210);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::Play, void(zCCSCutsceneContext::*)(zCArray<zCEventManager*> const&, float, float), 0x0040D2E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::Play, void(zCCSCutsceneContext::*)(zCEventManager*), 0x0040D100);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::Play, void(zCCSCutsceneContext::*)(zCEventManager*, float, float), 0x0040D150);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSCutsceneContext, &zCCSCutsceneContext::Play, int(zCCSCutsceneContext::*)(zVEC3), 0x004079B0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::ForcedInterrupt, 0x00407700);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::CheckRoleReactions, 0x004096B0);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::IsPlaying, 0x00409500);
	ZENGIN_REGISTER_METHOD(zCCSCutsceneContext, &zCCSCutsceneContext::IsOutputUnit, 0x00404E90);

} // namespace Gothic_I_Classic
