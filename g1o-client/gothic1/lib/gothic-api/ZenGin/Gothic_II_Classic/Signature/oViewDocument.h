namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCViewDocument);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewDocument, &oCViewDocument::oCViewDocument_OnInit, void(oCViewDocument::*)(zSTRING&), 0x00771240);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewDocument, &oCViewDocument::oCViewDocument_OnInit, void(oCViewDocument::*)(), 0x007715F0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::GetPage, 0x00771640);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetPages, 0x00771670);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetMargins, 0x007717C0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetFont, 0x00771AC0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::PrintLine, 0x00771B80);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::PrintLines, 0x00771C40);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetTexture, 0x00771D00);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::AlignPageToParent, 0x00771D70);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::Center, 0x00771F00);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SizeToContent, 0x00771F70);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SizeToParent, 0x00772020);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::ScaleToParent, 0x00772060);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetPage, 0x00771940);

} // namespace Gothic_II_Classic
