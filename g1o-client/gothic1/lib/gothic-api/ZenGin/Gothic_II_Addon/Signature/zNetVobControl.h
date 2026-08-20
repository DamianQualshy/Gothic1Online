namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCNetVobControl);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::zCNetVobControl_OnInit, 0x0045DD00);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::_GetClassDef, 0x0045DCD0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::Archive, 0x0045F170);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::Unarchive, 0x0045F270);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::Init, 0x0045DE50);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::IsLocalChained, 0x0045DCE0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::IsLocalControlled, 0x0045F120);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::IsPlayerVob, 0x0045F130);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::SetLocalChained, 0x0045DCF0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::SetCtrlPlayer, 0x0045ED00);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::CopyCtrlState, 0x0045F140);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::Process, 0x0045DE70);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::HandOverToPlayer, 0x0045DF40);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::CreateNetMessage, 0x0045E8C0);

} // namespace Gothic_II_Addon
