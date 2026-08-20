namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCPlayerGroup);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::zCPlayerGroup_OnInit, 0x00468910);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::AddGroupToList, 0x00468600);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::RemoveGroupFromList, 0x00468780);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetFirstPlayer, 0x00468C40);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetNextPlayer, 0x00468C80);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetNextGroup, 0x00468D10);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::AddPlayer, 0x00468D60);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::RemPlayer, 0x00468D90);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::IsMember, 0x00468E00);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetPlayerByID, 0x00468E30);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::ShowDebugInfo, 0x00468ED0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::ResetPlayerList, 0x00469610);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetNearestPlayerToVob, 0x00469790);

} // namespace Gothic_I_Addon
