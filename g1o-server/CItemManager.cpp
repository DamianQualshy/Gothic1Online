#include "stdafx.h"

CItemManager::CItemManager()
{
	itemList.Clear();
};

CItemManager::~CItemManager()
{
	itemList.Clear();
};

bool CItemManager::GetFreeID(unsigned int& itemID)
{
	if( GetNumberOfItems() > 0 )
	{
		for( unsigned int i = 0; ; ++i )
		{
			for( unsigned int j = 0; ; ++j )
			{
				if( i == itemList[j]->GetID() )
					break;
				else if( j == GetNumberOfItems() - 1 && i != itemList[j]->GetID() )
				{
					itemID = i;
					return true;
				}
			}
		}
	}
	else
	{
		itemID = 0;
		return true;
	}
	return false;
};

CItem* CItemManager::GetItem(unsigned int _itemID)
{
	if( GetNumberOfItems() > 0 )
	{ 
		for( unsigned int i = 0; i < GetNumberOfItems() ; ++i )
		{
			if( itemList[i]->GetID() == _itemID )
				return itemList[i];
		}
	}
	return NULL;
};

CItem* CItemManager::CreateItem(std::string instance, unsigned int amount, float x, float y, float z, std::string world)
{
	SPDLOG_INFO("Creating item {} amount {} at pos {:f} {:f} {:f}", instance.c_str(), amount, x, y, z);
	unsigned int itemID;
	if( GetFreeID(itemID) == true )
	{
		CItem* item = new CItem(instance,amount,x,y,z,itemID,world);
		if( item )
		{
			itemList.PushBack(item);
			return item;
		}
	}
	return NULL;
};

bool CItemManager::DestroyItem(unsigned int _itemID)
{
	CItem* item = GetItem(_itemID);
	if( item )
	{
		SPDLOG_INFO("Destroying item instance {} id {}", item->GetInstance().c_str(), item->GetID());
		itemList.Remove(item);
		//Usunięcie ze streamera
		for( playerListIter i = playerManager.playerList.begin(); i != playerManager.playerList.end(); ++i )
			DestroyItemForPlayer(item, i->second);
		delete item;
		return true;
	}
	return false;
};

bool CItemManager::CreateItemForPlayer(CItem* item, CPlayer *player)
{
	if( item && player )
	{
		if( player->streamedItems.FindIndex(item) == -1 )
		{
			SPDLOG_INFO("Creating item {} for player {}", item->GetID(), player->name.c_str());
			float x,y,z;
			item->GetPositionXYZ(x,y,z);

			PacketWriter stream;
			stream.Write((std::uint8_t)GO_ITEM);
			stream.Write((std::uint8_t)CREATE_ITEM);
			stream.Write(static_cast<std::uint32_t>(item->GetID()));
			stream.Write(item->GetInstance());
			stream.Write(static_cast<std::uint32_t>(item->GetAmount()));
			stream.Write(x);
			stream.Write(y);
			stream.Write(z);
			
			player->streamedItems.PushBack(item);

			CNetwork* net = core.GetNetwork();
			if( net->Send(player->GetConnection(), stream, k_nSteamNetworkingSend_Reliable) )
				return true;
		}
	}
	return false;
};

bool CItemManager::DestroyItemForPlayer(CItem* item, CPlayer *player)
{
	if( item && player )
	{
		int index = player->streamedItems.FindIndex(item);
		if( index != -1 )
		{
			SPDLOG_INFO("Destroying item {} for player {}", item->GetID(), player->name.c_str());
			PacketWriter stream;
			stream.Write((std::uint8_t)GO_ITEM);
			stream.Write((std::uint8_t)DESTROY_ITEM);
			stream.Write(static_cast<std::uint32_t>(item->GetID()));

			player->streamedItems.RemoveIndex(index);

			CNetwork* net = core.GetNetwork();
			if( net->Send(player->GetConnection(), stream, k_nSteamNetworkingSend_Reliable) )
				return true;
		}
	}
	return false;
};
