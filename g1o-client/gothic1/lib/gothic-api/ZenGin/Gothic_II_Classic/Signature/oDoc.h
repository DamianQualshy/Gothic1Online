namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCDoc);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::oCDoc_OnInit, 0x006615F0);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::Show, 0x00661990);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::MapInitCoordinates, 0x006619D0);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::MapDrawCoordinates, 0x00661A30);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::SetLevelName, 0x00661D00);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::HandleEvent, 0x006619A0);

} // namespace Gothic_II_Classic
