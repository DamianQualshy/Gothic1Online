namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zSCtrlValue);
	ZENGIN_REGISTER_METHOD(zSCtrlValue, &zSCtrlValue::zSCtrlValue_OnInit, 0x004D6FD0);

	ZENGIN_REGISTER_CLASS(zCInput);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::zCInput_OnInit, 0x004D2130);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::Bind, 0x004D2420);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::BindOption, 0x004D2610);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::Unbind, 0x004D2880);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::IsBinded, 0x004D29A0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::IsBindedToggled, 0x004D2AB0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetBinding, 0x004D2AF0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetFirstBindedLogicalKey, 0x004D2C30);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::InitializeControlValues, 0x004D2C90);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::BindKeys, 0x004D5420);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetState, 0x004D2190);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetState, 0x004D21A0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetToggled, 0x004D21B0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetDeviceEnabled, 0x004D21C0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetDeviceEnabled, 0x004D21D0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetDeviceConnected, 0x004D21E0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::KeyPressed, 0x004D21F0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::KeyToggled, 0x004D2200);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::AnyKeyPressed, 0x004D2210);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::ResetRepeatKey, 0x004D2220);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetKey, 0x004D2230);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetKey, 0x004D2240);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetChar, 0x004D2250);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::ClearKeyBuffer, 0x004D2260);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetNumJoysConnected, 0x004D2270);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetJoyDigitalEmu, 0x004D2280);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetJoyEnabled, 0x004D2290);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCInput, &zCInput::JoyState, float(zCInput::*)(int), 0x004D22A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCInput, &zCInput::JoyState, float(zCInput::*)(int, int), 0x004D22B0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMousePos, 0x004D22C0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseButtonPressedLeft, 0x004D22D0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseButtonPressedMid, 0x004D22E0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseButtonPressedRight, 0x004D22F0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetMouseSensitivity, 0x004D2300);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseSensitivity, 0x004D2310);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetMouseFlipXY, 0x004D2320);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseFlipXY, 0x004D2330);

} // namespace Gothic_I_Addon
