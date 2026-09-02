#include "../stdafx.h"

#include <cmath>

void PlayerRPC::HandlePlayerRPC(CNetwork* network, HSteamNetConnection connection, PacketReader& stream)
{

	EPlayerRPC ePlayerRPC{};
	if (!playerManager.GetPlayer(connection) || !stream.Read(ePlayerRPC))
		return;

	switch(ePlayerRPC)
	{
	case SET_POSITION: 
		SetPosition(connection,stream); break;
	case SET_ROTATION:
		SetAngle(connection,stream); break;
	case CHANGE_WEAPONMODE:
		ChangeWeaponMode(connection,stream); break;
	case PLAY_ANIMATION:
		PlayAnimation(connection,stream); break;
	case WEAR_ARMOR:
		WearArmor(connection,stream); break;
	case EQUIP_WEAPON:
		EquipWeapon(connection,stream); break;
	case CHANGE_INSTANCE:
		ChangeInstance(connection,stream); break;
	case ITEM_HAND:
		ItemHand(connection, stream); break;
	case CHANGE_LEVEL:
		ChangeLevel(connection, stream); break;
	case ENTER_WORLD:
		if (stream.Empty()) EnterWorld(connection); break;
	case SET_HEALTH:
		SetHealth(connection,stream); break;
	case SET_HEALTH_MAX:
		SetHealthMax(connection,stream); break;
	case ATTACK_HIT:
		AttackHit(connection,stream); break;
	case ATTACK_DEAD:
		AttackDead(connection,stream); break;
	case ATTACK_UNCONSCIOUS:
		AttackUnconscious(connection,stream); break;
	case STAND_UP:
		StandUp(connection,stream); break;
	case MAGIC_SETUP:
		MagicSetup(connection,stream); break;
	case MAGIC_ATTACK:
		MagicAttack(connection,stream); break;
	//case SET_PROTECTION:
		//SetProtection(connection, stream); break;
	//case SET_SKILLWEAPON:
		//SetSkillWeapon(connection, stream); break;
	case SET_OVERLAY:
		SetOverlay(connection, stream); break;
	case SET_TIMED_OVERLAY:
		SetTimedOverlay(connection, stream); break;
	case MOB_TRIGGER:
		MobTrigger(connection, stream); break;
	case SHOOT_ARROW:
		ShootArrow(connection, stream); break;
	}
};

void PlayerRPC::SetPosition(HSteamNetConnection connection, PacketReader& stream)
{
	CPlayer* player = playerManager.GetPlayer(connection);
	float x = 0.0f, y = 0.0f, z = 0.0f;
	if (player && player->bConnected && player->spawned && stream.Read(x) && stream.Read(y) && stream.Read(z) &&
		stream.Empty() && std::isfinite(x) && std::isfinite(y) && std::isfinite(z))
	{
		player->x = x;
		player->y = y;
		player->z = z;
		
		PacketWriter wStream;
		wStream.Write((std::uint8_t)GO_PLAYER);
		wStream.Write((std::uint8_t)SET_POSITION);
		wStream.Write(player->playerId);
		wStream.Write(player->x);
		wStream.Write(player->y);
		wStream.Write(player->z);

		core.GetNetwork()->SendToPlayersOnList(wStream, &player->streamedPlayers, k_nSteamNetworkingSend_UnreliableNoDelay);
	}
};

void PlayerRPC::SetAngle(HSteamNetConnection connection, PacketReader& stream)
{
	CPlayer* player = playerManager.GetPlayer(connection);

	float angle = 0.0f;
	if (player && player->bConnected && player->spawned && stream.Read(angle) && stream.Empty() && std::isfinite(angle))
	{
		player->angle = angle;

		PacketWriter wStream;
		wStream.Write((std::uint8_t)GO_PLAYER);
		wStream.Write((std::uint8_t)SET_ROTATION);
		wStream.Write(player->playerId);
		wStream.Write(player->angle);

		core.GetNetwork()->SendToPlayersOnList(wStream, &player->streamedPlayers, k_nSteamNetworkingSend_UnreliableNoDelay);
	}
};

