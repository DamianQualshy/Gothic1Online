#include "../stdafx.h"

void LauncherRPC::HandleLauncherRPC(CNetwork* network, Packet* packet)
{
	SPDLOG_INFO("Sending server information to launcher...");
	CConfig* cfg = core.GetConfig();
	BitStream s;
	s.Write((MessageID)GO_LAUNCHER);
	s.Write(cfg->GetServerName());
	s.Write(playerManager.GetNumberOfPlayers());
	s.Write(cfg->GetMaxSlots());
	s.Write(core.GetDescription());
	// Retain the legacy launcher field for wire compatibility. Scripts are server-only.
	s.Write(RakString("NO_SCRIPT"));
	s.Write(RakString(versionString));
	s.Write(core.GetWorld());
	network->GetPeer()->Send(&s,MEDIUM_PRIORITY,RELIABLE,0,packet->systemAddress,false);
	//network->GetPeer()->CloseConnection(packet->systemAddress,true);
};
