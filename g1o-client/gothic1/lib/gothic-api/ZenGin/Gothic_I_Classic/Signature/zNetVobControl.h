namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCNetVobControl);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::zCNetVobControl_OnInit, 0x00458A30);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::_GetClassDef, 0x00458A00);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::Archive, 0x00459E40);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::Unarchive, 0x00459F40);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::Init, 0x00458B80);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::IsLocalChained, 0x00458A10);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::IsLocalControlled, 0x00459DF0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::IsPlayerVob, 0x00459E00);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::SetLocalChained, 0x00458A20);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::SetCtrlPlayer, 0x004599D0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::CopyCtrlState, 0x00459E10);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::Process, 0x00458BA0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::HandOverToPlayer, 0x00458C70);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::CreateNetMessage, 0x004595D0);

} // namespace Gothic_I_Classic
