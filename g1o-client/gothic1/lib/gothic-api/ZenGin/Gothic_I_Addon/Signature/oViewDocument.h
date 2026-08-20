namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCViewDocument);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewDocument, &oCViewDocument::oCViewDocument_OnInit, void(oCViewDocument::*)(zSTRING&), 0x00762080);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewDocument, &oCViewDocument::oCViewDocument_OnInit, void(oCViewDocument::*)(), 0x007623E0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::GetPage, 0x00762430);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetPages, 0x00762460);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetMargins, 0x007625F0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetFont, 0x00762960);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::PrintLine, 0x00762A20);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::PrintLines, 0x00762AD0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetTexture, 0x00762B80);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::AlignPageToParent, 0x00762C30);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::Center, 0x00762DE0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SizeToContent, 0x00762E50);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SizeToParent, 0x00762EA0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::ScaleToParent, 0x00762EF0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetPage, 0x00762760);

} // namespace Gothic_I_Addon
