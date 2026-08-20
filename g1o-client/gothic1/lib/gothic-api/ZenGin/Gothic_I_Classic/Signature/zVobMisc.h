namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCEventCommon);
	ZENGIN_REGISTER_METHOD(zCEventCommon, &zCEventCommon::_GetClassDef, 0x005E21F0);
	ZENGIN_REGISTER_METHOD(zCEventCommon, &zCEventCommon::IsNetRelevant, 0x005E2210);
	ZENGIN_REGISTER_METHOD(zCEventCommon, &zCEventCommon::MD_GetNumOfSubTypes, 0x005E2200);
	ZENGIN_REGISTER_METHOD(zCEventCommon, &zCEventCommon::MD_GetSubTypeString, 0x005E2970);

	ZENGIN_REGISTER_CLASS(zCTriggerBase);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::zCTriggerBase_OnInit, 0x005E2C80);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::_GetClassDef, 0x005DE760);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::Archive, 0x005E2FD0);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::Unarchive, 0x005E3000);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::OnTrigger, 0x005E2E90);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::OnUntrigger, 0x005E2F30);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::OnTouch, 0x005E2D50);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::OnUntouch, 0x005E2DF0);
	ZENGIN_REGISTER_METHOD(zCTriggerBase, &zCTriggerBase::GetTriggerTarget, 0x004041B0);

	ZENGIN_REGISTER_CLASS(zCTrigger);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::zCTrigger_OnInit, 0x005E3030);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::GetTriggerTarget, 0x00404860);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::ClearStateInternals, 0x005E3260);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::TriggerTargetPost, 0x005E3630);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::ActivateTrigger, 0x005E3660);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::DeactivateTrigger, 0x005E3740);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::_GetClassDef, 0x005E3220);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::Archive, 0x005E3970);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::Unarchive, 0x005E3BE0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnTrigger, 0x005E3770);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnUntrigger, 0x005E3790);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnTouch, 0x005E37D0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnUntouch, 0x005E37F0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnDamage, 0x005E3830);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnMessage, 0x005E3870);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::OnTimer, 0x005E38E0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::TriggerTarget, 0x005E34D0);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::UntriggerTarget, 0x005E3580);
	ZENGIN_REGISTER_METHOD(zCTrigger, &zCTrigger::CanBeActivatedNow, 0x005E33B0);

	ZENGIN_REGISTER_CLASS(zCEventMover);
	ZENGIN_REGISTER_METHOD(zCEventMover, &zCEventMover::_GetClassDef, 0x005E25D0);
	ZENGIN_REGISTER_METHOD(zCEventMover, &zCEventMover::IsNetRelevant, 0x005E25F0);
	ZENGIN_REGISTER_METHOD(zCEventMover, &zCEventMover::MD_GetNumOfSubTypes, 0x005E25E0);
	ZENGIN_REGISTER_METHOD(zCEventMover, &zCEventMover::MD_GetSubTypeString, 0x005E2AD0);

	ZENGIN_REGISTER_CLASS(zCMover);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::zCMover_OnInit, 0x005E3E90);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::ClearStateInternals, 0x005E40B0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::UpdateInternals, 0x005E43D0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::AdvanceKeyframe_KF, 0x005E4530);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::SetToKeyframe_KF, 0x005E4560);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::InterpolateKeyframes_KF, 0x005E4A60);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::AdvanceMover, 0x005E4E80);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::SetToKeyframe, 0x005E5160);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::InvertMovement, 0x005E53D0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::StartMovingSound, 0x005E5630);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::MoveToKeyframe, 0x005E56A0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::DoOpen, 0x005E5710);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::FinishedOpening, 0x005E57C0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::DoClose, 0x005E5840);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::FinishedClosing, 0x005E5900);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::Unlock, 0x005E5950);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::Lock, 0x005E5B20);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::IsKeyToThisMover, 0x005E5CF0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::TriggerMover, 0x005E5D80);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::_GetClassDef, 0x005E4070);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::Archive, 0x005E68B0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::Unarchive, 0x005E6B60);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnTrigger, 0x005E6150);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnUntrigger, 0x005E6240);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnTouch, 0x005E6410);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnDamage, 0x005E64D0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnMessage, 0x005E6520);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::OnTick, 0x005E6050);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::PostLoad, 0x005E68A0);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::CanThisCollideWith, 0x005E4360);
	ZENGIN_REGISTER_METHOD(zCMover, &zCMover::SetVisual, 0x005E5470);

	ZENGIN_REGISTER_CLASS(zCTriggerTeleport);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::zCTriggerTeleport_OnInit, 0x005E71B0);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::DoTeleport, 0x005E74D0);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::_GetClassDef, 0x005E03B0);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::Archive, 0x005E76E0);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::Unarchive, 0x005E7710);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::OnTrigger, 0x005E76C0);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::OnUntrigger, 0x005E76D0);
	ZENGIN_REGISTER_METHOD(zCTriggerTeleport, &zCTriggerTeleport::OnTouch, 0x005E76B0);

	ZENGIN_REGISTER_CLASS(zCTriggerList);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::zCTriggerList_OnInit, 0x005E7B50);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::Init, 0x005E7E00);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::TriggerActTarget, 0x005E7F30);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::ProcessActTarget, 0x005E8000);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::FinishActivation, 0x005E8090);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::DoTriggering, 0x005E8190);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::_GetClassDef, 0x005DFD90);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::Archive, 0x005E8480);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::Unarchive, 0x005E8710);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::OnTimer, 0x005E8100);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::GetTriggerTarget, 0x005E7F10);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::TriggerTarget, 0x005E8450);
	ZENGIN_REGISTER_METHOD(zCTriggerList, &zCTriggerList::UntriggerTarget, 0x005E8460);

	ZENGIN_REGISTER_CLASS(zCEffect);
	ZENGIN_REGISTER_METHOD(zCEffect, &zCEffect::_GetClassDef, 0x00482510);

	ZENGIN_REGISTER_CLASS(zCEarthquake);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::zCEarthquake_OnInit, 0x005E6F30);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::_GetClassDef, 0x005E0870);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::Archive, 0x005E70C0);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::Unarchive, 0x005E7140);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::OnTrigger, 0x005E7020);
	ZENGIN_REGISTER_METHOD(zCEarthquake, &zCEarthquake::OnUntrigger, 0x005E7070);

	ZENGIN_REGISTER_CLASS(zCPFXControler);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::zCPFXControler_OnInit, 0x005E7780);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::GetPFX, 0x005E7860);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::_GetClassDef, 0x005E0B50);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::Archive, 0x005E7990);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::Unarchive, 0x005E79F0);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::OnTrigger, 0x005E78E0);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::OnUntrigger, 0x005E7960);
	ZENGIN_REGISTER_METHOD(zCPFXControler, &zCPFXControler::PostLoad, 0x005E78C0);

	ZENGIN_REGISTER_CLASS(zCTouchDamage);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::zCTouchDamage_OnInit, 0x005E89D0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::ProcessToucher, 0x005E8CC0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::TestCollType, 0x005E8D60);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::FireDamageMessage, 0x005E8FC0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::SetVobProperties, 0x005E9250);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::_GetClassDef, 0x005E0E70);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::Archive, 0x005E9050);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::Unarchive, 0x005E9120);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::OnTouch, 0x005E8AC0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::OnUntouch, 0x005E8BA0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::OnTimer, 0x005E8BC0);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::SetVisual, 0x005E9200);
	ZENGIN_REGISTER_METHOD(zCTouchDamage, &zCTouchDamage::GetDamageTypeArcEnum, 0x005E91E0);

	ZENGIN_REGISTER_CLASS(zCVobStair);
	ZENGIN_REGISTER_METHOD(zCVobStair, &zCVobStair::_GetClassDef, 0x005DE250);

	ZENGIN_REGISTER_CLASS(zCTouchAnimate);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::zCTouchAnimate_OnInit, 0x005E9290);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::IsTouching, 0x005E9740);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::StartAni, 0x005E9810);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::StopAni, 0x005E9A80);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::IsAniActive, 0x005E9AC0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::SetVobProperties, 0x005E9BD0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::_GetClassDef, 0x005E1190);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::Archive, 0x005E9B00);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::Unarchive, 0x005E9B10);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::OnTouch, 0x005E9430);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::OnUntouch, 0x005E9550);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::OnTick, 0x005E9570);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::SetVisual, 0x005E9B80);
	ZENGIN_REGISTER_METHOD(zCTouchAnimate, &zCTouchAnimate::GetSoundName, 0x005E9970);

	ZENGIN_REGISTER_CLASS(zCTouchAnimateSound);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::zCTouchAnimateSound_OnInit, 0x005E9C10);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::_GetClassDef, 0x005E1560);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::Archive, 0x005E9EB0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::Unarchive, 0x005E9EE0);
	ZENGIN_REGISTER_METHOD(zCTouchAnimateSound, &zCTouchAnimateSound::GetSoundName, 0x005E9F70);

	ZENGIN_REGISTER_CLASS(zCVobAnimate);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::zCVobAnimate_OnInit, 0x005E9FC0);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::StartAni, 0x005EA0F0);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::StopAni, 0x005EA130);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::_GetClassDef, 0x005E1840);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::Archive, 0x005EA1A0);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::Unarchive, 0x005EA1F0);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::OnTrigger, 0x005EA140);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::OnUntrigger, 0x005EA190);
	ZENGIN_REGISTER_METHOD(zCVobAnimate, &zCVobAnimate::SetVisual, 0x005EA080);

	ZENGIN_REGISTER_CLASS(zCVobLensFlare);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::zCVobLensFlare_OnInit, 0x005EA2A0);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::SetLensFlareFXByName, 0x005EA380);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::_GetClassDef, 0x005E1B20);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::Archive, 0x005EA3D0);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::Unarchive, 0x005EA4C0);
	ZENGIN_REGISTER_METHOD(zCVobLensFlare, &zCVobLensFlare::Render, 0x005EA360);

	ZENGIN_REGISTER_CLASS(zCEventScreenFX);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::zCEventScreenFX_OnInit, 0x005EA5A0);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Clear, 0x005EA640);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::_GetClassDef, 0x005E2910);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Archive, 0x005EA910);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Unarchive, 0x005EA960);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::MD_GetNumOfSubTypes, 0x005E2920);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::MD_GetSubTypeString, 0x005EA670);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::MD_GetTimeBehavior, 0x005EA860);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::MD_GetMinTime, 0x005EA880);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Pack, 0x005EA890);
	ZENGIN_REGISTER_METHOD(zCEventScreenFX, &zCEventScreenFX::Unpack, 0x005EA8D0);

	ZENGIN_REGISTER_CLASS(zCVobScreenFX);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::zCVobScreenFX_OnInit, 0x005EA9B0);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::StartEffect, 0x005EACB0);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::CalcEffectColor, 0x005EAD40);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::_GetClassDef, 0x005E1E70);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::Archive, 0x005EB0B0);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::Unarchive, 0x005EB140);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::OnMessage, 0x005EAAC0);
	ZENGIN_REGISTER_METHOD(zCVobScreenFX, &zCVobScreenFX::OnTick, 0x005EADC0);

	ZENGIN_REGISTER_CLASS(zCMessageFilter);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::zCMessageFilter_OnInit, 0x005EB1E0);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::ProcessMessage, 0x005EB320);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::_GetClassDef, 0x005DEB70);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::Archive, 0x005EB700);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::Unarchive, 0x005EB760);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::OnTrigger, 0x005EB6C0);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::OnUntrigger, 0x005EB6E0);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::OnTouch, 0x005DEB80);
	ZENGIN_REGISTER_METHOD(zCMessageFilter, &zCMessageFilter::OnUntouch, 0x005DEB90);

	ZENGIN_REGISTER_CLASS(zCTriggerUntouch);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::_GetClassDef, 0x005DE790);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::OnTrigger, 0x005DE7B0);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::OnUntrigger, 0x005DE7C0);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::OnTouch, 0x005DE7A0);
	ZENGIN_REGISTER_METHOD(zCTriggerUntouch, &zCTriggerUntouch::OnUntouch, 0x005EB7E0);

	ZENGIN_REGISTER_CLASS(zCTriggerWorldStart);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::zCTriggerWorldStart_OnInit, 0x005ECF70);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::_GetClassDef, 0x005DF690);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::Archive, 0x005ED0F0);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::Unarchive, 0x005ED150);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::OnTrigger, 0x005ED0D0);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::OnUntrigger, 0x005DF6C0);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::OnTouch, 0x005DF6A0);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::OnUntouch, 0x005DF6B0);
	ZENGIN_REGISTER_METHOD(zCTriggerWorldStart, &zCTriggerWorldStart::PostLoad, 0x005ED0B0);

	ZENGIN_REGISTER_CLASS(zCCodeMaster);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::zCCodeMaster_OnInit, 0x005EB8C0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::Init, 0x005EBC00);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::Reset, 0x005EBD80);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::FireTriggerSuccess, 0x005EBDD0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::FireTriggerFailure, 0x005EBEB0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::GetSlaveNr, 0x005EBF90);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::_GetClassDef, 0x005DEFA0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::Archive, 0x005EC3B0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::Unarchive, 0x005EC6D0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnTrigger, 0x005EC040);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnUntrigger, 0x005EC240);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnTouch, 0x005DEFC0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnUntouch, 0x005DEFB0);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::OnMessage, 0x005EC340);
	ZENGIN_REGISTER_METHOD(zCCodeMaster, &zCCodeMaster::GetTriggerTarget, 0x005EC9D0);

	ZENGIN_REGISTER_CLASS(zCMoverControler);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::zCMoverControler_OnInit, 0x005ECA00);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::_GetClassDef, 0x005DF340);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::Archive, 0x005ECC80);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::Unarchive, 0x005ECF10);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::OnTrigger, 0x005ECB50);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::OnUntrigger, 0x005DF350);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::OnTouch, 0x005DF370);
	ZENGIN_REGISTER_METHOD(zCMoverControler, &zCMoverControler::OnUntouch, 0x005DF360);

} // namespace Gothic_I_Classic
