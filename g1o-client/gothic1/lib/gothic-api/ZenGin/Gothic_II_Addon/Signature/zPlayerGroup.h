namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCPlayerGroup);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::zCPlayerGroup_OnInit, 0x004665E0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::AddGroupToList, 0x00466300);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::RemoveGroupFromList, 0x00466460);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetFirstPlayer, 0x004668C0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetNextPlayer, 0x00466910);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetNextGroup, 0x004669A0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::AddPlayer, 0x004669F0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::RemPlayer, 0x00466A20);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::IsMember, 0x00466AA0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetPlayerByID, 0x00466AD0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::ShowDebugInfo, 0x00466B80);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::ResetPlayerList, 0x00467260);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetNearestPlayerToVob, 0x00467400);

} // namespace Gothic_II_Addon
