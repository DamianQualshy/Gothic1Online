namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCViewDocument);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewDocument, &oCViewDocument::oCViewDocument_OnInit, void(oCViewDocument::*)(zSTRING&), 0x0068C2C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewDocument, &oCViewDocument::oCViewDocument_OnInit, void(oCViewDocument::*)(), 0x0068C620);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::GetPage, 0x0068C670);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetPages, 0x0068C6A0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetMargins, 0x0068C7F0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetFont, 0x0068CAF0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::PrintLine, 0x0068CBB0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::PrintLines, 0x0068CC70);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetTexture, 0x0068CD30);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::AlignPageToParent, 0x0068CDA0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::Center, 0x0068CF30);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SizeToContent, 0x0068CFA0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SizeToParent, 0x0068D050);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::ScaleToParent, 0x0068D090);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetPage, 0x0068C970);

} // namespace Gothic_II_Addon
