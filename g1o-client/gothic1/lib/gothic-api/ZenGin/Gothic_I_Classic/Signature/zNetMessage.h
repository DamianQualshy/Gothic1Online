namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCNetMessage);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::zCNetMessage_OnInit, void(zCNetMessage::*)(zTNetMessageHeader&), 0x00456FD0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::zCNetMessage_OnInit, void(zCNetMessage::*)(unsigned long const&, unsigned long), 0x004570A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::zCNetMessage_OnInit, void(zCNetMessage::*)(zTNetPacket*), 0x004571E0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::CopyFrom, 0x00457190);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::Init, 0x00457380);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::Send, 0x00457420);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetTimestamp, 0x00457550);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetTimestamp, 0x00457570);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::SetTarget, void(zCNetMessage::*)(zCPlayerInfo*), 0x00457580);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::SetTarget, void(zCNetMessage::*)(zCPlayerGroup*), 0x004575B0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetTarget, 0x004575E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::Get, unsigned long(zCNetMessage::*)(void*, unsigned long const&), 0x00457600);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::Add, void(zCNetMessage::*)(void*, unsigned long), 0x00457700);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::AddCursorPtr, 0x00457810);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::Add, void(zCNetMessage::*)(zSTRING const&), 0x00457820);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::Get, void(zCNetMessage::*)(zSTRING&), 0x00457880);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::IsStream, 0x00457A00);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetStream, 0x00457A10);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetFileMessage, 0x00457A20);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetFile, 0x00457AB0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::IsFileMessage, 0x00457AF0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::IsMultiMessage, 0x00457B10);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::LogMessage, 0x00457B30);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetLog, 0x00457E40);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetHeader, 0x00457E50);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetHeaderSize, 0x00457E60);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetBuffer, 0x00457E70);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetCursorPtr, 0x00457E80);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetPtr, 0x00457E90);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetDataPtr, 0x00457EA0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::ResetCursorPtr, 0x00457EB0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetMode, 0x00457ED0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetSize, 0x00457EE0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetDataSize, 0x00457EF0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetRestSize, 0x00457F00);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetID, 0x00457F10);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetSenderID, 0x00457F20);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetFlags, 0x00457F30);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::HasError, 0x00457F40);

	ZENGIN_REGISTER_CLASS(zCNetMessageQueue);
	ZENGIN_REGISTER_METHOD(zCNetMessageQueue, &zCNetMessageQueue::zCNetMessageQueue_OnInit, 0x0044BD10);

} // namespace Gothic_I_Classic
