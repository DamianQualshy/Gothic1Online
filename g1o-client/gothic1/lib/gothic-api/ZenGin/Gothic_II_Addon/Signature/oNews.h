namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(oCNews);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNews, &oCNews::oCNews_OnInit, void(oCNews::*)(), 0x0072A830);
	ZENGIN_REGISTER_METHOD_EXPLICIT(oCNews, &oCNews::oCNews_OnInit, void(oCNews::*)(int, int, oCNpc*, oCNpc*, oCNpc*, int), 0x0072A9D0);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::GetID, 0x0072ADC0);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::IsIdentical, 0x0072ADD0);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::SetSpreadTime, 0x0072AE00);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::GetSpreadTime, 0x0072AE30);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::SetGossip, 0x0072AE40);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::IsGossip, 0x0072AE60);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::IsGuildVictim, 0x0072AE70);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::GetNewsData, 0x0072AE80);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::Archive, 0x0072AF90);
	ZENGIN_REGISTER_METHOD(oCNews, &oCNews::Unarchive, 0x0072B1F0);

	ZENGIN_REGISTER_CLASS(oCNewsMemory);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::oCNewsMemory_OnInit, 0x00729580);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::Insert, 0x007296B0);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::Remove, 0x00729790);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::GetNews, 0x00729810);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::CheckSpreadNews, 0x00729850);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::SearchNews, 0x007298E0);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::ShowDebugInfos, 0x00729960);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::GetNewsByNumber, 0x00729F60);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::ClearNews, 0x00729F90);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::DeleteNewsByNumber, 0x0072A0A0);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::Archive, 0x0072A140);
	ZENGIN_REGISTER_METHOD(oCNewsMemory, &oCNewsMemory::Unarchive, 0x0072A1C0);

	ZENGIN_REGISTER_CLASS(oCNewsManager);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::oCNewsManager_OnInit, 0x00728C80);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::CreateNews, 0x00728CB0);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::SpreadToGuild, 0x00728FB0);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::IsInSpreadList, 0x00728FD0);
	ZENGIN_REGISTER_METHOD(oCNewsManager, &oCNewsManager::SpreadNews, 0x00729000);

} // namespace Gothic_II_Addon
