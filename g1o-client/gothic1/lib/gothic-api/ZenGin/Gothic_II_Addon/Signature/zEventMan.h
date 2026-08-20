namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCEventManager);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCEventManager, &zCEventManager::zCEventManager_OnInit, void(zCEventManager::*)(), 0x00785FB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCEventManager, &zCEventManager::zCEventManager_OnInit, void(zCEventManager::*)(zCVob*), 0x00786100);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::KillMessages, 0x00786320);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::ShowMessageCommunication, 0x00786E20);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Print_db, 0x00787850);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::_GetClassDef, 0x00785F00);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Archive, 0x00787F00);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Unarchive, 0x00787F40);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnTrigger, 0x007879F0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnUntrigger, 0x00787AB0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnTouch, 0x00787860);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnUntouch, 0x00787920);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnTouchLevel, 0x007879E0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnDamage, 0x00787B70);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnMessage, 0x00786380);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Clear, 0x00787580);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::IsEmpty, 0x00787780);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetCutsceneMode, 0x00787570);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::SetCutscene, 0x007874F0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetCutscene, 0x00787560);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::IsRunning, 0x007877E0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::SetActive, 0x00787110);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetNumMessages, 0x00457430);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetEventMessage, 0x00787C40);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetActiveMessage, 0x00787810);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::ShowList, 0x00787C50);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetNetVobControl, 0x00785F10);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::RemoveFromList, 0x007872B0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::InsertInList, 0x00787300);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::ProcessMessageList, 0x00787000);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::SendMessageToHost, 0x00786C60);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Delete, 0x00787270);

} // namespace Gothic_II_Addon
