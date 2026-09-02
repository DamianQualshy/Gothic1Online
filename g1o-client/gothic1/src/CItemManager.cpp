#include "stdafx.h"

CItemManager::CItemManager()
{
	itemList.Clear();
};

CItemManager::~CItemManager()
{
	itemList.DeleteContentsAndClear();
};

CItem* CItemManager::GetItem(oCItem* _item)
{
	for( size_t i = 0; i < GetNumberOfItems(); ++i )
		if( itemList[i]->GetGameItem() == _item )
			return itemList[i];
	return NULL;
};

CItem* CItemManager::GetItem(size_t _itemID)
{
	for( size_t i = 0; i < GetNumberOfItems(); ++i )
		if( itemList[i]->GetID() == _itemID )
			return itemList[i];
	return NULL;
};

bool CItemManager::IsItemExist(size_t _itemID)
{
	for( size_t i = 0; i < GetNumberOfItems(); ++i )
		if( itemList[i]->GetID() == _itemID )
			return true;
	return false;
};

oCItem* CItemManager::CreateItem(std::string _itemInstance, zVEC3 _pos, size_t _amount, size_t _itemID)
{
	if( IsItemExist(_itemID) == false )
	{
		oCItem* worldItem = oCObjectFactory::GetFactory()->CreateItem2(zSTRING(_itemInstance.c_str()), _pos, _amount);
		if( worldItem )
		{
			CItem* new_item = new CItem(_itemInstance, worldItem, _amount, _pos, _itemID);
			itemList.PushBack(new_item);
			return worldItem;
		}
	}
	return NULL;
};

bool CItemManager::DestroyItem(size_t _itemID)
{
	CItem* item = GetItem(_itemID);
	if( item )
	{
		itemList.Remove(item);
		delete item;
		return true;
	}
	return false;
};

bool CItemManager::SendDropItem(std::string _itemInstance, zVEC3 _pos, size_t _amount)
{
	CNetwork* net = core.GetNetwork();
	if( net->IsConnected() == true )
	{
		PacketWriter s;
		s.Write((std::uint8_t)GO_ITEM);
		s.Write((std::uint8_t)CREATE_ITEM);
		s.Write(_itemInstance);
		s.Write(static_cast<std::uint32_t>(_amount));
		s.Write(_pos[0]);
		s.Write(_pos[1]);
		s.Write(_pos[2]);
		s.Write(std::string(oCGame::GetGame()->GetGameWorld()->GetWorldName().ToChar()) + ".ZEN");
		if( net->Send(s, k_nSteamNetworkingSend_Reliable) )
			return true;
	}
	return false;
};

bool CItemManager::SendTakeItem(oCItem* item)
{
	if( item )
	{
		CItem* _item = GetItem(item);
		if( _item )
		{
			CNetwork* net = core.GetNetwork();
			if( net->IsConnected() == true )
			{
				PacketWriter s;
				s.Write((std::uint8_t)GO_ITEM);
				s.Write((std::uint8_t)DESTROY_ITEM);
				s.Write(static_cast<std::uint32_t>(_item->GetID()));

				itemList.Remove(_item);
				delete _item;

				if( net->Send(s, k_nSteamNetworkingSend_Reliable) )
					return true;
			}
		}
	}
	return false;
};
