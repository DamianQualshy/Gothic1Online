namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(oCNews);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNews, &oCNews::oCNews_OnInit, void(oCNews::*)(), 0x006B8850);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNews, &oCNews::oCNews_OnInit, void(oCNews::*)(int, int, oCNpc*, oCNpc*, oCNpc*, int), 0x006B8A10);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::GetID, 0x006B8DE0);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::IsIdentical, 0x006B8DF0);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::SetSpreadTime, 0x006B8E20);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::GetSpreadTime, 0x006B8E50);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::SetGossip, 0x006B8E60);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::IsGossip, 0x006B8E80);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::IsGuildVictim, 0x006B8E90);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::GetNewsData, 0x006B8EA0);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::Archive, 0x006B8FB0);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::Unarchive, 0x006B9260);

	ZENGIN_REGISTER_CLASS(oCNewsMemory);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::oCNewsMemory_OnInit, 0x006B7560);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::Insert, 0x006B7690);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::Remove, 0x006B7770);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::GetNews, 0x006B77F0);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::CheckSpreadNews, 0x006B7830);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::SearchNews, 0x006B78C0);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::ShowDebugInfos, 0x006B7940);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::GetNewsByNumber, 0x006B7F40);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::ClearNews, 0x006B7F70);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::DeleteNewsByNumber, 0x006B8070);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::Archive, 0x006B8110);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::Unarchive, 0x006B8190);

	ZENGIN_REGISTER_CLASS(oCNewsManager);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::oCNewsManager_OnInit, 0x006B6BC0);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::CreateNews, 0x006B6BF0);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::SpreadToGuild, 0x006B6F40);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::IsInSpreadList, 0x006B6F60);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::SpreadNews, 0x006B6F90);

} // namespace Gothic_I_Addon
