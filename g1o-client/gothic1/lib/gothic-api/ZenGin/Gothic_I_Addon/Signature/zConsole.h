namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCConDat);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConDat, &zCConDat::zCConDat_OnInit, void(zCConDat::*)(zSTRING const&, zSTRING const&, int, void*, int), 0x00710350);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConDat, &zCConDat::zCConDat_OnInit, void(zCConDat::*)(zSTRING const&, zSTRING const&, int), 0x00710560);

	ZENGIN_REGISTER_CLASS(zCConsole);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::zCConsole_OnInit, void(zCConsole::*)(), 0x00710880);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::zCConsole_OnInit, void(zCConsole::*)(int, int, zSTRING const&), 0x00710AD0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetAutoCompletion, 0x00710E20);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::HasAutoCompletion, 0x00710E30);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetWorld, 0x00710E40);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::GetWorld, 0x00710E50);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetParser, 0x00710E60);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::GetParser, 0x00710E70);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::AddChar, 0x00710E80);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::InsertVar, 0x00711310);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::Register, void(zCConsole::*)(zSTRING const&, zSTRING const&, int), 0x00711480);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::Register, void(zCConsole::*)(zSTRING const&, zSTRING const&), 0x007115D0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::AutoCompletion, 0x00711720);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetFocus, 0x00711FF0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::RemoveFocus, 0x00712020);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Show, 0x007120D0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Hide, 0x00712350);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Toggle, 0x00712430);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::IsVisible, 0x00712520);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::AddSkip, 0x00712540);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Update, 0x00712580);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::ShowInput, 0x00712BF0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Get, 0x00712D80);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::GetBestMatch, 0x00712F60);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Eval, 0x007131B0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Evaluate, 0x007135D0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetPos, 0x00713C90);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetDim, 0x00713CB0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetFlags, 0x00713CD0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::AddEvalFunc, 0x00713CF0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetChangedFunc, 0x00713D20);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::ShowHelp, 0x00713D30);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SaveInfoFile, 0x00713F90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::EditInstance, int(zCConsole::*)(zSTRING const&, void*), 0x00714470);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::EditInstance, int(zCConsole::*)(int, void*), 0x007144A0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::HandleEvent, 0x00710760);

} // namespace Gothic_I_Addon
