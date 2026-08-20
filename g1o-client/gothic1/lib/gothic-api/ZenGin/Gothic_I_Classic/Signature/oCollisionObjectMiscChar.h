namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCCollObjectCharacter);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::oCCollObjectCharacter_OnInit, 0x0075AB30);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::GetCollObjClass, 0x0075AB20);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::GetPrimitiveCC, 0x0075AC40);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::IsDead, 0x0075ABD0);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::DontLetHimComeNearer, 0x0075AC10);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::TurnSpeed, 0x0075AB90);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::PushAround, 0x0075AC00);

} // namespace Gothic_I_Classic
