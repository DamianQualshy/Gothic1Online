namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCInput_Win32);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::zCInput_Win32_OnInit, 0x004D2450);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetFocusWindow, 0x004D2440);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetAutoRepeatDelayRate, 0x004D2D40);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetAutoRepeatDelayRate, 0x004D2D60);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetState, 0x004D2770);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetState, 0x004D2840);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetToggled, 0x004D2A60);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetDeviceEnabled, 0x004D2B40);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetDeviceEnabled, 0x004D2BA0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetDeviceConnected, 0x004D2BD0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::KeyPressed, 0x004D2C00);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::KeyToggled, 0x004D2C10);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::AnyKeyPressed, 0x004D2C30);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::ResetRepeatKey, 0x004D2D70);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetKey, 0x004D2DB0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetKey, 0x004D2F10);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetChar, 0x004D2F50);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::ClearKeyBuffer, 0x004D3010);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMousePos, 0x004D3170);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseButtonPressedLeft, 0x004D31D0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseButtonPressedMid, 0x004D31E0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseButtonPressedRight, 0x004D31F0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetMouseSensitivity, 0x004D3200);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseSensitivity, 0x004D3250);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseIdle, 0x004D26E0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetMouseFlipXY, 0x004D3270);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseFlipXY, 0x004D3290);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::ProcessInputEvents, 0x004D3140);

} // namespace Gothic_II_Classic
