namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCViewPrint);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::zCViewPrint_OnInit, 0x00798B50);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::SizeHeightToContent, 0x00798D50);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::GetPixelBorder, 0x007991A0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::ClearText, 0x00799200);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::Print, 0x00799290);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::PrintLine, 0x00799380);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::PrintLines, 0x00799560);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::AddText, 0x00799950);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::RemoveText, 0x00799A80);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::RemoveAllTexts, 0x00799AE0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::_GetClassDef, 0x00798C20);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::Blit, 0x00798DF0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::BlitText, 0x00798E30);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::BlitTextLine, 0x00798EE0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::BlitTextCharacters, 0x00798FB0);

} // namespace Gothic_I_Addon
