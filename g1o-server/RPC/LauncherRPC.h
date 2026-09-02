#ifndef LAUNCHERRPC_H
#define LAUNCHERRPC_H

namespace LauncherRPC
{
	void HandleLauncherRPC(CNetwork* network, HSteamNetConnection connection, PacketReader& packet);
}

#endif
