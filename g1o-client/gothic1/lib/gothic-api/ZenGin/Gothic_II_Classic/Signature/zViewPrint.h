namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCViewPrint);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::zCViewPrint_OnInit, 0x007A3450);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::SizeHeightToContent, 0x007A3650);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::GetPixelBorder, 0x007A3AD0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::ClearText, 0x007A3B30);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::Print, 0x007A3BC0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::PrintLine, 0x007A3CA0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::PrintLines, 0x007A3E50);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::AddText, 0x007A42C0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::RemoveText, 0x007A43D0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::RemoveAllTexts, 0x007A4430);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::_GetClassDef, 0x007A3520);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::Blit, 0x007A36F0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::BlitText, 0x007A3730);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::BlitTextLine, 0x007A37E0);
	ZENGIN_REGISTER_METHOD(zCViewPrint, &zCViewPrint::BlitTextCharacters, 0x007A38A0);

} // namespace Gothic_II_Classic
