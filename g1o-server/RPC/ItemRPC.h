#ifndef ITEMRPC_H
#define ITEMRPC_H

namespace ItemRPC
{
	void HandleItemRPC(CNetwork* network, HSteamNetConnection connection, PacketReader& stream);

	void CreateItem(HSteamNetConnection connection, PacketReader& stream);
	void DestroyItem(HSteamNetConnection connection, PacketReader& stream);
};

#endif //ITEMRPC_H