void PlayerRPC::ChangeWeaponMode(HSteamNetConnection connection, PacketReader& stream)
{
	//SPDLOG_TRACE("PlayerRPC::ChangeWeaponMode");
	CPlayer* player = playerManager.GetPlayer(connection);

	int weaponMode = 0;
	if (player && player->bConnected && player->spawned && stream.Read(weaponMode) && stream.Empty())
	{
		player->weaponMode = weaponMode;

		PacketWriter wStream;
		wStream.Write((std::uint8_t)GO_PLAYER);
		wStream.Write((std::uint8_t)CHANGE_WEAPONMODE);
		wStream.Write(player->playerId);
		wStream.Write(player->weaponMode);

		core.GetNetwork()->SendToPlayersOnList(wStream, &player->streamedPlayers, k_nSteamNetworkingSend_Reliable);
	}
};

void PlayerRPC::PlayAnimation(HSteamNetConnection connection, PacketReader& stream)
{
	CPlayer* player = playerManager.GetPlayer(connection);

	int animationId = 0;
	if (player && player->spawned && stream.Read(animationId) && stream.Empty())
	{
		player->animationId = animationId;

		PacketWriter wStream;
		wStream.Write((std::uint8_t)GO_PLAYER);
		wStream.Write((std::uint8_t)PLAY_ANIMATION);
		wStream.Write(player->playerId);
		wStream.Write(player->animationId);

		core.GetNetwork()->SendToPlayersOnList(wStream, &player->streamedPlayers, k_nSteamNetworkingSend_Reliable);
	}
};

void PlayerRPC::WearArmor(HSteamNetConnection connection, PacketReader& stream)
{
	//SPDLOG_TRACE("PlayerRPC::WearArmor");
	CPlayer* player = playerManager.GetPlayer(connection);
	std::string armor;
	if (player && player->bConnected && player->spawned && stream.Read(armor, 256) && stream.Empty())
	{
		player->armorInstance = std::move(armor);

		PacketWriter wStream;
		wStream.Write((std::uint8_t)GO_PLAYER);
		wStream.Write((std::uint8_t)WEAR_ARMOR);
		wStream.Write(player->playerId);
		wStream.Write(player->armorInstance);

		core.GetNetwork()->SendToPlayersOnList(wStream, &player->streamedPlayers, k_nSteamNetworkingSend_Reliable);
	};
};

void PlayerRPC::EquipWeapon(HSteamNetConnection connection, PacketReader& stream)
{
	//SPDLOG_TRACE("PlayerRPC::EquipWeapon");
	CPlayer* player = playerManager.GetPlayer(connection);
	int weaponType = 0;
	std::string instance;
	if (player && player->bConnected && player->spawned && stream.Read(weaponType) &&
		(weaponType == 1 || weaponType == 2) && stream.Read(instance, 256) && stream.Empty())
	{
		PacketWriter wStream;
		wStream.Write((std::uint8_t)GO_PLAYER);
		wStream.Write((std::uint8_t)EQUIP_WEAPON);
		wStream.Write(player->playerId);
		wStream.Write(weaponType);
		if(weaponType == 1)
		{
			player->meleeWeaponInstance = instance;
			wStream.Write(player->meleeWeaponInstance);
			//SPDLOG_TRACE("{} Equip {}", player->name.c_str(), player->meleeWeaponInstance.c_str());
		}
		else if( weaponType == 2 )
		{
			player->rangedWeaponInstance = instance;
			wStream.Write(player->rangedWeaponInstance);
			//SPDLOG_TRACE("{} Equip {}", player->name.c_str(), player->rangedWeaponInstance.c_str());
		}
		
		core.GetNetwork()->SendToPlayersOnList(wStream, &player->streamedPlayers, k_nSteamNetworkingSend_Reliable);
		
	}
};

void PlayerRPC::ChangeInstance(HSteamNetConnection connection, PacketReader& stream)
{
	//SPDLOG_TRACE("PlayerRPC::ChangeInstance");
	CPlayer* player = playerManager.GetPlayer(connection);
	std::string instance;
	if (player && player->bConnected && player->spawned && stream.Read(instance, 256) && stream.Empty())
	{
		player->instance = std::move(instance);


		PacketWriter wStream;
		wStream.Write((std::uint8_t)GO_PLAYER);
		wStream.Write((std::uint8_t)CHANGE_INSTANCE);
		wStream.Write(player->playerId);
		wStream.Write(player->instance);

		core.GetNetwork()->SendToPlayersOnList(wStream, &player->streamedPlayers, k_nSteamNetworkingSend_Reliable);

	}
};

