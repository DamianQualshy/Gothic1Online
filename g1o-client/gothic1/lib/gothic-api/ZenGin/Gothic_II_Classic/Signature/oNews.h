namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(oCNews);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNews, &oCNews::oCNews_OnInit, void(oCNews::*)(), 0x006CC7A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNews, &oCNews::oCNews_OnInit, void(oCNews::*)(int, int, oCNpc*, oCNpc*, oCNpc*, int), 0x006CC940);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::GetID, 0x006CCD30);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::IsIdentical, 0x006CCD40);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::SetSpreadTime, 0x006CCD70);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::GetSpreadTime, 0x006CCDA0);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::SetGossip, 0x006CCDB0);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::IsGossip, 0x006CCDD0);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::IsGuildVictim, 0x006CCDE0);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::GetNewsData, 0x006CCDF0);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::Archive, 0x006CCF00);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::Unarchive, 0x006CD160);

	ZENGIN_REGISTER_CLASS(oCNewsMemory);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::oCNewsMemory_OnInit, 0x006CB4F0);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::Insert, 0x006CB620);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::Remove, 0x006CB700);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::GetNews, 0x006CB780);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::CheckSpreadNews, 0x006CB7C0);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::SearchNews, 0x006CB850);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::ShowDebugInfos, 0x006CB8D0);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::GetNewsByNumber, 0x006CBED0);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::ClearNews, 0x006CBF00);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::DeleteNewsByNumber, 0x006CC010);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::Archive, 0x006CC0B0);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::Unarchive, 0x006CC130);

	ZENGIN_REGISTER_CLASS(oCNewsManager);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::oCNewsManager_OnInit, 0x006CABF0);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::CreateNews, 0x006CAC20);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::SpreadToGuild, 0x006CAF20);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::IsInSpreadList, 0x006CAF40);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::SpreadNews, 0x006CAF70);

} // namespace Gothic_II_Classic
