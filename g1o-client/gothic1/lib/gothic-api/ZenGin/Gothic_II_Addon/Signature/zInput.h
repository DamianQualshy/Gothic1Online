namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zSCtrlValue);
	ZENGIN_REGISTER_METHOD(zSCtrlValue, &zSCtrlValue::zSCtrlValue_OnInit, 0x004D20A0);

	ZENGIN_REGISTER_CLASS(zCInput);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::zCInput_OnInit, 0x004CBB60);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::Bind, 0x004CBE60);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::BindOption, 0x004CC020);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::Unbind, 0x004CC260);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::IsBinded, 0x004CC370);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::IsBindedToggled, 0x004CC470);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetBinding, 0x004CC4B0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetFirstBindedLogicalKey, 0x004CC5D0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::InitializeControlValues, 0x004CC640);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::BindKeys, 0x004CFE00);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetState, 0x004CBBC0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetState, 0x004CBBD0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetToggled, 0x004CBBE0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetDeviceEnabled, 0x004CBBF0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetDeviceEnabled, 0x004CBC00);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetDeviceConnected, 0x004CBC10);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::KeyPressed, 0x004CBC20);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::KeyToggled, 0x004CBC30);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::AnyKeyPressed, 0x004CBC40);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::ResetRepeatKey, 0x004CBC50);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetKey, 0x004CBC60);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetKey, 0x004CBC70);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetChar, 0x004CBC80);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::ClearKeyBuffer, 0x004CBC90);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetNumJoysConnected, 0x004CBCA0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetJoyDigitalEmu, 0x004CBCB0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetJoyEnabled, 0x004CBCC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCInput, &zCInput::JoyState, float(zCInput::*)(int), 0x004CBCD0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCInput, &zCInput::JoyState, float(zCInput::*)(int, int), 0x004CBCE0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMousePos, 0x004CBCF0);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseButtonPressedLeft, 0x004CBD00);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseButtonPressedMid, 0x004CBD10);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseButtonPressedRight, 0x004CBD20);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetMouseSensitivity, 0x004CBD30);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseSensitivity, 0x004CBD40);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseIdle, 0x004CBD50);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::SetMouseFlipXY, 0x004CBD60);
	ZENGIN_REGISTER_METHOD(zCInput, &zCInput::GetMouseFlipXY, 0x004CBD70);

} // namespace Gothic_II_Addon
