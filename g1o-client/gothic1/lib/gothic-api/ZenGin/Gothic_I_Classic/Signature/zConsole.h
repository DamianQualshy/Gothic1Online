namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCConDat);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConDat, &zCConDat::zCConDat_OnInit, void(zCConDat::*)(zSTRING const&, zSTRING const&, int, void*, int), 0x006D8780);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConDat, &zCConDat::zCConDat_OnInit, void(zCConDat::*)(zSTRING const&, zSTRING const&, int), 0x006D89A0);

	ZENGIN_REGISTER_CLASS(zCConsole);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::zCConsole_OnInit, void(zCConsole::*)(), 0x006D8CC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::zCConsole_OnInit, void(zCConsole::*)(int, int, zSTRING const&), 0x006D8F00);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetAutoCompletion, 0x006D9210);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::HasAutoCompletion, 0x006D9220);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetWorld, 0x006D9230);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::GetWorld, 0x006D9240);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetParser, 0x006D9250);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::GetParser, 0x006D9260);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::AddChar, 0x006D9270);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::InsertVar, 0x006D96C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::Register, void(zCConsole::*)(zSTRING const&, zSTRING const&, int), 0x006D9810);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::Register, void(zCConsole::*)(zSTRING const&, zSTRING const&), 0x006D9940);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::AutoCompletion, 0x006D9A70);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetFocus, 0x006DA1F0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::RemoveFocus, 0x006DA220);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Show, 0x006DA2D0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Hide, 0x006DA530);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Toggle, 0x006DA620);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::IsVisible, 0x006DA710);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::AddSkip, 0x006DA730);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Update, 0x006DA760);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::ShowInput, 0x006DACF0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Get, 0x006DAE70);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::GetBestMatch, 0x006DB020);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Eval, 0x006DB220);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::Evaluate, 0x006DB5D0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetPos, 0x006DBC50);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetDim, 0x006DBC70);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetFlags, 0x006DBC90);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::AddEvalFunc, 0x006DBCA0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SetChangedFunc, 0x006DBCD0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::ShowHelp, 0x006DBCE0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::SaveInfoFile, 0x006DBF20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::EditInstance, int(zCConsole::*)(zSTRING const&, void*), 0x006DC390);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCConsole, &zCConsole::EditInstance, int(zCConsole::*)(int, void*), 0x006DC3C0);
	ZENGIN_REGISTER_METHOD(zCConsole, &zCConsole::HandleEvent, 0x006D8BA0);

} // namespace Gothic_I_Classic
