namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(oCNews);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNews, &oCNews::oCNews_OnInit, void(oCNews::*)(), 0x00688670);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNews, &oCNews::oCNews_OnInit, void(oCNews::*)(int, int, oCNpc*, oCNpc*, oCNpc*, int), 0x00688830);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::GetID, 0x00688BA0);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::IsIdentical, 0x00688BB0);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::SetSpreadTime, 0x00688BE0);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::GetSpreadTime, 0x00688C10);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::SetGossip, 0x00688C20);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::IsGossip, 0x00688C40);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::IsGuildVictim, 0x00688C50);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::GetNewsData, 0x00688C60);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::Archive, 0x00688D70);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::Unarchive, 0x00688FD0);

	ZENGIN_REGISTER_CLASS(oCNewsMemory);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::oCNewsMemory_OnInit, 0x00687470);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::Insert, 0x006875A0);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::Remove, 0x00687680);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::GetNews, 0x00687700);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::CheckSpreadNews, 0x00687740);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::SearchNews, 0x006877D0);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::ShowDebugInfos, 0x00687850);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::GetNewsByNumber, 0x00687DE0);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::ClearNews, 0x00687E10);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::DeleteNewsByNumber, 0x00687F20);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::Archive, 0x00687FC0);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::Unarchive, 0x00688040);

	ZENGIN_REGISTER_CLASS(oCNewsManager);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::oCNewsManager_OnInit, 0x00686B70);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::CreateNews, 0x00686BA0);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::SpreadToGuild, 0x00686EB0);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::IsInSpreadList, 0x00686ED0);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::SpreadNews, 0x00686F00);

} // namespace Gothic_I_Classic
