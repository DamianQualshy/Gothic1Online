namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCEventMusicControler);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::_GetClassDef, 0x00748410);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::Archive, 0x007485E0);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::Unarchive, 0x00748610);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::MD_GetNumOfSubTypes, 0x00748420);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::MD_GetSubTypeString, 0x007484C0);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::MD_GetTimeBehavior, 0x007485C0);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::MD_GetMinTime, 0x007485D0);

	ZENGIN_REGISTER_CLASS(zCMusicControler);
	ZENGIN_REGISTER_METHOD(zCMusicControler, &zCMusicControler::zCMusicControler_OnInit, 0x00748640);
	ZENGIN_REGISTER_METHOD(zCMusicControler, &zCMusicControler::_GetClassDef, 0x00748020);
	ZENGIN_REGISTER_METHOD(zCMusicControler, &zCMusicControler::OnMessage, 0x007486A0);
	ZENGIN_REGISTER_METHOD(zCMusicControler, &zCMusicControler::ThisVobRemovedFromWorld, 0x00748700);

} // namespace Gothic_I_Addon
