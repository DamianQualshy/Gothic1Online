namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCWorld);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::oCWorld_OnInit, 0x006D5C80);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::GetWorldName, 0x00428B00);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::GetWorldFilename, 0x0063B680);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::CreateVob_novt, 0x006D6190);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::ClearNpcPerceptionVobLists, 0x006D7630);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::InsertInLists, 0x006D7670);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::RemoveFromLists, 0x006D7750);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::_GetClassDef, 0x006D5EA0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::Archive, 0x006D64D0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::Unarchive, 0x006D6700);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::LoadWorld, 0x006D69B0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SaveWorld, 0x006D68C0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::DisposeWorld, 0x006D7B10);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::AddVobAsChild, 0x006D6CA0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::RemoveVob, 0x006D6EF0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SearchVob, 0x006D7360);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SearchVobByID, 0x006D73B0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SearchVobByName, 0x006D7400);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SearchVobListByName, 0x006D74B0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::CreateVob, 0x006D6340);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::InsertVobInWorld, 0x006D7120);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::EnableVob, 0x006D7130);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::DisableVob, 0x006D7250);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::TraverseVobList, 0x006D75F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCWorld, &oCWorld::DisposeVobs, int(oCWorld::*)(zCTree<zCVob>*), 0x005F55F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCWorld, &oCWorld::DisposeVobs, void(oCWorld::*)(), 0x006D7990);

	ZENGIN_REGISTER_CLASS(oCWorldTimer);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::oCWorldTimer_OnInit, 0x006D7B20);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::Timer, 0x006D7B40);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetDay, 0x006D7B90);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::SetDay, 0x006D7BA0);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetTime, 0x006D7BB0);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::SetTime, 0x006D7C00);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetFullTime, 0x006D7C40);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::SetFullTime, 0x006D7C50);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetTimeString, 0x006D7C80);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsLater, 0x006D7E60);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsLaterEqual, 0x006D7EA0);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsTimeBetween, 0x006D7EE0);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetPassedTime, 0x006D7F70);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetSkyTime, 0x006D7F90);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsDay, 0x006D7FD0);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsNight, 0x006D8050);

} // namespace Gothic_I_Classic
