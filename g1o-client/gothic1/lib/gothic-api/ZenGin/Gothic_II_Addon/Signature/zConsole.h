namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCConDat);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConDat, &zCConDat::zCConDat_OnInit, void(zCConDat::*)(zSTRING const&, zSTRING const&, int, void*, int), 0x00781990);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConDat, &zCConDat::zCConDat_OnInit, void(zCConDat::*)(zSTRING const&, zSTRING const&, int), 0x00781BB0);

	ZENGIN_REGISTER_CLASS(zCConsole);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::zCConsole_OnInit, void(zCConsole::*)(), 0x00781EA0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::zCConsole_OnInit, void(zCConsole::*)(int, int, zSTRING const&), 0x007820B0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetAutoCompletion, 0x007823B0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::HasAutoCompletion, 0x007823C0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetWorld, 0x007823D0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::GetWorld, 0x007823E0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetParser, 0x007823F0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::GetParser, 0x00782400);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::AddChar, 0x00782410);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::InsertVar, 0x00782890);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::Register, void(zCConsole::*)(zSTRING const&, zSTRING const&, int), 0x007829C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::Register, void(zCConsole::*)(zSTRING const&, zSTRING const&), 0x00782AE0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::AutoCompletion, 0x00782C00);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetFocus, 0x00783380);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::RemoveFocus, 0x007833B0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Show, 0x00783460);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Hide, 0x007836B0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Toggle, 0x007837A0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::IsVisible, 0x00783890);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::AddSkip, 0x007838B0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Update, 0x007838E0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::ShowInput, 0x00783F80);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Get, 0x00784100);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::GetBestMatch, 0x007842B0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Eval, 0x007844B0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Evaluate, 0x00784860);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetPos, 0x00784F30);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetDim, 0x00784F50);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetFlags, 0x00784F70);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::AddEvalFunc, 0x00784F80);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetChangedFunc, 0x00784FB0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::ShowHelp, 0x00784FC0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SaveInfoFile, 0x00785200);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::EditInstance, int(zCConsole::*)(zSTRING const&, void*), 0x00785670);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::EditInstance, int(zCConsole::*)(int, void*), 0x007856A0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::HandleEvent, 0x00781DB0);

} // namespace Gothic_II_Addon
