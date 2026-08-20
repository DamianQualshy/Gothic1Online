namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCCollObjectCharacter);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::oCCollObjectCharacter_OnInit, 0x0079D430);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::GetCollObjClass, 0x0079D420);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::GetPrimitiveCC, 0x0079D560);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::IsDead, 0x0079D4D0);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::DontLetHimComeNearer, 0x0079D530);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::TurnSpeed, 0x0079D490);
	ZENGIN_REGISTER_METHOD(oCCollObjectCharacter, &oCCollObjectCharacter::PushAround, 0x0079D500);

} // namespace Gothic_I_Addon
