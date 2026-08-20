namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCNetStatistics);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::zCNetStatistics_OnInit, 0x00454E20);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::AddLostRecv, 0x00454EA0);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::AddLostSend, 0x00454ED0);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::AddPacketSend, 0x00454F00);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::AddPacketRecv, 0x00454F20);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::Start, 0x00454F40);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::Stop, 0x00455080);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::Print, 0x00455190);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::Reset, 0x00456510);
	ZENGIN_REGISTER_METHOD(zCNetStatistics, &zCNetStatistics::GetSeconds, 0x00456530);

	ZENGIN_REGISTER_CLASS(zCNet);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::zCNet_OnInit, 0x00452380);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNet, &zCNet::NetReset, int(zCNet::*)(), 0x00452580);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCNet, &zCNet::NetReset, int(zCNet::*)(int), 0x00452730);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamListen, 0x00452760);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::Send, 0x004527C0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::DGramWriteMessage, 0x00452970);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::DGramWriteToPlayer, 0x00452A10);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::DGramWriteToGroup, 0x00452E60);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::DGramRead, 0x00452ED0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamRead, 0x00452FB0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamReadFromPlayer, 0x004531B0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamWriteMessage, 0x00453210);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamWriteToPlayer, 0x004533C0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamWriteToGroup, 0x004533F0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamWriteFile, 0x00453460);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamReadFile, 0x00453910);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgGetFromStream, 0x00454190);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgPut, 0x004542B0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgGet, 0x00454510);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgSendFromQueue, 0x00454590);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::MsgRecvToQueue, 0x00454640);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::HandleReceiving, 0x00454690);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::HandleSending, 0x00454700);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::Handle, 0x00454940);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamConnect, 0x00454A90);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::StreamDisconnect, 0x00454AC0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::LockQueues, 0x00454AF0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::WaitForStreamMessage, 0x00454B00);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::GetLocalAddress, 0x00454D90);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::EnableNetwork, 0x00454DA0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::ApplyTimestamp, 0x00454DB0);
	ZENGIN_REGISTER_METHOD(zCNet, &zCNet::CheckTimestamp, 0x00454DF0);

} // namespace Gothic_I_Addon
