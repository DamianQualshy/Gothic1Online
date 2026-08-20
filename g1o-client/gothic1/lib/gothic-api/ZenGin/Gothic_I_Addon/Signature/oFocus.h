namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCNpcFocus);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::oCNpcFocus_OnInit, 0x0065B1B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpcFocus, &oCNpcFocus::Init, void(oCNpcFocus::*)(zSTRING&), 0x0065B1E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpcFocus, &oCNpcFocus::Init, void(oCNpcFocus::*)(int), 0x0065B210);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsValid, 0x0065B2C0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetMaxRange, 0x0065B310);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetRange2, 0x0065B320);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetItemThrowRange, 0x0065B330);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetMobThrowRange, 0x0065B340);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::HasLowerPriority, 0x0065B350);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetPriority, 0x0065B3D0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsInRange, 0x0065B410);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsInAngle, 0x0065B4A0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsNpcInRange, 0x0065B580);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsNpcInAngle, 0x0065B5D0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsItemInRange, 0x0065B620);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsItemInAngle, 0x0065B650);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsMobInRange, 0x0065B6A0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsMobInAngle, 0x0065B6D0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetAzi, 0x0065B720);

} // namespace Gothic_I_Addon
