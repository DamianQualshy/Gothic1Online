namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCEventManager);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCEventManager, &zCEventManager::zCEventManager_OnInit, void(zCEventManager::*)(), 0x00726570);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCEventManager, &zCEventManager::zCEventManager_OnInit, void(zCEventManager::*)(zCVob*), 0x007266C0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::KillMessages, 0x007268E0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::ShowMessageCommunication, 0x007273E0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Print_db, 0x00727E10);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::_GetClassDef, 0x007264C0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Archive, 0x007284C0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Unarchive, 0x00728500);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnTrigger, 0x00727FB0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnUntrigger, 0x00728070);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnTouch, 0x00727E20);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnUntouch, 0x00727EE0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnTouchLevel, 0x00727FA0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnDamage, 0x00728130);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnMessage, 0x00726940);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Clear, 0x00727B40);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::IsEmpty, 0x00727D40);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetCutsceneMode, 0x00727B30);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::SetCutscene, 0x00727AB0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetCutscene, 0x00727B20);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::IsRunning, 0x00727DA0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::SetActive, 0x007276D0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetNumMessages, 0x00456CE0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetEventMessage, 0x00728200);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetActiveMessage, 0x00727DD0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::ShowList, 0x00728210);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetNetVobControl, 0x007264D0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::RemoveFromList, 0x00727870);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::InsertInList, 0x007278C0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::ProcessMessageList, 0x007275C0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::SendMessageToHost, 0x00727220);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Delete, 0x00727830);

} // namespace Gothic_II_Classic
