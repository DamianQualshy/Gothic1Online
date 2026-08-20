namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCEventManager);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCEventManager, &zCEventManager::zCEventManager_OnInit, void(zCEventManager::*)(), 0x00714E70);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCEventManager, &zCEventManager::zCEventManager_OnInit, void(zCEventManager::*)(zCVob*), 0x00714FC0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::KillMessages, 0x007151F0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::ShowMessageCommunication, 0x00715E00);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Print_db, 0x00716920);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::_GetClassDef, 0x00714DC0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Archive, 0x00717090);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Unarchive, 0x007170D0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnTrigger, 0x00716AE0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnUntrigger, 0x00716BB0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnTouch, 0x00716930);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnUntouch, 0x00716A00);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnTouchLevel, 0x00716AD0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnDamage, 0x00716C80);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::OnMessage, 0x00715250);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Clear, 0x00716630);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::IsEmpty, 0x00716850);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetCutsceneMode, 0x00716620);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::SetCutscene, 0x007165A0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetCutscene, 0x00716610);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::IsRunning, 0x007168B0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::SetActive, 0x00716170);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetNumMessages, 0x00459150);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetEventMessage, 0x00716D60);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetActiveMessage, 0x007168E0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::ShowList, 0x00716D70);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::GetNetVobControl, 0x00714DD0);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::RemoveFromList, 0x00716330);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::InsertInList, 0x00716380);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::ProcessMessageList, 0x00716060);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::SendMessageToHost, 0x00715C10);
	ZENGIN_REGISTER_METHOD(zCEventManager, &zCEventManager::Delete, 0x007162F0);

} // namespace Gothic_I_Addon
