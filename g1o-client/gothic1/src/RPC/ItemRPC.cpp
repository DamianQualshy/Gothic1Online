#include "..\\stdafx.h"

void ItemRPC::HandleItemRPC(CNetwork* network, PacketReader& stream)
{
	EItemRPC eItemRPC{};
	if (!stream.Read(eItemRPC))
		return;
	switch(eItemRPC)
	{
	case CREATE_ITEM: CreateItem(stream); break;
	case DESTROY_ITEM: DestroyItem(stream); break;
	}
};

void ItemRPC::CreateItem(PacketReader& stream)
{
	SPDLOG_TRACE("ItemRPC::CreateItem()");
	std::uint32_t itemID = 0;
	std::string itemInstance;
	std::uint32_t amount = 0;
	float x = 0.0f, y = 0.0f, z = 0.0f;
	if (!stream.Read(itemID) || !stream.Read(itemInstance, 256) || !stream.Read(amount) || amount == 0 ||
		!stream.Read(x) || !stream.Read(y) || !stream.Read(z) || !stream.Empty())
		return;

	itemManager.CreateItem(itemInstance, zVEC3(x,y,z), amount, itemID);
};

void ItemRPC::DestroyItem(PacketReader& stream)
{
	SPDLOG_TRACE("ItemRPC::DestroyItem()");
	std::uint32_t itemID = 0;
	if (!stream.Read(itemID) || !stream.Empty())
		return;

	itemManager.DestroyItem(itemID);
};
