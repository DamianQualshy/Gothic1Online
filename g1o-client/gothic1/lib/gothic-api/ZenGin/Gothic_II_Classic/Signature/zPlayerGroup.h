namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCPlayerGroup);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::zCPlayerGroup_OnInit, 0x004659B0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::AddGroupToList, 0x004656D0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::RemoveGroupFromList, 0x00465830);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetFirstPlayer, 0x00465C90);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetNextPlayer, 0x00465CE0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetNextGroup, 0x00465D70);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::AddPlayer, 0x00465DC0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::RemPlayer, 0x00465DF0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::IsMember, 0x00465E70);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetPlayerByID, 0x00465EA0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::ShowDebugInfo, 0x00465F50);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::ResetPlayerList, 0x00466630);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetNearestPlayerToVob, 0x004667D0);

} // namespace Gothic_II_Classic
