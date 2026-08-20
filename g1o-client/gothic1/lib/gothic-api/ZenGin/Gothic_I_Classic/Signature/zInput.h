namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zSCtrlValue);
	ZENGIN_REGISTER_METHOD(zSCtrlValue, &zSCtrlValue::zSCtrlValue_OnInit, 0x004C7500);

	ZENGIN_REGISTER_CLASS(zCInput);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::zCInput_OnInit, 0x004C2820);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::Bind, 0x004C2B10);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::BindOption, 0x004C2D00);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::Unbind, 0x004C2F40);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::IsBinded, 0x004C3050);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetBinding, 0x004C3150);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetFirstBindedLogicalKey, 0x004C3270);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::InitializeControlValues, 0x004C32E0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::BindKeys, 0x004C5930);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetState, 0x004C2880);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetState, 0x004C2890);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetToggled, 0x004C28A0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetDeviceEnabled, 0x004C28B0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetDeviceEnabled, 0x004C28C0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetDeviceConnected, 0x004C28D0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::KeyPressed, 0x004C28E0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::KeyToggled, 0x004C28F0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::AnyKeyPressed, 0x004C2900);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::ResetRepeatKey, 0x004C2910);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetKey, 0x004C2920);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetKey, 0x004C2930);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetChar, 0x004C2940);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::ClearKeyBuffer, 0x004C2950);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetNumJoysConnected, 0x004C2960);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetJoyDigitalEmu, 0x004C2970);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetJoyEnabled, 0x004C2980);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCInput, &zCInput::JoyState, float(zCInput::*)(int), 0x004C2990);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCInput, &zCInput::JoyState, float(zCInput::*)(int, int), 0x004C29A0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMousePos, 0x004C29B0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseButtonPressedLeft, 0x004C29C0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseButtonPressedMid, 0x004C29D0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseButtonPressedRight, 0x004C29E0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetMouseSensitivity, 0x004C29F0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseSensitivity, 0x004C2A00);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetMouseFlipXY, 0x004C2A10);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseFlipXY, 0x004C2A20);

} // namespace Gothic_I_Classic
