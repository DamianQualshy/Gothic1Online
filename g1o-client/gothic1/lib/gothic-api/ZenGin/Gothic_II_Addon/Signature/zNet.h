namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCNetStatistics);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::zCNetStatistics_OnInit, 0x00452F10);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::AddLostRecv, 0x00452F90);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::AddLostSend, 0x00452FC0);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::AddPacketSend, 0x00452FF0);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::AddPacketRecv, 0x00453010);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::Start, 0x00453030);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::Stop, 0x00453170);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::Print, 0x00453280);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::Reset, 0x004547D0);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::GetSeconds, 0x004547E0);

	ZENGIN_REGISTER_CLASS(zCNet);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::zCNet_OnInit, 0x00450580);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNet, &zCNet::NetReset, int(zCNet::*)(), 0x00450760);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNet, &zCNet::NetReset, int(zCNet::*)(int), 0x00450900);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamListen, 0x00450930);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::Send, 0x00450990);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::DGramWriteMessage, 0x00450B40);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::DGramWriteToPlayer, 0x00450BE0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::DGramWriteToGroup, 0x00451000);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::DGramRead, 0x00451070);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamRead, 0x00451140);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamReadFromPlayer, 0x00451320);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamWriteMessage, 0x00451390);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamWriteToPlayer, 0x00451540);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamWriteToGroup, 0x00451570);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamWriteFile, 0x004515E0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamReadFile, 0x00451AA0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgGetFromStream, 0x004522D0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgPut, 0x004523D0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgGet, 0x00452630);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgSendFromQueue, 0x004526B0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgRecvToQueue, 0x00452760);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::HandleReceiving, 0x004527B0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::HandleSending, 0x00452820);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::Handle, 0x00452A50);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamConnect, 0x00452BA0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamDisconnect, 0x00452BD0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::LockQueues, 0x00452C00);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::WaitForStreamMessage, 0x00452C10);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::GetLocalAddress, 0x00452E70);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::EnableNetwork, 0x00452E80);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::ApplyTimestamp, 0x00452E90);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::CheckTimestamp, 0x00452EE0);

} // namespace Gothic_II_Addon
