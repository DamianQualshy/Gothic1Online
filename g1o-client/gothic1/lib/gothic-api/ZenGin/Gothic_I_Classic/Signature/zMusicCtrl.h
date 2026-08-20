namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCEventMusicControler);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::_GetClassDef, 0x0070D2D0);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::Archive, 0x0070D490);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::Unarchive, 0x0070D4C0);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::MD_GetNumOfSubTypes, 0x0070D2E0);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::MD_GetSubTypeString, 0x0070D370);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::MD_GetTimeBehavior, 0x0070D470);
	ZENGIN_REGISTER_METHOD(zCEventMusicControler, &zCEventMusicControler::MD_GetMinTime, 0x0070D480);

	ZENGIN_REGISTER_CLASS(zCMusicControler);
	ZENGIN_REGISTER_METHOD(zCMusicControler, &zCMusicControler::zCMusicControler_OnInit, 0x0070D4F0);
	ZENGIN_REGISTER_METHOD(zCMusicControler, &zCMusicControler::_GetClassDef, 0x0070CF00);
	ZENGIN_REGISTER_METHOD(zCMusicControler, &zCMusicControler::OnMessage, 0x0070D550);
	ZENGIN_REGISTER_METHOD(zCMusicControler, &zCMusicControler::ThisVobRemovedFromWorld, 0x0070D5B0);

} // namespace Gothic_I_Classic
