namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCCollObjectCharacter);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::oCCollObjectCharacter_OnInit, 0x007A7CE0);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::GetCollObjClass, 0x007A7CD0);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::GetPrimitiveCC, 0x007A7E10);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::IsDead, 0x007A7D80);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::DontLetHimComeNearer, 0x007A7DE0);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::TurnSpeed, 0x007A7D40);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::PushAround, 0x007A7DB0);

} // namespace Gothic_II_Classic