void PlayerRPC::ItemHand(HSteamNetConnection connection, PacketReader& stream)
{
	CPlayer* player = playerManager.GetPlayer(connection);
	int hand = 0;
	std::string handItem;
	if (player && player->bConnected && player->spawned && stream.Read(hand) && (hand == 1 || hand == 2) &&
		stream.Read(handItem, 256) && stream.Empty())
	{
		if( hand == 1 )
		{
			player->leftHand = handItem;
			//SPDLOG_TRACE("Player {} changed his left hand to {}", player->name.c_str(), player->leftHand.c_str());
		}
		else if( hand == 2 )
		{
			player->rightHand = handItem;
			//SPDLOG_TRACE("Player {} changed his right hand to {}", player->name.c_str(), player->rightHand.c_str());
		}

		PacketWriter wStream;
		wStream.Write((std::uint8_t)GO_PLAYER);
		wStream.Write((std::uint8_t)ITEM_HAND);
		wStream.Write(player->playerId);
		wStream.Write(hand);
		wStream.Write(handItem);

		core.GetNetwork()->SendToPlayersOnList(wStream, &player->streamedPlayers, k_nSteamNetworkingSend_Reliable);

	}
};

void PlayerRPC::ChangeLevel(HSteamNetConnection connection, PacketReader& stream)
{

	//SPDLOG_TRACE("PlayerRPC::ChangeLevel");
	CPlayer* player = playerManager.GetPlayer(connection);
	std::string world;

	if (player && player->bConnected && player->spawned && stream.Read(world, 1024) && stream.Empty())
	{
		PacketWriter s;
		s.Write((std::uint8_t)GO_PLAYER);
		s.Write((std::uint8_t)DESTROY_PLAYER);
		s.Write(player->GetID());
		core.GetNetwork()->SendToPlayersOnList(s, &player->streamedPlayers, k_nSteamNetworkingSend_Reliable);

		for (int i = 0; i < player->streamedPlayers.Num(); ++i)
			player->streamedPlayers[i]->streamedPlayers.Remove(player);

		player->streamedPlayers.Clear();

		player->spawned = false;
		player->world = std::move(world);
	}
};

void PlayerRPC::EnterWorld(HSteamNetConnection connection)
{
	//SPDLOG_TRACE("PlayerRPC::EnterWorld");
	CPlayer* player = playerManager.GetPlayer(connection);
	if( player && player->bConnected == true && player->spawned == false )
	{
		player->spawned = true;

		for (int i = 0; i < core.mobList.Num(); ++i)
		{
			SMobTrigger mob = core.mobList.GetElementByIndex(i);
			if (mob.world == player->world)
			{
				PacketWriter s;
				s.Write((std::uint8_t)GO_PLAYER);
				s.Write((std::uint8_t)MOB_TRIGGER);
				s.Write(-1);
				s.Write(true);
				s.Write(mob.x);
				s.Write(mob.y);
				s.Write(mob.z);

				core.GetNetwork()->Send(connection, s, k_nSteamNetworkingSend_Reliable);
			}
		}
	}
};

void PlayerRPC::SetHealth(HSteamNetConnection connection, PacketReader& stream)
{
	CPlayer* player = playerManager.GetPlayer(connection);
	int health = 0;

	if (player && player->bConnected && player->spawned && stream.Read(health) && stream.Empty() && health >= 0)
	{
		if (health == 0 && !player->isDead)
		{
			SEvent::PlayerDeath(player->GetID(), -1);
			player->isDead = true;
		}
		if (player->health == 0 && health > 0)
		{
			SEvent::PlayerRespawn(player->GetID());
			player->isDead = false;
			player->isUnconscious = false;
		}
			
		player->health = health;

		PacketWriter s;
		s.Write((std::uint8_t)GO_PLAYER);
		s.Write((std::uint8_t)SET_HEALTH);
		s.Write(player->GetID());
		s.Write(player->health);

		core.GetNetwork()->SendToPlayersOnList(s, &player->streamedPlayers, k_nSteamNetworkingSend_Reliable);
	}
};

