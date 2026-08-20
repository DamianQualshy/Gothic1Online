namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCEventCommon);
	ZENGIN_REGISTER_METHOD(zCEventCommon, &zCEventCommon::_GetClassDef, 0x006020B0);
	ZENGIN_REGISTER_METHOD(zCEventCommon, &zCEventCommon::IsNetRelevant, 0x006020D0);
	ZENGIN_REGISTER_METHOD(zCEventCommon, &zCEventCommon::MD_GetNumOfSubTypes, 0x006020C0);
	ZENGIN_REGISTER_METHOD(zCEventCommon, &zCEventCommon::MD_GetSubTypeString, 0x00602860);

	ZENGIN_REGISTER_CLASS(zCTriggerBase);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::zCTriggerBase_OnInit, 0x00602B90);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::_GetClassDef, 0x005FE4D0);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::Archive, 0x00602EE0);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::Unarchive, 0x00602F10);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::OnTrigger, 0x00602DA0);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::OnUntrigger, 0x00602E40);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::OnTouch, 0x00602C60);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::OnUntouch, 0x00602D00);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::GetTriggerTarget, 0x00404940);

	ZENGIN_REGISTER_CLASS(zCTrigger);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::zCTrigger_OnInit, 0x00602F40);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::GetTriggerTarget, 0x00405060);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::ClearStateInternals, 0x00603170);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::TriggerTargetPost, 0x00603550);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::ActivateTrigger, 0x00603580);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::DeactivateTrigger, 0x00603660);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::_GetClassDef, 0x00603130);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::Archive, 0x00603890);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::Unarchive, 0x00603B00);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnTrigger, 0x00603690);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnUntrigger, 0x006036B0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnTouch, 0x006036F0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnUntouch, 0x00603710);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnDamage, 0x00603750);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnMessage, 0x00603790);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnTimer, 0x00603800);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::TriggerTarget, 0x006033F0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::UntriggerTarget, 0x006034A0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::CanBeActivatedNow, 0x006032D0);

	ZENGIN_REGISTER_CLASS(zCEventMover);
	ZENGIN_REGISTER_METHOD(zCEventMover, &zCEventMover::_GetClassDef, 0x006024A0);
	ZENGIN_REGISTER_METHOD(zCEventMover, &zCEventMover::IsNetRelevant, 0x006024C0);
	ZENGIN_REGISTER_METHOD(zCEventMover, &zCEventMover::MD_GetNumOfSubTypes, 0x006024B0);
	ZENGIN_REGISTER_METHOD(zCEventMover, &zCEventMover::MD_GetSubTypeString, 0x006029E0);

	ZENGIN_REGISTER_CLASS(zCMover);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::zCMover_OnInit, 0x00603DC0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::ClearStateInternals, 0x00603FE0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::UpdateInternals, 0x00604360);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::AdvanceKeyframe_KF, 0x006044D0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::SetToKeyframe_KF, 0x00604500);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::InterpolateKeyframes_KF, 0x006049D0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::AdvanceMover, 0x00604F30);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::SetToKeyframe, 0x00605220);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::InvertMovement, 0x00605540);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::StartMovingSound, 0x006057F0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::MoveToKeyframe, 0x00605860);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::DoOpen, 0x006058D0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::FinishedOpening, 0x00605980);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::DoClose, 0x00605A00);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::FinishedClosing, 0x00605AC0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::Unlock, 0x00605B10);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::Lock, 0x00605CF0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::IsKeyToThisMover, 0x00605ED0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::TriggerMover, 0x00605F60);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::_GetClassDef, 0x00603FA0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::Archive, 0x00606BB0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::Unarchive, 0x00606E70);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnTrigger, 0x00606440);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnUntrigger, 0x00606540);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnTouch, 0x00606710);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnDamage, 0x006067D0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnMessage, 0x00606820);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnTick, 0x00606340);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::PostLoad, 0x00606BA0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::CanThisCollideWith, 0x006042F0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::SetVisual, 0x006055E0);

	ZENGIN_REGISTER_CLASS(zCTriggerTeleport);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::zCTriggerTeleport_OnInit, 0x00607500);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::DoTeleport, 0x00607830);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::_GetClassDef, 0x006001C0);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::Archive, 0x00607A70);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::Unarchive, 0x00607AA0);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::OnTrigger, 0x00607A50);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::OnUntrigger, 0x00607A60);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::OnTouch, 0x00607A40);

	ZENGIN_REGISTER_CLASS(zCTriggerList);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::zCTriggerList_OnInit, 0x00607EE0);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::Init, 0x006081A0);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::TriggerActTarget, 0x006082D0);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::ProcessActTarget, 0x006083A0);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::FinishActivation, 0x00608440);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::DoTriggering, 0x00608550);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::_GetClassDef, 0x005FFB80);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::Archive, 0x00608860);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::Unarchive, 0x00608B20);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::OnTimer, 0x006084B0);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::GetTriggerTarget, 0x006082B0);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::TriggerTarget, 0x00608820);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::UntriggerTarget, 0x00608840);

	ZENGIN_REGISTER_CLASS(zCEffect);
	ZENGIN_REGISTER_METHOD(zCEffect, &zCEffect::_GetClassDef, 0x0048D570);

	ZENGIN_REGISTER_CLASS(zCEarthquake);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::zCEarthquake_OnInit, 0x00607260);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::_GetClassDef, 0x006006B0);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::Archive, 0x00607410);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::Unarchive, 0x00607490);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::OnTrigger, 0x00607350);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::OnUntrigger, 0x006073B0);

	ZENGIN_REGISTER_CLASS(zCPFXControler);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::zCPFXControler_OnInit, 0x00607B10);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::GetPFX, 0x00607BF0);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::_GetClassDef, 0x006009A0);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::Archive, 0x00607D20);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::Unarchive, 0x00607D80);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::OnTrigger, 0x00607C70);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::OnUntrigger, 0x00607CF0);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::PostLoad, 0x00607C50);

	ZENGIN_REGISTER_CLASS(zCTouchDamage);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::zCTouchDamage_OnInit, 0x00608E20);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::ProcessToucher, 0x006091B0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::TestCollType, 0x006092C0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::FireDamageMessage, 0x00609540);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::SetVobProperties, 0x00609830);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::_GetClassDef, 0x00600CD0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::Archive, 0x00609630);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::Unarchive, 0x00609700);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::OnTouch, 0x00608F10);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::OnUntouch, 0x00609040);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::OnTimer, 0x00609060);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::SetVisual, 0x006097E0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::GetDamageTypeArcEnum, 0x006097C0);

	ZENGIN_REGISTER_CLASS(zCVobStair);
	ZENGIN_REGISTER_METHOD(zCVobStair, &zCVobStair::_GetClassDef, 0x005FDF90);

	ZENGIN_REGISTER_CLASS(zCTouchAnimate);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::zCTouchAnimate_OnInit, 0x00609870);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::IsTouching, 0x00609D60);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::StartAni, 0x00609E30);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::StopAni, 0x0060A0B0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::IsAniActive, 0x0060A0F0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::SetVobProperties, 0x0060A200);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::_GetClassDef, 0x00601000);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::Archive, 0x0060A130);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::Unarchive, 0x0060A140);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::OnTouch, 0x00609A10);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::OnUntouch, 0x00609B70);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::OnTick, 0x00609B90);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::SetVisual, 0x0060A1B0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::GetSoundName, 0x00609FA0);

	ZENGIN_REGISTER_CLASS(zCTouchAnimateSound);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::zCTouchAnimateSound_OnInit, 0x0060A240);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::_GetClassDef, 0x006013E0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::Archive, 0x0060A4D0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::Unarchive, 0x0060A500);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::GetSoundName, 0x0060A590);

	ZENGIN_REGISTER_CLASS(zCVobAnimate);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::zCVobAnimate_OnInit, 0x0060A5E0);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::StartAni, 0x0060A700);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::StopAni, 0x0060A740);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::_GetClassDef, 0x006016D0);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::Archive, 0x0060A7B0);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::Unarchive, 0x0060A800);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::OnTrigger, 0x0060A750);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::OnUntrigger, 0x0060A7A0);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::SetVisual, 0x0060A690);

	ZENGIN_REGISTER_CLASS(zCVobLensFlare);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::zCVobLensFlare_OnInit, 0x0060A8B0);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::SetLensFlareFXByName, 0x0060A990);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::_GetClassDef, 0x006019C0);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::Archive, 0x0060A9E0);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::Unarchive, 0x0060AAE0);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::Render, 0x0060A970);

	ZENGIN_REGISTER_CLASS(zCEventScreenFX);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::zCEventScreenFX_OnInit, 0x0060ABD0);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Clear, 0x0060AC70);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::_GetClassDef, 0x00602800);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Archive, 0x0060AF40);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Unarchive, 0x0060AF90);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::MD_GetNumOfSubTypes, 0x00602810);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::MD_GetSubTypeString, 0x0060ACA0);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::MD_GetTimeBehavior, 0x0060AE90);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::MD_GetMinTime, 0x0060AEB0);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Pack, 0x0060AEC0);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Unpack, 0x0060AF00);

	ZENGIN_REGISTER_CLASS(zCVobScreenFX);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::zCVobScreenFX_OnInit, 0x0060AFE0);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::StartEffect, 0x0060B300);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::CalcEffectColor, 0x0060B390);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::_GetClassDef, 0x00601D20);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::Archive, 0x0060B6E0);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::Unarchive, 0x0060B770);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::OnMessage, 0x0060B0F0);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::OnTick, 0x0060B410);

	ZENGIN_REGISTER_CLASS(zCMessageFilter);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::zCMessageFilter_OnInit, 0x0060B810);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::ProcessMessage, 0x0060B950);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::_GetClassDef, 0x005FE8F0);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::Archive, 0x0060BD20);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::Unarchive, 0x0060BD80);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::OnTrigger, 0x0060BCE0);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::OnUntrigger, 0x0060BD00);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::OnTouch, 0x005FE900);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::OnUntouch, 0x005FE910);

	ZENGIN_REGISTER_CLASS(zCTriggerUntouch);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::_GetClassDef, 0x005FE500);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::OnTrigger, 0x005FE520);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::OnUntrigger, 0x005FE530);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::OnTouch, 0x005FE510);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::OnUntouch, 0x0060BE00);

	ZENGIN_REGISTER_CLASS(zCTriggerWorldStart);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::zCTriggerWorldStart_OnInit, 0x0060D630);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::_GetClassDef, 0x005FF460);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::Archive, 0x0060D7B0);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::Unarchive, 0x0060D810);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::OnTrigger, 0x0060D790);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::OnUntrigger, 0x005FF490);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::OnTouch, 0x005FF470);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::OnUntouch, 0x005FF480);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::PostLoad, 0x0060D770);

	ZENGIN_REGISTER_CLASS(zCCodeMaster);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::zCCodeMaster_OnInit, 0x0060BEE0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::Init, 0x0060C240);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::Reset, 0x0060C3C0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::FireTriggerSuccess, 0x0060C410);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::FireTriggerFailure, 0x0060C4F0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::GetSlaveNr, 0x0060C5D0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::_GetClassDef, 0x005FED40);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::Archive, 0x0060C9F0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::Unarchive, 0x0060CD40);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnTrigger, 0x0060C680);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnUntrigger, 0x0060C880);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnTouch, 0x005FED60);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnUntouch, 0x005FED50);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnMessage, 0x0060C980);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::GetTriggerTarget, 0x0060D070);

	ZENGIN_REGISTER_CLASS(zCMoverControler);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::zCMoverControler_OnInit, 0x0060D0A0);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::_GetClassDef, 0x005FF100);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::Archive, 0x0060D320);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::Unarchive, 0x0060D5D0);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::OnTrigger, 0x0060D1F0);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::OnUntrigger, 0x005FF110);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::OnTouch, 0x005FF130);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::OnUntouch, 0x005FF120);

} // namespace Gothic_I_Addon
