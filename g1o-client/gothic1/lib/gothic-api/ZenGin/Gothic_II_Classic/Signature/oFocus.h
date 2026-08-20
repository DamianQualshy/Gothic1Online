namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCNpcFocus);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::oCNpcFocus_OnInit, 0x00662440);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpcFocus, &oCNpcFocus::Init, void(oCNpcFocus::*)(zSTRING&), 0x006624B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpcFocus, &oCNpcFocus::Init, void(oCNpcFocus::*)(int), 0x006624E0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsValid, 0x00662590);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetMaxRange, 0x006625E0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetRange2, 0x006625F0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetItemThrowRange, 0x00662600);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetMobThrowRange, 0x00662610);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::HasLowerPriority, 0x00662620);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetPriority, 0x006626A0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsInRange, 0x006626E0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsInAngle, 0x00662770);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsNpcInRange, 0x00662850);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsNpcInAngle, 0x006628A0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsItemInRange, 0x006628F0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsItemInAngle, 0x00662920);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsMobInRange, 0x00662970);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsMobInAngle, 0x006629A0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetAzi, 0x006629F0);

} // namespace Gothic_II_Classic
