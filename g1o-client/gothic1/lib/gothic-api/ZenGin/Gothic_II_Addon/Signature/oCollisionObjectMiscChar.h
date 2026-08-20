namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCCollObjectCharacter);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::oCCollObjectCharacter_OnInit, 0x0065D0F0);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::GetCollObjClass, 0x0065D0E0);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::GetPrimitiveCC, 0x0065D220);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::IsDead, 0x0065D190);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::DontLetHimComeNearer, 0x0065D1F0);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::TurnSpeed, 0x0065D150);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::PushAround, 0x0065D1C0);

} // namespace Gothic_II_Addon
