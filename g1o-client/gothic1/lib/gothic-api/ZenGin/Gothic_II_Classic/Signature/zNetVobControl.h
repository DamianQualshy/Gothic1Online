namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCNetVobControl);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::zCNetVobControl_OnInit, 0x0045D5B0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::_GetClassDef, 0x0045D580);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::Archive, 0x0045EA20);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::Unarchive, 0x0045EB20);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::Init, 0x0045D700);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::IsLocalChained, 0x0045D590);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::IsLocalControlled, 0x0045E9D0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::IsPlayerVob, 0x0045E9E0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::SetLocalChained, 0x0045D5A0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::SetCtrlPlayer, 0x0045E5B0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::CopyCtrlState, 0x0045E9F0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::Process, 0x0045D720);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::HandOverToPlayer, 0x0045D7F0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::CreateNetMessage, 0x0045E170);

} // namespace Gothic_II_Classic
