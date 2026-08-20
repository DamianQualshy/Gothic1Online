namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCWorld);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::oCWorld_OnInit, 0x0077ED80);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::GetWorldName, 0x0042A6B0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::GetWorldFilename, 0x0068DE60);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::CreateVob_novt, 0x0077F240);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::ClearNpcPerceptionVobLists, 0x00780870);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::InsertInLists, 0x007808B0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::RemoveFromLists, 0x00780990);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::_GetClassDef, 0x0077EF40);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::Archive, 0x0077F610);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::Unarchive, 0x0077F860);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::LoadWorld, 0x0077FB40);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SaveWorld, 0x0077FA50);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::DisposeWorld, 0x00780D50);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::AddVobAsChild, 0x0077FE30);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::RemoveVob, 0x007800C0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SearchVob, 0x00780570);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SearchVobByID, 0x007805C0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SearchVobByName, 0x00780610);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SearchVobListByName, 0x007806C0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::CreateVob, 0x0077F3F0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::InsertVobInWorld, 0x00780330);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::EnableVob, 0x00780340);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::DisableVob, 0x00780460);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::TraverseVobList, 0x00780830);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCWorld, &oCWorld::DisposeVobs, int(oCWorld::*)(zCTree<zCVob>*), 0x00623960);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCWorld, &oCWorld::DisposeVobs, void(oCWorld::*)(), 0x00780BD0);

	ZENGIN_REGISTER_CLASS(oCWorldTimer);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::oCWorldTimer_OnInit, 0x00780D60);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::Timer, 0x00780D80);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetDay, 0x00780DD0);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::SetDay, 0x00780DE0);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetTime, 0x00780DF0);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::SetTime, 0x00780E40);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetFullTime, 0x00780E80);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::SetFullTime, 0x00780E90);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetTimeString, 0x00780EC0);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsLater, 0x00781110);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsLaterEqual, 0x00781150);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsTimeBetween, 0x00781190);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetPassedTime, 0x00781220);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetSkyTime, 0x00781240);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsDay, 0x00781280);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsNight, 0x00781300);

} // namespace Gothic_II_Addon