void PlayerRPC::SetHealthMax(HSteamNetConnection connection, PacketReader& stream)
{
	CPlayer* player = playerManager.GetPlayer(connection);
	int maxHealth = 0;

	if (player && player->bConnected && player->spawned && stream.Read(maxHealth) && stream.Empty() && maxHealth > 0)
	{
		player->maxhealth = maxHealth;

		PacketWriter s;
		s.Write((std::uint8_t)GO_PLAYER);
		s.Write((std::uint8_t)SET_HEALTH_MAX);
		s.Write(player->GetID());
		s.Write(player->maxhealth);

		core.GetNetwork()->SendToPlayersOnList(s, &player->streamedPlayers, k_nSteamNetworkingSend_Reliable);
	}
};

void PlayerRPC::AttackHit(HSteamNetConnection connection, PacketReader& stream)
{
	int focusID = -1;
	int minushp = 0;
	if (!stream.Read(focusID) || !stream.Read(minushp) || !stream.Empty() || minushp < 0)
		return;
	CPlayer* player = playerManager.GetPlayer(connection);
	CPlayer* focusPlayer = playerManager.GetPlayer(focusID);
	if( player && player->bConnected == true && player->spawned == true )
	{
		if (focusPlayer && focusPlayer->bConnected == true && focusPlayer->spawned == true)
		{
			int range = -1;
			// Calculate range
			{
				int rangeRight, rangeLeft;
				if (player->angle >= focusPlayer->angle)
				{
					rangeRight = player->angle - focusPlayer->angle;
					rangeLeft = (focusPlayer->angle + 360) - player->angle;
				}
				else
				{
					rangeRight = focusPlayer->angle - player->angle;
					rangeLeft = (player->angle + 360) - focusPlayer->angle;
				}

				rangeRight <= rangeLeft ? range = rangeRight : range = rangeLeft;
			}
			
			// Block on server side
			if (focusPlayer->animationId != 392 && focusPlayer->animationId != 447 && focusPlayer->animationId != 791 ||
			   (focusPlayer->animationId == 392 || focusPlayer->animationId == 447 || focusPlayer->animationId == 791) &&
				range <= 100)
			{
				SEvent::PlayerHit(player->GetID(), focusID);

				PacketWriter s;
				s.Write((std::uint8_t)GO_PLAYER);
				s.Write((std::uint8_t)ATTACK_HIT);
				s.Write(player->playerId);
				s.Write(minushp);

				core.GetNetwork()->Send(focusPlayer->GetConnection(), s, k_nSteamNetworkingSend_Reliable);
			}
			else
			{
				PacketWriter s;
				s.Write((std::uint8_t)GO_PLAYER);
				s.Write((std::uint8_t)SET_HEALTH);
				s.Write(focusPlayer->playerId);
				s.Write(focusPlayer->health);
				core.GetNetwork()->Send(player->GetConnection(), s, k_nSteamNetworkingSend_Reliable);
			}
		}
	}
};

void PlayerRPC::AttackDead(HSteamNetConnection connection, PacketReader& stream)
{
	int focusID = -1;
	if (!stream.Read(focusID) || !stream.Empty())
		return;
	CPlayer* focusPlayer = playerManager.GetPlayer(focusID);
	CPlayer* killerPlayer = playerManager.GetPlayer(connection);
	if (focusPlayer && focusPlayer->bConnected && focusPlayer->spawned && !focusPlayer->isDead &&
		killerPlayer && killerPlayer->bConnected && killerPlayer->spawned && !killerPlayer->isDead)
	{
		focusPlayer->isDead = true;
		SEvent::PlayerDeath(focusPlayer->GetID(), killerPlayer->GetID());

		PacketWriter s;
		s.Write((std::uint8_t)GO_PLAYER);
		s.Write((std::uint8_t)ATTACK_DEAD);

		core.GetNetwork()->Send(focusPlayer->GetConnection(), s, k_nSteamNetworkingSend_Reliable);
	}
	else if (killerPlayer && focusPlayer && killerPlayer->isDead)
	{
		PacketWriter s;
		s.Write((std::uint8_t)GO_PLAYER);
		s.Write((std::uint8_t)FORCE_STANDUP);
		s.Write(focusID);
		s.Write(focusPlayer->health);

		core.GetNetwork()->Send(connection, s, k_nSteamNetworkingSend_Reliable);
	}
};

