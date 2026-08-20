namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCViewDocument);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewDocument, &oCViewDocument::oCViewDocument_OnInit, void(oCViewDocument::*)(zSTRING&), 0x00724E90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCViewDocument, &oCViewDocument::oCViewDocument_OnInit, void(oCViewDocument::*)(), 0x00725160);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::GetPage, 0x007251B0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetPages, 0x007251E0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetMargins, 0x00725340);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetFont, 0x007256B0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::PrintLine, 0x00725770);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::PrintLines, 0x00725830);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetTexture, 0x007258F0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::AlignPageToParent, 0x007259A0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::Center, 0x00725B50);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SizeToContent, 0x00725BC0);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SizeToParent, 0x00725C10);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::ScaleToParent, 0x00725C50);
	ZENGIN_REGISTER_METHOD(oCViewDocument, &oCViewDocument::SetPage, 0x007254C0);

} // namespace Gothic_I_Classic
