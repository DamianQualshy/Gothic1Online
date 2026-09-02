#ifndef SCRIPTRPC_H
#define SCRIPTRPC_H

namespace ScriptRPC
{
	void HandleScriptRPC(CNetwork* network, HSteamNetConnection connection, PacketReader& stream);

	void ScriptVisual(CNetwork* network, PacketReader& stream, HSteamNetConnection connection);
	void ScriptFocus(CNetwork* network, PacketReader& stream, HSteamNetConnection connection);
	void ClientEvent(CNetwork* network, PacketReader& stream, HSteamNetConnection connection);
};

#endif //SCRIPTRPC_H