void PlayerRPC::AttackUnconscious(HSteamNetConnection connection, PacketReader& stream)
{
	int focusID = -1;
	if (!stream.Read(focusID) || !stream.Empty())
		return;

	CPlayer* focusPlayer = playerManager.GetPlayer(focusID);
	CPlayer* killerPlayer = playerManager.GetPlayer(connection);

	if (focusPlayer && focusPlayer->bConnected && focusPlayer->spawned && !focusPlayer->isUnconscious &&
		killerPlayer && killerPlayer->bConnected && killerPlayer->spawned && !killerPlayer->isUnconscious)
	{
		focusPlayer->isUnconscious = true;
		SEvent::PlayerUnconscious(focusPlayer->GetID(), playerManager.GetPlayer(connection)->GetID());

		PacketWriter s;
		s.Write((std::uint8_t)GO_PLAYER);
		s.Write((std::uint8_t)ATTACK_UNCONSCIOUS);
		s.Write(focusID);
		s.Write(killerPlayer->GetID());

		core.GetNetwork()->SendToPlayersOnList(s, &killerPlayer->streamedPlayers, k_nSteamNetworkingSend_Reliable);
	}
	else if (killerPlayer && focusPlayer && killerPlayer->isUnconscious)
	{
		PacketWriter s;
		s.Write((std::uint8_t)GO_PLAYER);
		s.Write((std::uint8_t)FORCE_STANDUP);
		s.Write(focusID);
		s.Write(focusPlayer->health);

		core.GetNetwork()->Send(connection, s, k_nSteamNetworkingSend_Reliable);
	}
};

void PlayerRPC::StandUp(HSteamNetConnection connection, PacketReader& stream)
{
	//SPDLOG_TRACE("PlayerRPC::StandUp");
	CPlayer* player = playerManager.GetPlayer(connection);

	bool unconscious = false;
	if (player && player->bConnected && player->spawned && !player->isDead &&
		stream.Read(unconscious) && stream.Empty())
	{
		player->isUnconscious = false;
		SEvent::PlayerStandUp(player->GetID());

		PacketWriter s;
		s.Write((std::uint8_t)GO_PLAYER);
		s.Write((std::uint8_t)STAND_UP);
		s.Write(player->GetID());
		s.Write(unconscious);

		core.GetNetwork()->SendToPlayersOnList(s, &player->streamedPlayers, k_nSteamNetworkingSend_Reliable);
	}
};

void PlayerRPC::MagicSetup(HSteamNetConnection connection, PacketReader& stream)
{
	//SPDLOG_TRACE("PlayerRPC::MagicSetup");
	CPlayer* player = playerManager.GetPlayer(connection);
	std::string magicItem;
	if (player && player->bConnected && player->spawned && stream.Read(magicItem, 256) && stream.Empty())
	{
		player->magicItem = std::move(magicItem);

		PacketWriter s;
		s.Write((std::uint8_t)GO_PLAYER);
		s.Write((std::uint8_t)MAGIC_SETUP);
		s.Write(player->GetID());
		s.Write(player->magicItem);

		core.GetNetwork()->SendToPlayersOnList(s, &player->streamedPlayers, k_nSteamNetworkingSend_Reliable);
	}
};

void PlayerRPC::MagicAttack(HSteamNetConnection connection, PacketReader& stream)
{
	//SPDLOG_TRACE("PlayerRPC::MagicAttack");
	CPlayer* player = playerManager.GetPlayer(connection);
	int focusID = -1;
	if (player && player->bConnected && player->spawned && stream.Read(focusID) && stream.Empty())
	{
		PacketWriter s;
		s.Write((std::uint8_t)GO_PLAYER);
		s.Write((std::uint8_t)MAGIC_ATTACK);
		s.Write(player->GetID());
		s.Write(focusID);
		
		core.GetNetwork()->SendToPlayersOnList(s, &player->streamedPlayers, k_nSteamNetworkingSend_UnreliableNoDelay);
	}
};
/*
void PlayerRPC::SetProtection(HSteamNetConnection connection, PacketReader& stream)
{
	CPlayer* player = playerManager.GetPlayer(connection);
	if (player && player->bConnected == true && player->spawned == true)
	{
		int index;
		stream.Read(index);
		stream.Read(player->protection[index]);

		PacketWriter s;
		s.Write((std::uint8_t)GO_PLAYER);
		s.Write((std::uint8_t)SET_PROTECTION);
		s.Write(player->GetID());
		s.Write(index);
		s.Write(player->protection[index]);

		core.GetNetwork()->SendToPlayersOnList(s, &player->streamedPlayers, k_nSteamNetworkingSend_Reliable);
	}
};
*/

