namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCEventMusicControler);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::_GetClassDef, 0x00642B20);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::Archive, 0x00642CE0);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::Unarchive, 0x00642D10);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::MD_GetNumOfSubTypes, 0x00642B30);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::MD_GetSubTypeString, 0x00642BC0);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::MD_GetTimeBehavior, 0x00642CC0);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::MD_GetMinTime, 0x00642CD0);

	ZENGIN_REGISTER_CLASS(zCMusicControler);
	ZENGIN_REGISTER_METHOD(zCMusicControler, &zCMusicControler::zCMusicControler_OnInit, 0x00642D40);
	ZENGIN_REGISTER_METHOD(zCMusicControler, &zCMusicControler::_GetClassDef, 0x00642770);
	ZENGIN_REGISTER_METHOD(zCMusicControler, &zCMusicControler::OnMessage, 0x00642DA0);
	ZENGIN_REGISTER_METHOD(zCMusicControler, &zCMusicControler::ThisVobRemovedFromWorld, 0x00642E00);

} // namespace Gothic_II_Addon
