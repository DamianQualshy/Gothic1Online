namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCEventManager);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCEventManager, &zCEventManager::zCEventManager_OnInit, void(zCEventManager::*)(), 0x006DCCC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCEventManager, &zCEventManager::zCEventManager_OnInit, void(zCEventManager::*)(zCVob*), 0x006DCE10);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::KillMessages, 0x006DD030);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::ShowMessageCommunication, 0x006DDB30);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Print_db, 0x006DE5C0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::_GetClassDef, 0x006DCC10);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Archive, 0x006DEC70);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Unarchive, 0x006DECB0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnTrigger, 0x006DE760);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnUntrigger, 0x006DE820);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnTouch, 0x006DE5D0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnUntouch, 0x006DE690);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnTouchLevel, 0x006DE750);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnDamage, 0x006DE8E0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnMessage, 0x006DD090);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Clear, 0x006DE2F0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::IsEmpty, 0x006DE4F0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetCutsceneMode, 0x006DE2E0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::SetCutscene, 0x006DE260);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetCutscene, 0x006DE2D0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::IsRunning, 0x006DE550);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::SetActive, 0x006DDE20);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetNumMessages, 0x00452600);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetEventMessage, 0x006DE9B0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetActiveMessage, 0x006DE580);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::ShowList, 0x006DE9C0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetNetVobControl, 0x006DCC20);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::RemoveFromList, 0x006DDFE0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::InsertInList, 0x006DE030);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::ProcessMessageList, 0x006DDD10);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::SendMessageToHost, 0x006DD970);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Delete, 0x006DDFA0);

} // namespace Gothic_I_Classic
