namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCInput_Win32);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::zCInput_Win32_OnInit, 0x004D4A10);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetFocusWindow, 0x004D4A00);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetAutoRepeatDelayRate, 0x004D5300);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetAutoRepeatDelayRate, 0x004D5320);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetState, 0x004D4D30);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetState, 0x004D4E00);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetToggled, 0x004D5020);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetDeviceEnabled, 0x004D5100);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetDeviceEnabled, 0x004D5160);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetDeviceConnected, 0x004D5190);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::KeyPressed, 0x004D51C0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::KeyToggled, 0x004D51D0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::AnyKeyPressed, 0x004D51F0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::ResetRepeatKey, 0x004D5330);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetKey, 0x004D5370);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetKey, 0x004D54D0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetChar, 0x004D5510);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::ClearKeyBuffer, 0x004D55D0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMousePos, 0x004D5730);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseButtonPressedLeft, 0x004D5790);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseButtonPressedMid, 0x004D57A0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseButtonPressedRight, 0x004D57B0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetMouseSensitivity, 0x004D57C0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseSensitivity, 0x004D5810);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseIdle, 0x004D4CA0);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::SetMouseFlipXY, 0x004D5830);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::GetMouseFlipXY, 0x004D5850);
	ZENGIN_REGISTER_METHOD(zCInput_Win32, &zCInput_Win32::ProcessInputEvents, 0x004D5700);

} // namespace Gothic_II_Addon
