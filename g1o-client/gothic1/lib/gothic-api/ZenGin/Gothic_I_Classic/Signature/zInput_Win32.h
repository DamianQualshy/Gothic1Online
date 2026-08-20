namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCInput_Win32);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::zCInput_Win32_OnInit, 0x004C8170);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetFocusWindow, 0x004C8160);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetAutoRepeatDelayRate, 0x004C8830);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetAutoRepeatDelayRate, 0x004C8850);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetState, 0x004C8310);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetState, 0x004C83E0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetToggled, 0x004C8630);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetDeviceEnabled, 0x004C8710);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetDeviceEnabled, 0x004C8760);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetDeviceConnected, 0x004C8780);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::KeyPressed, 0x004C87A0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::KeyToggled, 0x004C87B0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::AnyKeyPressed, 0x004C87D0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::ResetRepeatKey, 0x004C8860);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetKey, 0x004C88A0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetKey, 0x004C8A10);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetChar, 0x004C8A40);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::ClearKeyBuffer, 0x004C8AE0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMousePos, 0x004C8BD0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseButtonPressedLeft, 0x004C8C30);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseButtonPressedMid, 0x004C8C40);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseButtonPressedRight, 0x004C8C50);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetMouseSensitivity, 0x004C8C60);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseSensitivity, 0x004C8CB0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetMouseFlipXY, 0x004C8CD0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseFlipXY, 0x004C8CF0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::ProcessInputEvents, 0x004C8BA0);

} // namespace Gothic_I_Classic
