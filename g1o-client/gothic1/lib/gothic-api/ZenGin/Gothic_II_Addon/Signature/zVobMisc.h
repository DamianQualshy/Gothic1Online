namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCEventCommon);
	ZENGIN_REGISTER_METHOD(zCEventCommon, &zCEventCommon::_GetClassDef, 0x0060F0C0);
	ZENGIN_REGISTER_METHOD(zCEventCommon, &zCEventCommon::IsNetRelevant, 0x0060F0E0);
	ZENGIN_REGISTER_METHOD(zCEventCommon, &zCEventCommon::MD_GetNumOfSubTypes, 0x0060F0D0);
	ZENGIN_REGISTER_METHOD(zCEventCommon, &zCEventCommon::MD_GetSubTypeString, 0x0060F7E0);

	ZENGIN_REGISTER_CLASS(zCTriggerBase);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::zCTriggerBase_OnInit, 0x0060FAF0);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::_GetClassDef, 0x0060B8D0);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::Archive, 0x0060FE40);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::Unarchive, 0x0060FE70);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::OnTrigger, 0x0060FD00);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::OnUntrigger, 0x0060FDA0);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::OnTouch, 0x0060FBC0);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::OnUntouch, 0x0060FC60);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::GetTriggerTarget, 0x004042F0);

	ZENGIN_REGISTER_CLASS(zCTrigger);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::zCTrigger_OnInit, 0x0060FEA0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::GetTriggerTarget, 0x004049A0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::ClearStateInternals, 0x006100D0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::TriggerTargetPost, 0x006104A0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::ActivateTrigger, 0x006104D0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::DeactivateTrigger, 0x006105B0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::_GetClassDef, 0x00610090);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::Archive, 0x006107E0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::Unarchive, 0x00610A60);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnTrigger, 0x006105E0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnUntrigger, 0x00610600);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnTouch, 0x00610640);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnUntouch, 0x00610660);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnDamage, 0x006106A0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnMessage, 0x006106E0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnTimer, 0x00610750);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::TriggerTarget, 0x00610340);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::UntriggerTarget, 0x006103F0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::CanBeActivatedNow, 0x00610220);

	ZENGIN_REGISTER_CLASS(zCEventMover);
	ZENGIN_REGISTER_METHOD(zCEventMover, &zCEventMover::_GetClassDef, 0x0060F460);
	ZENGIN_REGISTER_METHOD(zCEventMover, &zCEventMover::IsNetRelevant, 0x0060F480);
	ZENGIN_REGISTER_METHOD(zCEventMover, &zCEventMover::MD_GetNumOfSubTypes, 0x0060F470);
	ZENGIN_REGISTER_METHOD(zCEventMover, &zCEventMover::MD_GetSubTypeString, 0x0060F940);

	ZENGIN_REGISTER_CLASS(zCMover);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::zCMover_OnInit, 0x00610D20);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::ClearStateInternals, 0x00610F40);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::UpdateInternals, 0x00611270);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::AdvanceKeyframe_KF, 0x006113D0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::SetToKeyframe_KF, 0x00611400);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::InterpolateKeyframes_KF, 0x00611900);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::AdvanceMover, 0x00611D90);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::SetToKeyframe, 0x00612090);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::InvertMovement, 0x00612300);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::StartMovingSound, 0x00612560);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::MoveToKeyframe, 0x006125D0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::DoOpen, 0x00612640);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::FinishedOpening, 0x006126F0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::DoClose, 0x00612770);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::FinishedClosing, 0x00612830);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::Unlock, 0x00612880);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::Lock, 0x00612A50);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::IsKeyToThisMover, 0x00612C20);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::TriggerMover, 0x00612CB0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::_GetClassDef, 0x00610F00);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::Archive, 0x006137E0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::Unarchive, 0x00613AA0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnTrigger, 0x00613080);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnUntrigger, 0x00613170);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnTouch, 0x00613340);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnDamage, 0x00613400);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnMessage, 0x00613450);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnTick, 0x00612F80);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::PostLoad, 0x006137D0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::CanThisCollideWith, 0x006111F0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::SetVisual, 0x006123A0);

	ZENGIN_REGISTER_CLASS(zCTriggerTeleport);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::zCTriggerTeleport_OnInit, 0x00614120);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::DoTeleport, 0x00614440);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::_GetClassDef, 0x0060D470);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::Archive, 0x006146C0);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::Unarchive, 0x006146F0);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::OnTrigger, 0x006146A0);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::OnUntrigger, 0x006146B0);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::OnTouch, 0x00614690);

	ZENGIN_REGISTER_CLASS(zCTriggerList);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::zCTriggerList_OnInit, 0x00614B50);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::Init, 0x00614E00);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::TriggerActTarget, 0x00614F30);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::ProcessActTarget, 0x00615000);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::FinishActivation, 0x00615090);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::DoTriggering, 0x00615190);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::_GetClassDef, 0x0060CE80);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::Archive, 0x00615490);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::Unarchive, 0x00615770);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::OnTimer, 0x00615100);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::GetTriggerTarget, 0x00614F10);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::TriggerTarget, 0x00615460);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::UntriggerTarget, 0x00615470);

	ZENGIN_REGISTER_CLASS(zCEffect);
	ZENGIN_REGISTER_METHOD(zCEffect, &zCEffect::_GetClassDef, 0x00489F40);

	ZENGIN_REGISTER_CLASS(zCEarthquake);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::zCEarthquake_OnInit, 0x00613EA0);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::_GetClassDef, 0x0060D920);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::Archive, 0x00614030);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::Unarchive, 0x006140B0);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::OnTrigger, 0x00613F90);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::OnUntrigger, 0x00613FE0);

	ZENGIN_REGISTER_CLASS(zCPFXControler);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::zCPFXControler_OnInit, 0x00614760);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::GetPFX, 0x00614840);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::_GetClassDef, 0x0060DBF0);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::Archive, 0x00614990);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::Unarchive, 0x006149F0);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::OnTrigger, 0x006148D0);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::OnUntrigger, 0x00614960);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::PostLoad, 0x006148B0);

	ZENGIN_REGISTER_CLASS(zCTouchDamage);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::zCTouchDamage_OnInit, 0x00615A80);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::ProcessToucher, 0x00615D70);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::TestCollType, 0x00615E10);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::FireDamageMessage, 0x00616070);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::SetVobProperties, 0x00616300);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::_GetClassDef, 0x0060DEF0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::Archive, 0x00616100);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::Unarchive, 0x006161D0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::OnTouch, 0x00615B70);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::OnUntouch, 0x00615C50);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::OnTimer, 0x00615C70);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::SetVisual, 0x006162B0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::GetDamageTypeArcEnum, 0x00616290);

	ZENGIN_REGISTER_CLASS(zCVobStair);
	ZENGIN_REGISTER_METHOD(zCVobStair, &zCVobStair::_GetClassDef, 0x0060B3D0);

	ZENGIN_REGISTER_CLASS(zCTouchAnimate);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::zCTouchAnimate_OnInit, 0x00616340);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::IsTouching, 0x006167F0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::StartAni, 0x006168C0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::StopAni, 0x00616B30);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::IsAniActive, 0x00616B70);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::SetVobProperties, 0x00616C80);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::_GetClassDef, 0x0060E1F0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::Archive, 0x00616BB0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::Unarchive, 0x00616BC0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::OnTouch, 0x006164E0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::OnUntouch, 0x00616600);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::OnTick, 0x00616620);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::SetVisual, 0x00616C30);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::GetSoundName, 0x00616A20);

	ZENGIN_REGISTER_CLASS(zCTouchAnimateSound);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::zCTouchAnimateSound_OnInit, 0x00616CC0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::_GetClassDef, 0x0060E5A0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::Archive, 0x00616F60);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::Unarchive, 0x00616F90);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::GetSoundName, 0x00617020);

	ZENGIN_REGISTER_CLASS(zCVobAnimate);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::zCVobAnimate_OnInit, 0x00617070);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::StartAni, 0x006171A0);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::StopAni, 0x006171E0);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::_GetClassDef, 0x0060E860);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::Archive, 0x00617250);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::Unarchive, 0x006172A0);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::OnTrigger, 0x006171F0);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::OnUntrigger, 0x00617240);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::SetVisual, 0x00617130);

	ZENGIN_REGISTER_CLASS(zCVobLensFlare);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::zCVobLensFlare_OnInit, 0x00617350);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::SetLensFlareFXByName, 0x00617430);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::_GetClassDef, 0x0060EB30);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::Archive, 0x00617480);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::Unarchive, 0x00617570);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::Render, 0x00617410);

	ZENGIN_REGISTER_CLASS(zCEventScreenFX);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::zCEventScreenFX_OnInit, 0x00617650);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Clear, 0x006176F0);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::_GetClassDef, 0x0060F780);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Archive, 0x006179C0);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Unarchive, 0x00617A10);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::MD_GetNumOfSubTypes, 0x0060F790);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::MD_GetSubTypeString, 0x00617720);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::MD_GetTimeBehavior, 0x00617910);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::MD_GetMinTime, 0x00617930);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Pack, 0x00617940);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Unpack, 0x00617980);

	ZENGIN_REGISTER_CLASS(zCVobScreenFX);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::zCVobScreenFX_OnInit, 0x00617A60);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::StartEffect, 0x00617F50);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::CalcEffectColor, 0x00617FE0);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::_GetClassDef, 0x00617BF0);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::Archive, 0x006183B0);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::Unarchive, 0x00618440);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::OnMessage, 0x00617D60);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::OnTick, 0x00618070);

	ZENGIN_REGISTER_CLASS(zCMessageFilter);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::zCMessageFilter_OnInit, 0x006184E0);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::ProcessMessage, 0x00618620);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::_GetClassDef, 0x0060BCC0);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::Archive, 0x00618970);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::Unarchive, 0x006189D0);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::OnTrigger, 0x00618930);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::OnUntrigger, 0x00618950);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::OnTouch, 0x0060BCD0);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::OnUntouch, 0x0060BCE0);

	ZENGIN_REGISTER_CLASS(zCTriggerUntouch);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::_GetClassDef, 0x0060B900);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::OnTrigger, 0x0060B920);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::OnUntrigger, 0x0060B930);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::OnTouch, 0x0060B910);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::OnUntouch, 0x00618A50);

	ZENGIN_REGISTER_CLASS(zCTriggerWorldStart);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::zCTriggerWorldStart_OnInit, 0x0061A3A0);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::_GetClassDef, 0x0060C7B0);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::Archive, 0x0061A530);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::Unarchive, 0x0061A590);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::OnTrigger, 0x0061A510);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::OnUntrigger, 0x0060C7E0);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::OnTouch, 0x0060C7C0);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::OnUntouch, 0x0060C7D0);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::PostLoad, 0x0061A4E0);

	ZENGIN_REGISTER_CLASS(zCCodeMaster);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::zCCodeMaster_OnInit, 0x00618B80);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::Init, 0x00618EC0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::Reset, 0x00619040);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::FireTriggerSuccess, 0x00619090);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::FireTriggerFailure, 0x00619170);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::GetSlaveNr, 0x00619250);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::_GetClassDef, 0x0060C0E0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::Archive, 0x00619670);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::Unarchive, 0x00619A80);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnTrigger, 0x00619300);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnUntrigger, 0x00619500);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnTouch, 0x0060C100);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnUntouch, 0x0060C0F0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnMessage, 0x00619600);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::GetTriggerTarget, 0x00619E40);

	ZENGIN_REGISTER_CLASS(zCMoverControler);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::zCMoverControler_OnInit, 0x00619E70);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::_GetClassDef, 0x0060C470);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::Archive, 0x0061A0D0);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::Unarchive, 0x0061A340);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::OnTrigger, 0x00619FC0);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::OnUntrigger, 0x0060C480);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::OnTouch, 0x0060C4A0);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::OnUntouch, 0x0060C490);

} // namespace Gothic_II_Addon
