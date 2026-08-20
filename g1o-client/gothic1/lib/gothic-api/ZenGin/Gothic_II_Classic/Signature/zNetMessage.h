namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCNetMessage);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::zCNetMessage_OnInit, void(zCNetMessage::*)(zTNetMessageHeader&), 0x0045B920);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::zCNetMessage_OnInit, void(zCNetMessage::*)(unsigned long const&, unsigned long), 0x0045B9F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::zCNetMessage_OnInit, void(zCNetMessage::*)(zTNetPacket*), 0x0045BB20);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::CopyFrom, 0x0045BAD0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::Init, 0x0045BCB0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::Send, 0x0045BD50);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetTimestamp, 0x0045BE80);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetTimestamp, 0x0045BEA0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::SetTarget, void(zCNetMessage::*)(zCPlayerInfo*), 0x0045BEB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::SetTarget, void(zCNetMessage::*)(zCPlayerGroup*), 0x0045BEE0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetTarget, 0x0045BF10);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::Get, unsigned long(zCNetMessage::*)(void*, unsigned long const&), 0x0045BF30);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::Add, void(zCNetMessage::*)(void*, unsigned long), 0x0045C030);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::AddCursorPtr, 0x0045C140);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::Add, void(zCNetMessage::*)(zSTRING const&), 0x0045C150);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::Get, void(zCNetMessage::*)(zSTRING&), 0x0045C1B0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::IsStream, 0x0045C330);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetStream, 0x0045C340);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetFileMessage, 0x0045C350);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetFile, 0x0045C3E0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::IsFileMessage, 0x0045C420);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::IsMultiMessage, 0x0045C440);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::LogMessage, 0x0045C460);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetLog, 0x0045C810);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetHeader, 0x0045C820);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetHeaderSize, 0x0045C830);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetBuffer, 0x0045C840);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetCursorPtr, 0x0045C850);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetPtr, 0x0045C860);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetDataPtr, 0x0045C870);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::ResetCursorPtr, 0x0045C880);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetMode, 0x0045C8A0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetSize, 0x0045C8B0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetDataSize, 0x0045C8C0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetRestSize, 0x0045C8D0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetID, 0x0045C8E0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetSenderID, 0x0045C8F0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetFlags, 0x0045C900);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::HasError, 0x0045C910);

	ZENGIN_REGISTER_CLASS(zCNetMessageQueue);
	ZENGIN_REGISTER_METHOD(zCNetMessageQueue, &zCNetMessageQueue::zCNetMessageQueue_OnInit, 0x0044FD40);

} // namespace Gothic_II_Classic
