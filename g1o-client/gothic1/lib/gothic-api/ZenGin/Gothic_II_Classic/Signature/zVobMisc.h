namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCEventCommon);
	ZENGIN_REGISTER_METHOD(zCEventCommon, &zCEventCommon::_GetClassDef, 0x00607A00);
	ZENGIN_REGISTER_METHOD(zCEventCommon, &zCEventCommon::IsNetRelevant, 0x00607A20);
	ZENGIN_REGISTER_METHOD(zCEventCommon, &zCEventCommon::MD_GetNumOfSubTypes, 0x00607A10);
	ZENGIN_REGISTER_METHOD(zCEventCommon, &zCEventCommon::MD_GetSubTypeString, 0x00608120);

	ZENGIN_REGISTER_CLASS(zCTriggerBase);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::zCTriggerBase_OnInit, 0x00608430);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::_GetClassDef, 0x00604210);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::Archive, 0x00608780);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::Unarchive, 0x006087B0);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::OnTrigger, 0x00608640);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::OnUntrigger, 0x006086E0);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::OnTouch, 0x00608500);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::OnUntouch, 0x006085A0);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::GetTriggerTarget, 0x004042F0);

	ZENGIN_REGISTER_CLASS(zCTrigger);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::zCTrigger_OnInit, 0x006087E0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::GetTriggerTarget, 0x004049A0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::ClearStateInternals, 0x00608A10);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::TriggerTargetPost, 0x00608DE0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::ActivateTrigger, 0x00608E10);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::DeactivateTrigger, 0x00608EF0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::_GetClassDef, 0x006089D0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::Archive, 0x00609120);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::Unarchive, 0x006093A0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnTrigger, 0x00608F20);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnUntrigger, 0x00608F40);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnTouch, 0x00608F80);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnUntouch, 0x00608FA0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnDamage, 0x00608FE0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnMessage, 0x00609020);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnTimer, 0x00609090);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::TriggerTarget, 0x00608C80);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::UntriggerTarget, 0x00608D30);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::CanBeActivatedNow, 0x00608B60);

	ZENGIN_REGISTER_CLASS(zCEventMover);
	ZENGIN_REGISTER_METHOD(zCEventMover, &zCEventMover::_GetClassDef, 0x00607DA0);
	ZENGIN_REGISTER_METHOD(zCEventMover, &zCEventMover::IsNetRelevant, 0x00607DC0);
	ZENGIN_REGISTER_METHOD(zCEventMover, &zCEventMover::MD_GetNumOfSubTypes, 0x00607DB0);
	ZENGIN_REGISTER_METHOD(zCEventMover, &zCEventMover::MD_GetSubTypeString, 0x00608280);

	ZENGIN_REGISTER_CLASS(zCMover);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::zCMover_OnInit, 0x00609660);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::ClearStateInternals, 0x00609880);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::UpdateInternals, 0x00609BB0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::AdvanceKeyframe_KF, 0x00609D10);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::SetToKeyframe_KF, 0x00609D40);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::InterpolateKeyframes_KF, 0x0060A240);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::AdvanceMover, 0x0060A6D0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::SetToKeyframe, 0x0060A9D0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::InvertMovement, 0x0060AC40);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::StartMovingSound, 0x0060AEA0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::MoveToKeyframe, 0x0060AF10);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::DoOpen, 0x0060AF80);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::FinishedOpening, 0x0060B030);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::DoClose, 0x0060B0B0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::FinishedClosing, 0x0060B170);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::Unlock, 0x0060B1C0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::Lock, 0x0060B390);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::IsKeyToThisMover, 0x0060B560);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::TriggerMover, 0x0060B5F0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::_GetClassDef, 0x00609840);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::Archive, 0x0060C120);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::Unarchive, 0x0060C3E0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnTrigger, 0x0060B9C0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnUntrigger, 0x0060BAB0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnTouch, 0x0060BC80);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnDamage, 0x0060BD40);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnMessage, 0x0060BD90);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnTick, 0x0060B8C0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::PostLoad, 0x0060C110);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::CanThisCollideWith, 0x00609B30);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::SetVisual, 0x0060ACE0);

	ZENGIN_REGISTER_CLASS(zCTriggerTeleport);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::zCTriggerTeleport_OnInit, 0x0060CA60);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::DoTeleport, 0x0060CD80);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::_GetClassDef, 0x00605DB0);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::Archive, 0x0060D000);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::Unarchive, 0x0060D030);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::OnTrigger, 0x0060CFE0);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::OnUntrigger, 0x0060CFF0);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::OnTouch, 0x0060CFD0);

	ZENGIN_REGISTER_CLASS(zCTriggerList);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::zCTriggerList_OnInit, 0x0060D490);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::Init, 0x0060D740);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::TriggerActTarget, 0x0060D870);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::ProcessActTarget, 0x0060D940);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::FinishActivation, 0x0060D9D0);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::DoTriggering, 0x0060DAD0);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::_GetClassDef, 0x006057C0);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::Archive, 0x0060DDD0);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::Unarchive, 0x0060E0B0);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::OnTimer, 0x0060DA40);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::GetTriggerTarget, 0x0060D850);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::TriggerTarget, 0x0060DDA0);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::UntriggerTarget, 0x0060DDB0);

	ZENGIN_REGISTER_CLASS(zCEffect);
	ZENGIN_REGISTER_METHOD(zCEffect, &zCEffect::_GetClassDef, 0x00488780);

	ZENGIN_REGISTER_CLASS(zCEarthquake);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::zCEarthquake_OnInit, 0x0060C7E0);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::_GetClassDef, 0x00606260);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::Archive, 0x0060C970);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::Unarchive, 0x0060C9F0);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::OnTrigger, 0x0060C8D0);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::OnUntrigger, 0x0060C920);

	ZENGIN_REGISTER_CLASS(zCPFXControler);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::zCPFXControler_OnInit, 0x0060D0A0);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::GetPFX, 0x0060D180);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::_GetClassDef, 0x00606530);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::Archive, 0x0060D2D0);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::Unarchive, 0x0060D330);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::OnTrigger, 0x0060D210);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::OnUntrigger, 0x0060D2A0);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::PostLoad, 0x0060D1F0);

	ZENGIN_REGISTER_CLASS(zCTouchDamage);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::zCTouchDamage_OnInit, 0x0060E3C0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::ProcessToucher, 0x0060E6B0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::TestCollType, 0x0060E750);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::FireDamageMessage, 0x0060E9B0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::SetVobProperties, 0x0060EC40);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::_GetClassDef, 0x00606830);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::Archive, 0x0060EA40);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::Unarchive, 0x0060EB10);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::OnTouch, 0x0060E4B0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::OnUntouch, 0x0060E590);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::OnTimer, 0x0060E5B0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::SetVisual, 0x0060EBF0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::GetDamageTypeArcEnum, 0x0060EBD0);

	ZENGIN_REGISTER_CLASS(zCVobStair);
	ZENGIN_REGISTER_METHOD(zCVobStair, &zCVobStair::_GetClassDef, 0x00603D10);

	ZENGIN_REGISTER_CLASS(zCTouchAnimate);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::zCTouchAnimate_OnInit, 0x0060EC80);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::IsTouching, 0x0060F130);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::StartAni, 0x0060F200);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::StopAni, 0x0060F470);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::IsAniActive, 0x0060F4B0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::SetVobProperties, 0x0060F5C0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::_GetClassDef, 0x00606B30);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::Archive, 0x0060F4F0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::Unarchive, 0x0060F500);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::OnTouch, 0x0060EE20);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::OnUntouch, 0x0060EF40);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::OnTick, 0x0060EF60);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::SetVisual, 0x0060F570);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::GetSoundName, 0x0060F360);

	ZENGIN_REGISTER_CLASS(zCTouchAnimateSound);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::zCTouchAnimateSound_OnInit, 0x0060F600);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::_GetClassDef, 0x00606EE0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::Archive, 0x0060F8A0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::Unarchive, 0x0060F8D0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::GetSoundName, 0x0060F960);

	ZENGIN_REGISTER_CLASS(zCVobAnimate);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::zCVobAnimate_OnInit, 0x0060F9B0);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::StartAni, 0x0060FAE0);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::StopAni, 0x0060FB20);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::_GetClassDef, 0x006071A0);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::Archive, 0x0060FB90);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::Unarchive, 0x0060FBE0);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::OnTrigger, 0x0060FB30);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::OnUntrigger, 0x0060FB80);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::SetVisual, 0x0060FA70);

	ZENGIN_REGISTER_CLASS(zCVobLensFlare);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::zCVobLensFlare_OnInit, 0x0060FC90);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::SetLensFlareFXByName, 0x0060FD70);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::_GetClassDef, 0x00607470);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::Archive, 0x0060FDC0);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::Unarchive, 0x0060FEB0);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::Render, 0x0060FD50);

	ZENGIN_REGISTER_CLASS(zCEventScreenFX);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::zCEventScreenFX_OnInit, 0x0060FF90);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Clear, 0x00610030);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::_GetClassDef, 0x006080C0);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Archive, 0x00610300);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Unarchive, 0x00610350);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::MD_GetNumOfSubTypes, 0x006080D0);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::MD_GetSubTypeString, 0x00610060);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::MD_GetTimeBehavior, 0x00610250);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::MD_GetMinTime, 0x00610270);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Pack, 0x00610280);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Unpack, 0x006102C0);

	ZENGIN_REGISTER_CLASS(zCVobScreenFX);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::zCVobScreenFX_OnInit, 0x006103A0);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::StartEffect, 0x00610890);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::CalcEffectColor, 0x00610920);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::_GetClassDef, 0x00610530);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::Archive, 0x00610CF0);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::Unarchive, 0x00610D80);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::OnMessage, 0x006106A0);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::OnTick, 0x006109B0);

	ZENGIN_REGISTER_CLASS(zCMessageFilter);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::zCMessageFilter_OnInit, 0x00610E20);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::ProcessMessage, 0x00610F60);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::_GetClassDef, 0x00604600);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::Archive, 0x006112B0);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::Unarchive, 0x00611310);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::OnTrigger, 0x00611270);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::OnUntrigger, 0x00611290);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::OnTouch, 0x00604610);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::OnUntouch, 0x00604620);

	ZENGIN_REGISTER_CLASS(zCTriggerUntouch);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::_GetClassDef, 0x00604240);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::OnTrigger, 0x00604260);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::OnUntrigger, 0x00604270);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::OnTouch, 0x00604250);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::OnUntouch, 0x00611390);

	ZENGIN_REGISTER_CLASS(zCTriggerWorldStart);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::zCTriggerWorldStart_OnInit, 0x00612CE0);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::_GetClassDef, 0x006050F0);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::Archive, 0x00612E70);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::Unarchive, 0x00612ED0);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::OnTrigger, 0x00612E50);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::OnUntrigger, 0x00605120);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::OnTouch, 0x00605100);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::OnUntouch, 0x00605110);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::PostLoad, 0x00612E20);

	ZENGIN_REGISTER_CLASS(zCCodeMaster);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::zCCodeMaster_OnInit, 0x006114C0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::Init, 0x00611800);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::Reset, 0x00611980);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::FireTriggerSuccess, 0x006119D0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::FireTriggerFailure, 0x00611AB0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::GetSlaveNr, 0x00611B90);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::_GetClassDef, 0x00604A20);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::Archive, 0x00611FB0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::Unarchive, 0x006123C0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnTrigger, 0x00611C40);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnUntrigger, 0x00611E40);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnTouch, 0x00604A40);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnUntouch, 0x00604A30);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnMessage, 0x00611F40);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::GetTriggerTarget, 0x00612780);

	ZENGIN_REGISTER_CLASS(zCMoverControler);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::zCMoverControler_OnInit, 0x006127B0);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::_GetClassDef, 0x00604DB0);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::Archive, 0x00612A10);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::Unarchive, 0x00612C80);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::OnTrigger, 0x00612900);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::OnUntrigger, 0x00604DC0);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::OnTouch, 0x00604DE0);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::OnUntouch, 0x00604DD0);

} // namespace Gothic_II_Classic
