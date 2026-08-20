namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCNetMessage);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::zCNetMessage_OnInit, void(zCNetMessage::*)(zTNetMessageHeader&), 0x0045C070);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::zCNetMessage_OnInit, void(zCNetMessage::*)(unsigned long const&, unsigned long), 0x0045C140);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::zCNetMessage_OnInit, void(zCNetMessage::*)(zTNetPacket*), 0x0045C270);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::CopyFrom, 0x0045C220);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::Init, 0x0045C400);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::Send, 0x0045C4A0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetTimestamp, 0x0045C5D0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetTimestamp, 0x0045C5F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::SetTarget, void(zCNetMessage::*)(zCPlayerInfo*), 0x0045C600);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::SetTarget, void(zCNetMessage::*)(zCPlayerGroup*), 0x0045C630);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetTarget, 0x0045C660);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::Get, unsigned long(zCNetMessage::*)(void*, unsigned long const&), 0x0045C680);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::Add, void(zCNetMessage::*)(void*, unsigned long), 0x0045C780);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::AddCursorPtr, 0x0045C890);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::Add, void(zCNetMessage::*)(zSTRING const&), 0x0045C8A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::Get, void(zCNetMessage::*)(zSTRING&), 0x0045C900);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::IsStream, 0x0045CA80);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetStream, 0x0045CA90);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetFileMessage, 0x0045CAA0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetFile, 0x0045CB30);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::IsFileMessage, 0x0045CB70);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::IsMultiMessage, 0x0045CB90);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::LogMessage, 0x0045CBB0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetLog, 0x0045CF60);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetHeader, 0x0045CF70);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetHeaderSize, 0x0045CF80);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetBuffer, 0x0045CF90);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetCursorPtr, 0x0045CFA0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetPtr, 0x0045CFB0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetDataPtr, 0x0045CFC0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::ResetCursorPtr, 0x0045CFD0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetMode, 0x0045CFF0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetSize, 0x0045D000);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetDataSize, 0x0045D010);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetRestSize, 0x0045D020);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetID, 0x0045D030);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetSenderID, 0x0045D040);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetFlags, 0x0045D050);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::HasError, 0x0045D060);

	ZENGIN_REGISTER_CLASS(zCNetMessageQueue);
	ZENGIN_REGISTER_METHOD(zCNetMessageQueue, &zCNetMessageQueue::zCNetMessageQueue_OnInit, 0x00450490);

} // namespace Gothic_II_Addon
