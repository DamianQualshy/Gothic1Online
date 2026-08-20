namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCConDat);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConDat, &zCConDat::zCConDat_OnInit, void(zCConDat::*)(zSTRING const&, zSTRING const&, int, void*, int), 0x00721F50);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConDat, &zCConDat::zCConDat_OnInit, void(zCConDat::*)(zSTRING const&, zSTRING const&, int), 0x00722170);

	ZENGIN_REGISTER_CLASS(zCConsole);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::zCConsole_OnInit, void(zCConsole::*)(), 0x00722460);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::zCConsole_OnInit, void(zCConsole::*)(int, int, zSTRING const&), 0x00722670);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetAutoCompletion, 0x00722970);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::HasAutoCompletion, 0x00722980);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetWorld, 0x00722990);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::GetWorld, 0x007229A0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetParser, 0x007229B0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::GetParser, 0x007229C0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::AddChar, 0x007229D0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::InsertVar, 0x00722E50);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::Register, void(zCConsole::*)(zSTRING const&, zSTRING const&, int), 0x00722F80);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::Register, void(zCConsole::*)(zSTRING const&, zSTRING const&), 0x007230A0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::AutoCompletion, 0x007231C0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetFocus, 0x00723940);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::RemoveFocus, 0x00723970);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Show, 0x00723A20);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Hide, 0x00723C70);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Toggle, 0x00723D60);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::IsVisible, 0x00723E50);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::AddSkip, 0x00723E70);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Update, 0x00723EA0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::ShowInput, 0x00724540);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Get, 0x007246C0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::GetBestMatch, 0x00724870);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Eval, 0x00724A70);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Evaluate, 0x00724E20);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetPos, 0x007254F0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetDim, 0x00725510);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetFlags, 0x00725530);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::AddEvalFunc, 0x00725540);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetChangedFunc, 0x00725570);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::ShowHelp, 0x00725580);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SaveInfoFile, 0x007257C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::EditInstance, int(zCConsole::*)(zSTRING const&, void*), 0x00725C30);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::EditInstance, int(zCConsole::*)(int, void*), 0x00725C60);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::HandleEvent, 0x00722370);

} // namespace Gothic_II_Classic
