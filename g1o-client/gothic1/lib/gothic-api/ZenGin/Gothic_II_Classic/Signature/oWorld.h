namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCWorld);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::oCWorld_OnInit, 0x0071F340);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::GetWorldName, 0x0042A390);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::GetWorldFilename, 0x00668ED0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::CreateVob_novt, 0x0071F800);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::ClearNpcPerceptionVobLists, 0x00720E30);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::InsertInLists, 0x00720E70);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::RemoveFromLists, 0x00720F50);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::_GetClassDef, 0x0071F500);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::Archive, 0x0071FBD0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::Unarchive, 0x0071FE20);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::LoadWorld, 0x00720100);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SaveWorld, 0x00720010);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::DisposeWorld, 0x00721310);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::AddVobAsChild, 0x007203F0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::RemoveVob, 0x00720680);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SearchVob, 0x00720B30);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SearchVobByID, 0x00720B80);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SearchVobByName, 0x00720BD0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SearchVobListByName, 0x00720C80);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::CreateVob, 0x0071F9B0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::InsertVobInWorld, 0x007208F0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::EnableVob, 0x00720900);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::DisableVob, 0x00720A20);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::TraverseVobList, 0x00720DF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCWorld, &oCWorld::DisposeVobs, int(oCWorld::*)(zCTree<zCVob>*), 0x0061C1D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCWorld, &oCWorld::DisposeVobs, void(oCWorld::*)(), 0x00721190);

	ZENGIN_REGISTER_CLASS(oCWorldTimer);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::oCWorldTimer_OnInit, 0x00721320);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::Timer, 0x00721340);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetDay, 0x00721390);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::SetDay, 0x007213A0);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetTime, 0x007213B0);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::SetTime, 0x00721400);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetFullTime, 0x00721440);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::SetFullTime, 0x00721450);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetTimeString, 0x00721480);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsLater, 0x007216D0);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsLaterEqual, 0x00721710);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsTimeBetween, 0x00721750);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetPassedTime, 0x007217E0);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetSkyTime, 0x00721800);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsDay, 0x00721840);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsNight, 0x007218C0);

} // namespace Gothic_II_Classic
