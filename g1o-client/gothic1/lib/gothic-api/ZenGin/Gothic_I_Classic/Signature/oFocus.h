namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCNpcFocus);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::oCNpcFocus_OnInit, 0x00635010);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpcFocus, &oCNpcFocus::Init, void(oCNpcFocus::*)(zSTRING&), 0x00635040);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpcFocus, &oCNpcFocus::Init, void(oCNpcFocus::*)(int), 0x00635070);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsValid, 0x00635120);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetMaxRange, 0x00635170);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetRange2, 0x00635180);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetItemThrowRange, 0x00635190);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetMobThrowRange, 0x006351A0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::HasLowerPriority, 0x006351B0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetPriority, 0x00635230);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsInRange, 0x00635270);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsInAngle, 0x00635300);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsNpcInRange, 0x006353E0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsNpcInAngle, 0x00635430);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsItemInRange, 0x00635480);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsItemInAngle, 0x006354B0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsMobInRange, 0x00635500);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsMobInAngle, 0x00635530);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetAzi, 0x00635580);

} // namespace Gothic_I_Classic
