namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCPlayerGroup);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::zCPlayerGroup_OnInit, 0x00460FB0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::AddGroupToList, 0x00460CC0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::RemoveGroupFromList, 0x00460E30);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetFirstPlayer, 0x004612B0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetNextPlayer, 0x00461300);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetNextGroup, 0x00461390);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::AddPlayer, 0x004613E0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::RemPlayer, 0x00461410);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::IsMember, 0x00461490);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetPlayerByID, 0x004614C0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::ShowDebugInfo, 0x00461570);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::ResetPlayerList, 0x00461BF0);
	ZENGIN_REGISTER_METHOD(zCPlayerGroup, &zCPlayerGroup::GetNearestPlayerToVob, 0x00461D90);

} // namespace Gothic_I_Classic
