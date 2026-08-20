namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCDoc);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::oCDoc_OnInit, 0x006343C0);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::Show, 0x00634760);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::MapInitCoordinates, 0x006347A0);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::MapDrawCoordinates, 0x00634800);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::SetLevelName, 0x00634AE0);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::HandleEvent, 0x00634770);

} // namespace Gothic_I_Classic
