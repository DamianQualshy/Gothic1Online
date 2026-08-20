namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCWorld);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::oCWorld_OnInit, 0x0070D630);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::GetWorldName, 0x0042B950);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::GetWorldFilename, 0x006620A0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::CreateVob_novt, 0x0070DB60);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::ClearNpcPerceptionVobLists, 0x0070F180);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::InsertInLists, 0x0070F1C0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::RemoveFromLists, 0x0070F2B0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::_GetClassDef, 0x0070D850);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::Archive, 0x0070DEE0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::Unarchive, 0x0070E120);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::LoadWorld, 0x0070E400);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SaveWorld, 0x0070E300);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::DisposeWorld, 0x0070F690);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::AddVobAsChild, 0x0070E740);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::RemoveVob, 0x0070E9D0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SearchVob, 0x0070EEB0);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SearchVobByID, 0x0070EF00);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SearchVobByName, 0x0070EF50);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::SearchVobListByName, 0x0070F000);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::CreateVob, 0x0070DD30);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::InsertVobInWorld, 0x0070EC40);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::EnableVob, 0x0070EC50);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::DisableVob, 0x0070ED90);
	ZENGIN_REGISTER_METHOD(oCWorld, &oCWorld::TraverseVobList, 0x0070F140);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCWorld, &oCWorld::DisposeVobs, int(oCWorld::*)(zCTree<zCVob>*), 0x00616570);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCWorld, &oCWorld::DisposeVobs, void(oCWorld::*)(), 0x0070F520);

	ZENGIN_REGISTER_CLASS(oCWorldTimer);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::oCWorldTimer_OnInit, 0x0070F6B0);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::Timer, 0x0070F6D0);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetDay, 0x0070F720);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::SetDay, 0x0070F730);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetTime, 0x0070F740);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::SetTime, 0x0070F790);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetFullTime, 0x0070F7D0);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::SetFullTime, 0x0070F7E0);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetTimeString, 0x0070F810);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsLater, 0x0070FA20);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsLaterEqual, 0x0070FA60);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsTimeBetween, 0x0070FAA0);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetPassedTime, 0x0070FB30);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::GetSkyTime, 0x0070FB50);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsDay, 0x0070FB90);
	ZENGIN_REGISTER_METHOD(oCWorldTimer, &oCWorldTimer::IsNight, 0x0070FC10);

} // namespace Gothic_I_Addon
