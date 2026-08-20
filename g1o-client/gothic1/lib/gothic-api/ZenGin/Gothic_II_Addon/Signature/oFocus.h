namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCNpcFocus);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::oCNpcFocus_OnInit, 0x006BEDD0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpcFocus, &oCNpcFocus::Init, void(oCNpcFocus::*)(zSTRING&), 0x006BEE40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNpcFocus, &oCNpcFocus::Init, void(oCNpcFocus::*)(int), 0x006BEE70);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsValid, 0x006BEF20);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetMaxRange, 0x006BEF70);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetRange2, 0x006BEF80);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetItemThrowRange, 0x006BEF90);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetMobThrowRange, 0x006BEFA0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::HasLowerPriority, 0x006BEFB0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetPriority, 0x006BF030);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsInRange, 0x006BF070);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsInAngle, 0x006BF100);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsNpcInRange, 0x006BF1E0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsNpcInAngle, 0x006BF230);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsItemInRange, 0x006BF280);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsItemInAngle, 0x006BF2B0);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsMobInRange, 0x006BF300);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::IsMobInAngle, 0x006BF330);
	ZENGIN_REGISTER_METHOD(oCNpcFocus, &oCNpcFocus::GetAzi, 0x006BF380);

} // namespace Gothic_II_Addon
