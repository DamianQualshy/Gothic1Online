namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCViewPrint);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::zCViewPrint_OnInit, 0x00693200);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::SizeHeightToContent, 0x00693400);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::GetPixelBorder, 0x00693880);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::ClearText, 0x006938E0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::Print, 0x00693970);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::PrintLine, 0x00693A50);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::PrintLines, 0x00693C00);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::AddText, 0x00694070);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::RemoveText, 0x00694180);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::RemoveAllTexts, 0x006941E0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::_GetClassDef, 0x006932D0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::Blit, 0x006934A0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::BlitText, 0x006934E0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::BlitTextLine, 0x00693590);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::BlitTextCharacters, 0x00693650);

} // namespace Gothic_II_Addon