void PlayerRPC::SetOverlay(HSteamNetConnection connection, PacketReader& stream)
{
	CPlayer* player = playerManager.GetPlayer(connection);
	bool add = false;
	std::string overlay;
	if (player && player->bConnected && player->spawned && stream.Read(add) &&
		stream.Read(overlay, 256) && stream.Empty())
	{
		if (add)
			player->overlaysList.PushBack(overlay);
		else
		{
			if (!player->overlaysList.Remove(overlay))
				return;
		}
			
		PacketWriter s;
		s.Write((std::uint8_t)GO_PLAYER);
		s.Write((std::uint8_t)SET_OVERLAY);
		s.Write(player->GetID());
		s.Write(add);
		s.Write(overlay);
	
		core.GetNetwork()->SendToPlayersOnList(s, &player->streamedPlayers, k_nSteamNetworkingSend_Reliable);
	}
}

void PlayerRPC::SetTimedOverlay(HSteamNetConnection connection, PacketReader& stream)
{
	CPlayer* player = playerManager.GetPlayer(connection);
	std::uint64_t time = 0;
	std::string overlay;
	if (player && player->bConnected && player->spawned && stream.Read(time) &&
		stream.Read(overlay, 256) && stream.Empty())
	{
		const std::uint64_t delay = time > 300 ? time - 300 : 0;
		player->timedOverlays.PushBack(STimedOverlay(g1o::network::NowMilliseconds() + delay, overlay));

		PacketWriter s;
		s.Write((std::uint8_t)GO_PLAYER);
		s.Write((std::uint8_t)SET_OVERLAY);
		s.Write(player->GetID());
		s.Write(true);
		s.Write(overlay);

		core.GetNetwork()->SendToPlayersOnList(s, &player->streamedPlayers, k_nSteamNetworkingSend_Reliable);
	}
}

void PlayerRPC::MobTrigger(HSteamNetConnection connection, PacketReader& stream)
{
	CPlayer* player = playerManager.GetPlayer(connection);
	bool trigger = false;
	float x = 0.0f, y = 0.0f, z = 0.0f;
	std::string world;
	if (player && player->bConnected && player->spawned && stream.Read(trigger) && stream.Read(world, 1024) &&
		stream.Read(x) && stream.Read(y) && stream.Read(z) && stream.Empty() &&
		std::isfinite(x) && std::isfinite(y) && std::isfinite(z))
	{
		SMobTrigger mobTrigger(x, y, z, world);
		int index = core.mobList.FindIndex(mobTrigger);
		if ((trigger && index == -1) || (!trigger && index != -1))
		{

			if (index == -1)
				core.mobList.PushBack(mobTrigger);
			else
				core.mobList.RemoveIndex(index);

			PacketWriter s;
			s.Write((std::uint8_t)GO_PLAYER);
			s.Write((std::uint8_t)MOB_TRIGGER);
			s.Write(player->GetID());
			s.Write(trigger);
			s.Write(x);
			s.Write(y);
			s.Write(z);

			core.GetNetwork()->SendToAllInWorld(s, world, player, k_nSteamNetworkingSend_Reliable);
		}
	}
}

void PlayerRPC::ShootArrow(HSteamNetConnection connection, PacketReader& stream)
{
	CPlayer* player = playerManager.GetPlayer(connection);
	int targetID = -1, aniID = 0, type = 0;
	if (player && player->bConnected && player->spawned && stream.Read(targetID) && stream.Read(aniID) &&
		stream.Read(type) && stream.Empty() && (type == 5 || type == 6)) // Bow or crossbow.
	{
		PacketWriter s;
		s.Write((std::uint8_t)GO_PLAYER);
		s.Write((std::uint8_t)SHOOT_ARROW);
		s.Write(player->GetID());
		s.Write(targetID);
		s.Write(aniID);
		s.Write(type);

		core.GetNetwork()->SendToPlayersOnList(s, &player->streamedPlayers, k_nSteamNetworkingSend_Reliable);
	}
}
