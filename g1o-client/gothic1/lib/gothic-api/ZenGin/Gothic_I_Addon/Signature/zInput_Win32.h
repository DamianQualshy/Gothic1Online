namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCInput_Win32);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::zCInput_Win32_OnInit, 0x004D7FB0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetFocusWindow, 0x004D7FA0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetAutoRepeatDelayRate, 0x004D8850);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetAutoRepeatDelayRate, 0x004D8870);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetState, 0x004D82A0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetState, 0x004D8390);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetToggled, 0x004D85F0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetDeviceEnabled, 0x004D86E0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetDeviceEnabled, 0x004D8720);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetDeviceConnected, 0x004D8740);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::KeyPressed, 0x004D8760);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::KeyToggled, 0x004D8770);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::AnyKeyPressed, 0x004D8790);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::ResetRepeatKey, 0x004D8880);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetKey, 0x004D88C0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetKey, 0x004D8A20);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetChar, 0x004D8A50);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::ClearKeyBuffer, 0x004D8AF0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMousePos, 0x004D8CF0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseButtonPressedLeft, 0x004D8D50);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseButtonPressedMid, 0x004D8D60);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseButtonPressedRight, 0x004D8D70);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetMouseSensitivity, 0x004D8D80);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseSensitivity, 0x004D8DD0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetMouseFlipXY, 0x004D8DF0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseFlipXY, 0x004D8E10);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::ProcessInputEvents, 0x004D8CC0);

} // namespace Gothic_I_Addon
