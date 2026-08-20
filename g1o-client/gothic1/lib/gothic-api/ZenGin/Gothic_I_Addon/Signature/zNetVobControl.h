namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCNetVobControl);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::zCNetVobControl_OnInit, 0x0045FBB0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::_GetClassDef, 0x0045FB80);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::Archive, 0x004611D0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::Unarchive, 0x004612D0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::Init, 0x0045FD00);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::IsLocalChained, 0x0045FB90);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::IsLocalControlled, 0x00461180);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::IsPlayerVob, 0x00461190);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::SetLocalChained, 0x0045FBA0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::SetCtrlPlayer, 0x00460CE0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::CopyCtrlState, 0x004611A0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::Process, 0x0045FD20);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::HandOverToPlayer, 0x0045FDE0);
	ZENGIN_REGISTER_METHOD(zCNetVobControl, &zCNetVobControl::CreateNetMessage, 0x00460870);

} // namespace Gothic_I_Addon
