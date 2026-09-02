#include "../stdafx.h"

#include <cmath>

void ItemRPC::HandleItemRPC(CNetwork* network, HSteamNetConnection connection, PacketReader& stream)
{

	EItemRPC eItemRPC{};
	if (!playerManager.GetPlayer(connection) || !stream.Read(eItemRPC))
		return;
	switch(eItemRPC)
	{
	case CREATE_ITEM: CreateItem(connection,stream); break;
	case DESTROY_ITEM: DestroyItem(connection,stream); break;
	}
};

void ItemRPC::CreateItem(HSteamNetConnection connection, PacketReader& stream)
{
	std::string instanceName;
	unsigned int amount = 0;
	float x = 0.0f, y = 0.0f, z = 0.0f;
	std::string world;

	if (!stream.Read(instanceName, 256) || !stream.Read(amount) || amount == 0 || !stream.Read(x) ||
		!stream.Read(y) || !stream.Read(z) || !stream.Read(world, 1024) || !stream.Empty() ||
		!std::isfinite(x) || !std::isfinite(y) || !std::isfinite(z))
		return;

	CItem* item = itemManager.CreateItem(instanceName,amount,x,y,z,world);
	if( item )
		SEvent::PlayerDropItem(playerManager.GetPlayer(connection)->GetID(), item->GetID(), instanceName.c_str(), amount, world.c_str());
};

void ItemRPC::DestroyItem(HSteamNetConnection connection, PacketReader& stream)
{
	unsigned int itemID = 0;
	if (!stream.Read(itemID) || !stream.Empty())
		return;
	CItem* item = itemManager.GetItem(itemID);
	if( item )
		SEvent::PlayerTakeItem(playerManager.GetPlayer(connection)->GetID(), item->GetID(), item->GetInstance().c_str(), item->GetAmount(), item->GetWorldName().c_str());
	itemManager.DestroyItem(itemID);
};
