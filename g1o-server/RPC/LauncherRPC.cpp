#include "../stdafx.h"

void LauncherRPC::HandleLauncherRPC(CNetwork* network, HSteamNetConnection connection, PacketReader& packet)
{
	if (!packet.Empty())
		return;

	CConfig* config = core.GetConfig();
	PacketWriter response;
	response.Write(GO_LAUNCHER);
	response.Write(config->GetServerName());
	response.Write(playerManager.GetNumberOfPlayers());
	response.Write(static_cast<std::uint32_t>(std::stoul(config->GetMaxSlots())));
	response.Write(core.GetDescription());
	response.Write(std::string(versionString));
	response.Write(core.GetWorld());
	network->Send(connection, response);
	network->Disconnect(connection, 0, "Launcher query complete", true);
}
