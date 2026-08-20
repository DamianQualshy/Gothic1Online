namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCNetMessage);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::zCNetMessage_OnInit, void(zCNetMessage::*)(zTNetMessageHeader&), 0x0045DFB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::zCNetMessage_OnInit, void(zCNetMessage::*)(unsigned long const&, unsigned long), 0x0045E080);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::zCNetMessage_OnInit, void(zCNetMessage::*)(zTNetPacket*), 0x0045E1C0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::CopyFrom, 0x0045E170);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::Init, 0x0045E380);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::Send, 0x0045E420);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetTimestamp, 0x0045E560);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetTimestamp, 0x0045E580);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::SetTarget, void(zCNetMessage::*)(zCPlayerInfo*), 0x0045E590);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::SetTarget, void(zCNetMessage::*)(zCPlayerGroup*), 0x0045E5C0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetTarget, 0x0045E5F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::Get, unsigned long(zCNetMessage::*)(void*, unsigned long const&), 0x0045E610);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::Add, void(zCNetMessage::*)(void*, unsigned long), 0x0045E720);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::AddCursorPtr, 0x0045E840);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::Add, void(zCNetMessage::*)(zSTRING const&), 0x0045E850);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNetMessage, &zCNetMessage::Get, void(zCNetMessage::*)(zSTRING&), 0x0045E8B0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::IsStream, 0x0045EA40);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetStream, 0x0045EA50);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetFileMessage, 0x0045EA60);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetFile, 0x0045EB00);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::IsFileMessage, 0x0045EB40);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::IsMultiMessage, 0x0045EB60);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::LogMessage, 0x0045EB80);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetLog, 0x0045EF00);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetHeader, 0x0045EF10);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetHeaderSize, 0x0045EF20);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetBuffer, 0x0045EF30);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetCursorPtr, 0x0045EF40);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetPtr, 0x0045EF50);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetDataPtr, 0x0045EF60);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::ResetCursorPtr, 0x0045EF70);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::SetMode, 0x0045EF90);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetSize, 0x0045EFA0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetDataSize, 0x0045EFB0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetRestSize, 0x0045EFC0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetID, 0x0045EFD0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetSenderID, 0x0045EFE0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::GetFlags, 0x0045EFF0);
	ZENGIN_REGISTER_METHOD(zCNetMessage, &zCNetMessage::HasError, 0x0045F000);

	ZENGIN_REGISTER_CLASS(zCNetMessageQueue);
	ZENGIN_REGISTER_METHOD(zCNetMessageQueue, &zCNetMessageQueue::zCNetMessageQueue_OnInit, 0x00452280);

} // namespace Gothic_I_Addon
