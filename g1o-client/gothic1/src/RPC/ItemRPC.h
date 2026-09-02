#ifndef ITEMRPC_H
#define ITEMRPC_H

namespace ItemRPC
{
	void HandleItemRPC(CNetwork* network, PacketReader& stream);

	void CreateItem(PacketReader& stream);
	void DestroyItem(PacketReader& stream);
};

#endif //ITEMRPC_H