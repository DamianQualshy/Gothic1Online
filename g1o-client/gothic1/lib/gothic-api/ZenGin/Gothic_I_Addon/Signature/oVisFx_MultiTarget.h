namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCVisFX_MultiTarget);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::oCVisFX_MultiTarget_OnInit, 0x004A47A0);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::_GetClassDef, 0x004A47E0);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::Archive, 0x004A51A0);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::Unarchive, 0x004A51B0);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::Open, 0x004A4950);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::Init, 0x004A49D0);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::InvestNext, 0x004A4E70);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::SetLevel, 0x004A4990);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::Cast, 0x004A4EB0);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::Stop, 0x004A4F20);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::Play, 0x004A47F0);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::IsFinished, 0x004A50A0);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::SetByScript, 0x004A4F90);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::Reset, 0x004A5060);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::SetDamage, 0x004A50F0);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::SetDamageType, 0x004A5150);

} // namespace Gothic_I_Addon
