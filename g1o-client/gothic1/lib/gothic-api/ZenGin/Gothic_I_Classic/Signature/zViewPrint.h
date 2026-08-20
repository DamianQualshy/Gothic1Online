namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCViewPrint);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::zCViewPrint_OnInit, 0x007566D0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::SizeHeightToContent, 0x007568D0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::GetPixelBorder, 0x00756D10);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::ClearText, 0x00756D70);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::Print, 0x00756E00);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::PrintLine, 0x00756EF0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::PrintLines, 0x007570D0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::AddText, 0x00757460);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::RemoveText, 0x00757590);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::RemoveAllTexts, 0x007575F0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::_GetClassDef, 0x007567A0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::Blit, 0x00756970);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::BlitText, 0x007569B0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::BlitTextLine, 0x00756A60);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::BlitTextCharacters, 0x00756B20);

} // namespace Gothic_I_Classic
