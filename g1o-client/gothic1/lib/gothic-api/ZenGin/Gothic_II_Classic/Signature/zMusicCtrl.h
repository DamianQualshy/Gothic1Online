namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCEventMusicControler);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::_GetClassDef, 0x00757580);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::Archive, 0x00757740);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::Unarchive, 0x00757770);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::MD_GetNumOfSubTypes, 0x00757590);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::MD_GetSubTypeString, 0x00757620);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::MD_GetTimeBehavior, 0x00757720);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::MD_GetMinTime, 0x00757730);

	ZENGIN_REGISTER_CLASS(zCMusicControler);
	ZENGIN_REGISTER_METHOD(zCMusicControler, &zCMusicControler::zCMusicControler_OnInit, 0x007577A0);
	ZENGIN_REGISTER_METHOD(zCMusicControler, &zCMusicControler::_GetClassDef, 0x007571D0);
	ZENGIN_REGISTER_METHOD(zCMusicControler, &zCMusicControler::OnMessage, 0x00757800);
	ZENGIN_REGISTER_METHOD(zCMusicControler, &zCMusicControler::ThisVobRemovedFromWorld, 0x00757860);

} // namespace Gothic_II_Classic
