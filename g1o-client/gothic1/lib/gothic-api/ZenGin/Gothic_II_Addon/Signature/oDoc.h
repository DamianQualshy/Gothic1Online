namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCDoc);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::oCDoc_OnInit, 0x006BDF80);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::Show, 0x006BE320);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::MapInitCoordinates, 0x006BE360);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::MapDrawCoordinates, 0x006BE3C0);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::SetLevelName, 0x006BE690);
	ZENGIN_REGISTER_METHOD(oCDoc, &oCDoc::HandleEvent, 0x006BE330);

} // namespace Gothic_II_Addon
