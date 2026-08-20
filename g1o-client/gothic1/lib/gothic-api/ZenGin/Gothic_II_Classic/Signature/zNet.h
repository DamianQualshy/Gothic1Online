namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCNetStatistics);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::zCNetStatistics_OnInit, 0x004527C0);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::AddLostRecv, 0x00452840);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::AddLostSend, 0x00452870);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::AddPacketSend, 0x004528A0);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::AddPacketRecv, 0x004528C0);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::Start, 0x004528E0);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::Stop, 0x00452A20);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::Print, 0x00452B30);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::Reset, 0x00454080);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::GetSeconds, 0x00454090);

	ZENGIN_REGISTER_CLASS(zCNet);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::zCNet_OnInit, 0x0044FE30);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNet, &zCNet::NetReset, int(zCNet::*)(), 0x00450010);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNet, &zCNet::NetReset, int(zCNet::*)(int), 0x004501B0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamListen, 0x004501E0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::Send, 0x00450240);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::DGramWriteMessage, 0x004503F0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::DGramWriteToPlayer, 0x00450490);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::DGramWriteToGroup, 0x004508B0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::DGramRead, 0x00450920);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamRead, 0x004509F0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamReadFromPlayer, 0x00450BD0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamWriteMessage, 0x00450C40);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamWriteToPlayer, 0x00450DF0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamWriteToGroup, 0x00450E20);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamWriteFile, 0x00450E90);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamReadFile, 0x00451350);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgGetFromStream, 0x00451B80);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgPut, 0x00451C80);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgGet, 0x00451EE0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgSendFromQueue, 0x00451F60);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgRecvToQueue, 0x00452010);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::HandleReceiving, 0x00452060);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::HandleSending, 0x004520D0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::Handle, 0x00452300);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamConnect, 0x00452450);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamDisconnect, 0x00452480);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::LockQueues, 0x004524B0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::WaitForStreamMessage, 0x004524C0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::GetLocalAddress, 0x00452720);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::EnableNetwork, 0x00452730);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::ApplyTimestamp, 0x00452740);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::CheckTimestamp, 0x00452790);

} // namespace Gothic_II_Classic
