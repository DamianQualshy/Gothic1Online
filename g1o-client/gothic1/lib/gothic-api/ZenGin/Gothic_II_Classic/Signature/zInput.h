namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zSCtrlValue);
	ZENGIN_REGISTER_METHOD(zSCtrlValue, &zSCtrlValue::zSCtrlValue_OnInit, 0x004CFAE0);

	ZENGIN_REGISTER_CLASS(zCInput);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::zCInput_OnInit, 0x004C95F0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::Bind, 0x004C98F0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::BindOption, 0x004C9AB0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::Unbind, 0x004C9CF0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::IsBinded, 0x004C9E00);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::IsBindedToggled, 0x004C9F00);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetBinding, 0x004C9F40);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetFirstBindedLogicalKey, 0x004CA060);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::InitializeControlValues, 0x004CA0D0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::BindKeys, 0x004CD890);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetState, 0x004C9650);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetState, 0x004C9660);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetToggled, 0x004C9670);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetDeviceEnabled, 0x004C9680);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetDeviceEnabled, 0x004C9690);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetDeviceConnected, 0x004C96A0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::KeyPressed, 0x004C96B0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::KeyToggled, 0x004C96C0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::AnyKeyPressed, 0x004C96D0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::ResetRepeatKey, 0x004C96E0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetKey, 0x004C96F0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetKey, 0x004C9700);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetChar, 0x004C9710);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::ClearKeyBuffer, 0x004C9720);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetNumJoysConnected, 0x004C9730);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetJoyDigitalEmu, 0x004C9740);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetJoyEnabled, 0x004C9750);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCInput, &zCInput::JoyState, float(zCInput::*)(int), 0x004C9760);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCInput, &zCInput::JoyState, float(zCInput::*)(int, int), 0x004C9770);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMousePos, 0x004C9780);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseButtonPressedLeft, 0x004C9790);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseButtonPressedMid, 0x004C97A0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseButtonPressedRight, 0x004C97B0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetMouseSensitivity, 0x004C97C0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseSensitivity, 0x004C97D0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseIdle, 0x004C97E0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetMouseFlipXY, 0x004C97F0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseFlipXY, 0x004C9800);

} // namespace Gothic_II_Classic
