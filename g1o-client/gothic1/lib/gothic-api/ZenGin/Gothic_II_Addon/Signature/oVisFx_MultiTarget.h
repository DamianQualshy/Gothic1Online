namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCVisFX_MultiTarget);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::oCVisFX_MultiTarget_OnInit, 0x0049EB40);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::_GetClassDef, 0x0049EB80);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::Archive, 0x0049F540);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::Unarchive, 0x0049F550);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::Open, 0x0049ECF0);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::Init, 0x0049ED80);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::InvestNext, 0x0049F220);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::SetLevel, 0x0049ED30);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::Cast, 0x0049F260);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::Stop, 0x0049F2D0);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::Play, 0x0049EB90);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::IsFinished, 0x0049F440);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::SetByScript, 0x0049F340);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::Reset, 0x0049F400);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::SetDamage, 0x0049F490);
	ZENGIN_REGISTER_METHOD(oCVisFX_MultiTarget, &oCVisFX_MultiTarget::SetDamageType, 0x0049F4F0);

} // namespace Gothic_II_Addon
