namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCNetStatistics);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::zCNetStatistics_OnInit, 0x0044E6F0);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::AddLostRecv, 0x0044E770);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::AddLostSend, 0x0044E7A0);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::AddPacketSend, 0x0044E7D0);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::AddPacketRecv, 0x0044E7F0);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::Start, 0x0044E810);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::Stop, 0x0044E950);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::Print, 0x0044EA60);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::Reset, 0x0044FC00);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::GetSeconds, 0x0044FC10);

	ZENGIN_REGISTER_CLASS(zCNet);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::zCNet_OnInit, 0x0044BE10);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNet, &zCNet::NetReset, int(zCNet::*)(), 0x0044BFF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNet, &zCNet::NetReset, int(zCNet::*)(int), 0x0044C190);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamListen, 0x0044C1C0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::Send, 0x0044C220);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::DGramWriteMessage, 0x0044C3D0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::DGramWriteToPlayer, 0x0044C470);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::DGramWriteToGroup, 0x0044C860);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::DGramRead, 0x0044C8D0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamRead, 0x0044C9B0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamReadFromPlayer, 0x0044CBA0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamWriteMessage, 0x0044CC10);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamWriteToPlayer, 0x0044CDC0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamWriteToGroup, 0x0044CDF0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamWriteFile, 0x0044CE60);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamReadFile, 0x0044D2D0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgGetFromStream, 0x0044DAB0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgPut, 0x0044DBB0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgGet, 0x0044DE10);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgSendFromQueue, 0x0044DE90);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgRecvToQueue, 0x0044DF40);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::HandleReceiving, 0x0044DF90);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::HandleSending, 0x0044E000);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::Handle, 0x0044E230);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamConnect, 0x0044E380);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamDisconnect, 0x0044E3B0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::LockQueues, 0x0044E3E0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::WaitForStreamMessage, 0x0044E3F0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::GetLocalAddress, 0x0044E650);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::EnableNetwork, 0x0044E660);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::ApplyTimestamp, 0x0044E670);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::CheckTimestamp, 0x0044E6C0);

} // namespace Gothic_I_Classic
