namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCDoc);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::oCDoc_OnInit, 0x0065A510);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::Show, 0x0065A8C0);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::MapInitCoordinates, 0x0065A900);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::MapDrawCoordinates, 0x0065A960);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::SetLevelName, 0x0065AC70);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::HandleEvent, 0x0065A8D0);

} // namespace Gothic_I_Addon
