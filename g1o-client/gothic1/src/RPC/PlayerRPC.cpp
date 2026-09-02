#include "..\\stdafx.h"

#include <cmath>

void PlayerRPC::HandlePlayerRPC(CNetwork* network, PacketReader& stream)
{
	//SPDLOG_TRACE("PlayerRPC::HandlePlayerRPC()");


	EPlayerRPC ePlayerRPC{};
	if (!stream.Read(ePlayerRPC))
		return;

	switch(ePlayerRPC)
	{
	case CREATE_PLAYER: //Local player is here
		CreatePlayer(network, stream); break;
	case CREATE_AND_SPAWN:
		CreateAndSpawnPlayer(stream); break;
	case DESTROY_PLAYER:
		DestroyPlayer(network,stream); break;
	case SET_POSITION:
		SetPosition(stream); break;
	case SET_ROTATION:
		SetAngle(stream); break;
	case CHANGE_WEAPONMODE:
		ChangeWeaponMode(stream); break;
	case PLAY_ANIMATION:
		PlayAnimation(stream); break;
	case WEAR_ARMOR:
		WearArmor(stream); break;
	case EQUIP_WEAPON:
		EquipWeapon(stream); break;
	case CHANGE_INSTANCE:
		ChangeInstance(stream); break;
	case ITEM_HAND:
		ItemHand(stream); break;
	case SET_HEALTH:
		SetHealth(stream); break;
	case SET_HEALTH_MAX:
		SetHealthMax(stream); break;
	case ATTACK_HIT:
		AttackHit(stream); break;
	case ATTACK_DEAD:
		AttackDead(stream); break;
	case ATTACK_UNCONSCIOUS:
		AttackUnconscious(stream); break;
	case STAND_UP:
		StandUp(stream); break;
	case MAGIC_SETUP:
		MagicSetup(stream); break;
	case MAGIC_ATTACK:
		MagicAttack(stream); break;
	case PLAYER_LIST:
		PlayerList(stream); break;
	//case SET_PROTECTION:
		//SetProtection(stream); break;
	case SET_OVERLAY:
		SetOverlay(stream); break;
	case MOB_TRIGGER:
		MobTrigger(stream); break;
	case SHOOT_ARROW:
		ShootArrow(stream); break;
	case FORCE_STANDUP:
		ForceStandUp(stream);  break;
	}
};

void PlayerRPC::CreatePlayer(CNetwork* network, PacketReader& stream)
{
	SPDLOG_TRACE("PlayerRPC::CreatePlayer()");
	int playerID = -1;
	std::string playerName;
	if (!stream.Read(playerID) || !stream.Read(playerName, 30) || !stream.Empty())
		return;

	if (core.GetMultiplayer()->GetMyID() == playerID)
		playerManager.CreateLocalPlayer(playerID, playerName);
};

void PlayerRPC::CreateAndSpawnPlayer(PacketReader& stream)
{
	SPDLOG_TRACE("PlayerRPC::CreateAndSpawnPlayer()");
	int playerID = -1;
	std::string playerName;
	std::string instanceName;
	std::string bodyModel, headModel, armorInstance, rangedWeaponInstance, meleeWeaponInstance;
	std::string leftHand, rightHand;
	int bodyTexture = 0, headTexture = 0, maxHealth = 0, health = 0, weaponMode = 0;
	float x = 0.0f, y = 0.0f, z = 0.0f, angle = 0.0f;
	if (!stream.Read(playerID) || !stream.Read(playerName, 30) || !stream.Read(instanceName, 256) ||
		!stream.Read(bodyModel, 256) || !stream.Read(bodyTexture) || !stream.Read(headModel, 256) ||
		!stream.Read(headTexture) || !stream.Read(x) || !stream.Read(y) || !stream.Read(z) ||
		!stream.Read(angle) || !stream.Read(maxHealth) || !stream.Read(health) ||
		!stream.Read(armorInstance, 256) || !stream.Read(rangedWeaponInstance, 256) ||
		!stream.Read(meleeWeaponInstance, 256) || !stream.Read(weaponMode) ||
		!stream.Read(leftHand, 256) || !stream.Read(rightHand, 256) || !stream.Empty() ||
		!std::isfinite(x) || !std::isfinite(y) || !std::isfinite(z) || !std::isfinite(angle))
		return;

	if (playerID == core.GetMultiplayer()->GetMyID())
	{
		playerManager.CreateLocalPlayer(playerID, playerName);
		return;
	}
	if (playerManager.GetPlayer(playerID))
		return;

	CPlayer* player = playerManager.CreatePlayer(playerID, playerName);
	if (player)
	{
		player->pos[0] = x;
		player->pos[1] = y;
		player->pos[2] = z;
		player->angle = angle;
		player->maxhealth = maxHealth;
		player->health = health;
		player->armorInstance = std::move(armorInstance);
		player->rangedWeaponInstance = std::move(rangedWeaponInstance);
		player->meleeWeaponInstance = std::move(meleeWeaponInstance);
		player->weaponMode = weaponMode;
		player->leftHand = std::move(leftHand);
		player->rightHand = std::move(rightHand);

		player->Spawn(x, y, z, instanceName);
		if (player->npc != NULL)
		{
			player->SetAdditionalVisuals(zSTRING(bodyModel.c_str()), bodyTexture, zSTRING(headModel.c_str()), headTexture);
			player->npc->SetHeading(player->angle);
			player->npc->SetAttribute(NPC_ATR_HITPOINTS_MAX, player->maxhealth);
			player->npc->SetAttribute(NPC_ATR_HITPOINTS, player->health);
			player->npc->SetWeaponMode2((oCNpc_WeaponMode)player->weaponMode);

			oCItem *leftHandItem = player->npc->CreateItem(zSTRING(player->leftHand.c_str()), 1);
			if (leftHandItem)
				player->npc->SetLeftHand(leftHandItem);

			oCItem *rightHandItem = player->npc->CreateItem(zSTRING(player->rightHand.c_str()), 1);
			if (rightHandItem)
				player->npc->SetRightHand(rightHandItem);

			oCItem *armor = player->npc->CreateItem(zSTRING(player->armorInstance.c_str()), 1);
			if (armor)
				player->npc->Equip(armor);

			oCItem *rangedWeapon = player->npc->CreateItem(zSTRING(player->rangedWeaponInstance.c_str()), 1);
			if (rangedWeapon)
				player->npc->Equip(rangedWeapon);

			oCItem *meleeWeapon = player->npc->CreateItem(zSTRING(player->meleeWeaponInstance.c_str()), 1);
			if (meleeWeapon)
				player->npc->Equip(meleeWeapon);
		}
	}
};

void PlayerRPC::DestroyPlayer(CNetwork* network, PacketReader& stream)
{
	SPDLOG_TRACE("PlayerRPC::DestroyPlayer()");

	int playerID = -1;
	if (!stream.Read(playerID) || !stream.Empty())
		return;
	if( playerID != core.GetMultiplayer()->GetMyID() )
	{
		CPlayer* player = playerManager.GetPlayer(playerID);
		if( player )
			playerManager.DestroyPlayer(player);
	}
};

void PlayerRPC::SetPosition(PacketReader& stream)
{
	SPDLOG_TRACE("PlayerRPC::SetPosition()");
	int playerID = -1;
	float x = 0.0f, y = 0.0f, z = 0.0f;
	if (!stream.Read(playerID) || !stream.Read(x) || !stream.Read(y) || !stream.Read(z) ||
		!stream.Empty() || !std::isfinite(x) || !std::isfinite(y) || !std::isfinite(z))
		return;

	if( playerID != core.GetMultiplayer()->GetMyID())
	{
		CPlayer* player = playerManager.GetPlayer(playerID);
		if( player )
		{
			//SPDLOG_TRACE("got pos packet from {}", player->name.c_str());
			player->pos[0] = x;
			player->pos[1] = y;
			player->pos[2] = z;

			/*if( player->npc != NULL )	
				player->npc->SetPosition(player->pos[0], player->pos[1], player->pos[2]);*/
		}
	}
};

void PlayerRPC::SetAngle(PacketReader& stream)
{
	SPDLOG_TRACE("PlayerRPC::SetAngle()");
	int playerID = -1;
	float angle = 0.0f;
	if (!stream.Read(playerID) || !stream.Read(angle) || !stream.Empty() || !std::isfinite(angle))
		return;

	if(core.GetMultiplayer()->GetMyID() != playerID)
	{
		CPlayer* player = playerManager.GetPlayer(playerID);
		if( player )
		{
			player->angle = angle;
			if (player->npc != NULL && player->angle >= 0.0f)
			{
				if (player->npc->GetAttribute(NPC_ATR_HITPOINTS) > 0 && player->npc->IsUnconscious() == 0)
					player->npc->SetHeading(player->angle);
			}
		}
	}
};

void PlayerRPC::ChangeWeaponMode(PacketReader& stream)
{
	SPDLOG_TRACE("Change weaponmode");
	int playerID = -1;
	int weaponMode = 0;
	if (!stream.Read(playerID) || !stream.Read(weaponMode) || !stream.Empty())
		return;

	if(core.GetMultiplayer()->GetMyID() != playerID)
	{
		CPlayer* player = playerManager.GetPlayer(playerID);
		if( player )
		{
			player->weaponMode = weaponMode;
			if( player->npc != NULL )
			{
				if( player->npc->GetAttribute(NPC_ATR_HITPOINTS) > 0 && player->npc->IsUnconscious() == 0 )
				{
					if( player->npc->GetWeaponMode() != player->weaponMode )
					{
						oCItem *item = NULL;
						switch (player->weaponMode)
						{
						case NPC_WEAPON_1HS:
						case NPC_WEAPON_2HS:
							item = player->npc->GetEquippedMeleeWeapon();
							if (item)
								player->npc->UnequipItem(item);

							player->meleeWeaponInstance = "NULL";
							break;

						case NPC_WEAPON_BOW:
						case NPC_WEAPON_CBOW:
							item = player->npc->GetEquippedRangedWeapon();
							if (item)
								player->npc->UnequipItem(item);

							player->rangedWeaponInstance = "NULL";
							break;
						}
						
						// Repair hand item
						if (strcmp(player->leftHand.c_str(), "NULL") != 0 && !player->npc->GetLeftHand())
						{
							oCItem *item = player->npc->CreateItem(zSTRING(player->leftHand.c_str()), 1);
							if (item)
								player->npc->SetLeftHand(item);
						}

						if (strcmp(player->rightHand.c_str(), "NULL") != 0 && !player->npc->GetRightHand())
						{
							oCItem *item = player->npc->CreateItem(zSTRING(player->rightHand.c_str()), 1);
							if (item)
								player->npc->SetRightHand(item);
						}
					}
				}
			}
		}
	}
};

void PlayerRPC::PlayAnimation(PacketReader& stream)
{
	SPDLOG_TRACE("PlayerRPC::PlayAnimation()");
	int playerID = -1;
	int animationId = 0;
	if (!stream.Read(playerID) || !stream.Read(animationId) || !stream.Empty())
		return;
	if( core.GetMultiplayer()->GetMyID() != playerID )
	{
		CPlayer* player = playerManager.GetPlayer(playerID);
		if( player && player->npc)
		{
			player->animationId = animationId;
			//SPDLOG_TRACE("Ani {} SM {}", player->animationId, startMode);

			if (player->npc->GetAttribute(NPC_ATR_HITPOINTS) > 0 && !player->npc->IsUnconscious())
			{
				if (player->animationId != 341 ) //Animacja wywolywana przy zmianie postaci z potwora na ludzka
				{
					zCModel* model = player->npc->GetModel();
					if (model)
						model->StartAni(player->animationId, 0); //uruchomienie nowej animacji
				}
				else
				{
					//SPDLOG_TRACE("ANI: 341!!");
					if( player->npc->IsHuman() ) //W innych przypadkach jest crash
					{
						zCModel* model = player->npc->GetModel();
						if( model )
							model->StartAni(player->animationId, 0); //uruchomienie nowej animacji
					}
					/*zCModel* model = player->npc->GetModel();
					if( model )
						model->FadeOutAnisLayerRange(1,2000);*/
				}
			}
		}
	}
};

void PlayerRPC::WearArmor(PacketReader& stream)
{
	SPDLOG_TRACE("PlayerRPC::WearArmor()");
	int playerID = -1;
	std::string armorInstance;
	if (!stream.Read(playerID) || !stream.Read(armorInstance, 256) || !stream.Empty())
		return;
	if( core.GetMultiplayer()->GetMyID() != playerID )
	{
		CPlayer* player = playerManager.GetPlayer(playerID);
		if( player && player->npc )
		{
			player->armorInstance = std::move(armorInstance);
			if( player->npc->GetAttribute(NPC_ATR_HITPOINTS) > 0 && player->npc->IsUnconscious() == 0 && player->npc->IsHuman() == 1 )
			{
				oCItem* armor = player->npc->GetEquippedArmor();
				if( armor )
				{
					if(strcmp(player->armorInstance.c_str(), armor->GetInstanceName().ToChar()) != 0)
					{
						if(strcmp(player->armorInstance.c_str(), "NULL") == 0)
						{
							SPDLOG_TRACE("Remove armor");
							player->npc->UnequipItem(armor);
							player->npc->_DoDropVob(armor);
							armor->RemoveVobFromWorld();
						}
						else
						{
							SPDLOG_TRACE("Equip armor");
							player->npc->UnequipItem(armor);
							player->npc->_DoDropVob(armor);
							armor->RemoveVobFromWorld();
							armor = player->npc->CreateItem(zSTRING(player->armorInstance.c_str()), 1);
							if(armor)
								player->npc->Equip(armor);
						}
					}
				}
				else if( !armor )
				{
					if(strcmp(player->armorInstance.c_str(), "NULL") != 0)
					{
						SPDLOG_TRACE("Equip armor");
						armor = player->npc->CreateItem(zSTRING(player->armorInstance.c_str()), 1);
						if(armor)
							player->npc->Equip(armor);
					}
				}
			}
		}
	}
};
void PlayerRPC::EquipWeapon(PacketReader& stream)
{
	SPDLOG_TRACE("PlayerRPC::EquipWeapon()");
	int playerID = -1;
	int weaponType = 0;
	std::string instance;
	if (!stream.Read(playerID) || !stream.Read(weaponType) || (weaponType != 1 && weaponType != 2) ||
		!stream.Read(instance, 256) || !stream.Empty())
		return;
	CPlayer* player = playerManager.GetPlayer(playerID);
	if (player && playerID != core.GetMultiplayer()->GetMyID())
	{
		if (!instance.empty())
		{
			SPDLOG_TRACE("instance isnt empty");
			const char* weaponInstance = instance.c_str();
			if( player->npc )
			{
				SPDLOG_TRACE("npc is exist");
				if( player->npc->IsHuman() )
				{
					SPDLOG_TRACE("npc is already human");
					player->npc->SetAttribute(NPC_ATR_DEXTERITY, 1000);
					player->npc->SetAttribute(NPC_ATR_STRENGTH, 1000);
					if( weaponType == 1 )
					{
						SPDLOG_TRACE("melee");
						player->meleeWeaponInstance = weaponInstance;
						//Melee
						if( strcmp("NULL", weaponInstance) == 0 )
						{
							SPDLOG_TRACE("isnull");
							oCItem* melee = player->npc->GetEquippedMeleeWeapon();
							if( melee )
							{
								SPDLOG_TRACE("w exists");
								player->npc->UnequipItem(melee);
							}
						}
						else
						{
							SPDLOG_TRACE("isntnull");
							oCItem* new_melee = player->npc->CreateItem(zSTRING(weaponInstance),1);
							if (new_melee)
							{
								player->npc->Equip(new_melee);
							}
						}
					
					}
					else if( weaponType == 2 )
					{
						SPDLOG_TRACE("ranged");
						player->rangedWeaponInstance = weaponInstance;
						//Ranged
						if( strcmp("NULL", weaponInstance) == 0 )
						{
							SPDLOG_TRACE("isnull");
							oCItem* ranged = player->npc->GetEquippedRangedWeapon();
							if( ranged )
							{
								SPDLOG_TRACE("w exist");
								player->npc->UnequipItem(ranged);
							}
						}
						else
						{
							SPDLOG_TRACE("isntnull");
							oCItem* new_ranged = player->npc->CreateItem(zSTRING(weaponInstance),1);
							if (new_ranged)
							{
								player->npc->Equip(new_ranged);
							}
						}
					}
				}
			}
		}
	}
};

void PlayerRPC::ChangeInstance(PacketReader& stream)
{
	SPDLOG_TRACE("PlayerRPC::ChangeInstance()");
	int playerID = -1;
	std::string instance;
	if (!stream.Read(playerID) || !stream.Read(instance, 256) || !stream.Empty())
		return;

	if( core.GetMultiplayer()->GetMyID() != playerID )
	{
		CPlayer* player = playerManager.GetPlayer(playerID);
		if( player && player->npc )
		{
			player->instance = std::move(instance);

			oCNpc* new_npc = oCGame::GetGame()->CreateNPC(zSTRING(player->instance.c_str()), player->pos[0], player->pos[1], player->pos[2]);
			if( new_npc )
			{
				oCNpc* old_npc = player->npc;
				old_npc->GetModel()->FadeOutAnisLayerRange(1,2000);
				player->npc = new_npc;
				new_npc->SetHeading(player->angle);
				//Sprawdzenie czy nie jest botem
				if( new_npc->IsMonster() || new_npc->IsGoblin() || new_npc->IsHalfMonster() )
					new_npc->SetAI(NULL); //Po takim zabiegu niestety animki scinaja
				new_npc->name[0] = zSTRING((player->name + " (" + std::to_string(player->GetID()) + ")").c_str());
				if( old_npc )
					old_npc->DestroyNpc();
			}
		}
	}
};

void PlayerRPC::ItemHand(PacketReader& stream)
{
	SPDLOG_TRACE("PlayerRPC::ItemHand()");
	int playerID = -1;
	int hand = 0;
	std::string handInstance;
	if (!stream.Read(playerID) || !stream.Read(hand) || (hand != 1 && hand != 2) ||
		!stream.Read(handInstance, 256) || !stream.Empty())
		return;

	if( core.GetMultiplayer()->GetMyID() != playerID )
	{
		CPlayer* player = playerManager.GetPlayer(playerID);
		if( player )
		{
			if( hand == 1 )
				player->leftHand = handInstance;
			else if( hand == 2 )
				player->rightHand = handInstance;

			if( player->npc )
			{
				if( player->npc->IsHuman() )
				{
					if( hand == 1 )
					{
						if( strcmp(player->leftHand.c_str(), "NULL") != 0 )
						{
							oCItem* handItem = (oCItem*)player->npc->GetLeftHand();
							if( handItem )
							{
								player->npc->_DoDropVob(handItem);
								handItem->RemoveVobFromWorld();
							}
							handItem = player->npc->CreateItem(zSTRING(player->leftHand.c_str()),1);
							if( handItem )
								player->npc->SetLeftHand(handItem);
						}
						else
						{
							oCItem* handItem = (oCItem*)player->npc->GetLeftHand();
							if( handItem )
							{
								player->npc->_DoDropVob(handItem);
								handItem->RemoveVobFromWorld();
							}
						}
					}
					else if( hand == 2 )
					{
						if( strcmp(player->rightHand.c_str(), "NULL") != 0 )
						{
							oCItem* handItem = (oCItem*)player->npc->GetRightHand();
							if( handItem )
							{
								player->npc->_DoDropVob(handItem);
								handItem->RemoveVobFromWorld();
							}
							handItem = player->npc->CreateItem(zSTRING(player->rightHand.c_str()),1);
							if( handItem )
								player->npc->SetRightHand(handItem);
						}
						else
						{
							oCItem* handItem = (oCItem*)player->npc->GetRightHand();
							if( handItem )
							{
								player->npc->_DoDropVob(handItem);
								handItem->RemoveVobFromWorld();
							}
						}
					}
				}
			}
		}
	}
	
};

void PlayerRPC::SetHealth(PacketReader& stream)
{
	SPDLOG_TRACE("PlayerRPC::SetHealth()");
	int playerID = -1;
	int hp = 0;
	if (!stream.Read(playerID) || !stream.Read(hp) || !stream.Empty() || hp < 0)
		return;

	if( core.GetMultiplayer()->GetMyID() != playerID )
	{
		CPlayer* p = playerManager.GetPlayer(playerID);
		if( p )
		{
			if( p->npc )
			{
				p->npc->SetAttribute(NPC_ATR_HITPOINTS, hp);
				p->health = hp;

				if (p->health == 0)
				{
					p->npc->DoDie(nullptr);
					p->unconscious = false;
					p->dead = true;

					if (p->npc->IsHuman() == 0)
						p->npc->GetModel()->StartAni(zSTRING("T_DEADB"), 0);
				}
				else if (p->dead && p->health > 0)
				{
					p->Respawn();
					p->dead = false;
				}	
			}	
		}
	}
	else
	{
		CPlayer* p = playerManager.GetPlayer(playerID);
		oCNpc* n = oCNpc::GetHero();
		if( p )
		{
			if( n )
			{
				n->SetAttribute(NPC_ATR_HITPOINTS, hp);
				p->health = hp;
				if(p->health == 0)
					n->GetModel()->FadeOutAnisLayerRange(1,2000);

				n->DoDie(nullptr);

				if(n->GetAttribute(NPC_ATR_HITPOINTS) == 0)
					if(n->IsHuman() == 0)
						n->GetModel()->StartAni(zSTRING("T_DEADB"),0);
			}
		}
	}
};

void PlayerRPC::SetHealthMax(PacketReader& stream)
{
	SPDLOG_TRACE("PlayerRPC::SetHealthMax()");
	int playerID = -1;
	int maxHealth = 0;
	if (!stream.Read(playerID) || !stream.Read(maxHealth) || !stream.Empty() || maxHealth < 0)
		return;

	if( core.GetMultiplayer()->GetMyID() != playerID )
	{
		CPlayer* p = playerManager.GetPlayer(playerID);
		if( p )
		{
			p->maxhealth = maxHealth;
			if( p->npc )
			{
				if( p->maxhealth == 0 )
					p->npc->GetModel()->FadeOutAnisLayerRange(1,2000);
				p->npc->SetAttribute(NPC_ATR_HITPOINTS_MAX, p->maxhealth);

				if(p->npc->GetAttribute(NPC_ATR_HITPOINTS_MAX) == 0)
					if(p->npc->IsHuman() == 0)
						p->npc->GetModel()->StartAni(zSTRING("T_DEADB"),0);
			}	
		}
	}
	else
	{
		CPlayer* p = playerManager.GetPlayer(playerID);
		oCNpc* n = oCNpc::GetHero();
		if( p )
		{
			p->maxhealth = maxHealth;
			if( n )
			{
				if(p->maxhealth == 0)
					n->GetModel()->FadeOutAnisLayerRange(1,2000);
				n->SetAttribute(NPC_ATR_HITPOINTS_MAX, p->maxhealth);
				if(n->GetAttribute(NPC_ATR_HITPOINTS_MAX) == 0)
					if(n->IsHuman() == 0)
						n->GetModel()->StartAni(zSTRING("T_DEADB"),0);
			}
		}
	}
};

void PlayerRPC::AttackHit(PacketReader& stream)
{
	SPDLOG_TRACE("PlayerRPC::AttackHit()");
	//Tylko w wypadku funkcji "Attack" playerID to zawsze id atakującego
	int attackID = -1;
	int minushp = 0;
	if (!stream.Read(attackID) || !stream.Read(minushp) || !stream.Empty() || minushp < 0)
		return;

	if(attackID == core.GetMultiplayer()->GetMyID()) return;

	CPlayer* attackPlayer = playerManager.GetPlayer(attackID);
	if( attackPlayer )
	{
		if( attackPlayer->npc )
		{
			oCNpc* hero = oCNpc::GetHero();
			if( hero )
			{
				int health = hero->GetAttribute(NPC_ATR_HITPOINTS);
				if( attackPlayer->npc->GetWeaponMode() != NPC_WEAPON_MAG )
				{
					hero->SetAttribute(NPC_ATR_HITPOINTS, 9999999);
					hero->GetAnictrl()->CreateHit(hero);
				}

				if( (health - minushp) >= 1 )
					hero->SetAttribute(NPC_ATR_HITPOINTS, (health - minushp)); //Nic dalej nie przesyłamy
				else															//CLocalPlayer przechwyci zmianę hp i prześle ją dalej
					hero->SetAttribute(NPC_ATR_HITPOINTS, 1);
			}														
		}
	}
};

void PlayerRPC::AttackDead(PacketReader& stream)
{
	SPDLOG_TRACE("PlayerRPC::AttackDead()");
	if (!stream.Empty())
		return;

	oCNpc* hero = oCNpc::GetHero();

	if (hero)
	{
		hero->SetWeaponMode2(NPC_WEAPON_NONE);
		hero->GetAnictrl()->CreateHit(hero);
		hero->DoDie(nullptr);

		hero->SetAttribute(NPC_ATR_HITPOINTS, 0);

		if (hero->IsHuman() == 0)
		{
			zCModel* model = hero->GetModel();
			if (model)
			{
				model->FadeOutAnisLayerRange(1, 2000);
				model->StartAni(zSTRING("T_DEADB"), 0);
			}
		}

		playerManager.GetLocalPlayer()->unconscious = false;
	}
};

void PlayerRPC::AttackUnconscious(PacketReader& stream)
{
	SPDLOG_TRACE("PlayerRPC::AttackUnconscious()");
	int playerID = -1;
	int attackID = -1;
	if (!stream.Read(playerID) || !stream.Read(attackID) || !stream.Empty())
		return;
	//Zajebisty stajl mam joł, takie som realia żią
	//Stritłer zajebisty najt fajt noł, podnieś nju łere i machaj nią
	CPlayer* player = playerManager.GetPlayer(playerID);
	CPlayer* attackPlayer = playerManager.GetPlayer(attackID);
	if( player )
	{
		if( core.GetMultiplayer()->GetMyID() != playerID )
		{
			if( player->npc )
			{
				player->npc->SetWeaponMode2(NPC_WEAPON_NONE);
				player->npc->DropUnconscious(1, oCNpc::GetHero());

				player->unconscious = true;
			}
		}
		else
		{
			oCNpc* hero = oCNpc::GetHero();
			if( hero )
			{
				hero->GetAnictrl()->CreateHit(hero);
				hero->SetWeaponMode2(NPC_WEAPON_NONE);
				hero->DropUnconscious(1, oCNpc::GetHero());

				playerManager.GetLocalPlayer()->unconscious = true;
			}
		}
	}

};

void PlayerRPC::StandUp(PacketReader& stream)
{
	SPDLOG_TRACE("PlayerRPC::StandUp()");
	int playerID = -1;
	bool unconscious = false;
	if (!stream.Read(playerID) || !stream.Read(unconscious) || !stream.Empty())
		return;
	CPlayer* player = playerManager.GetPlayer(playerID);
	if( player && player->npc )
	{
		if( core.GetMultiplayer()->GetMyID() != playerID )
		{
			if( unconscious == false )
			{
				if( player->npc->IsUnconscious() == 1 )
					player->npc->ForceStandUp();

				player->unconscious = false;
			}
		}
	}
};

void PlayerRPC::MagicSetup(PacketReader& stream)
{
	SPDLOG_TRACE("PlayerRPC::MagicSetup()");

	int playerID = -1;
	std::string spellInstance;
	if (!stream.Read(playerID) || !stream.Read(spellInstance, 256) || !stream.Empty())
		return;

	if( playerID != core.GetMultiplayer()->GetMyID() )
	{
		CPlayer* player = playerManager.GetPlayer(playerID);
		if( player && player->npc )
		{
			if( strcmp(spellInstance.c_str(), "NULL") != 0 )
			{
				SPDLOG_TRACE("Spellinstance {}", spellInstance.c_str());
				if( player->spellItem )
				{
					oCMag_Book* book = player->npc->GetSpellBook();
					if( book )
						book->KillSelectedSpell();
					player->npc->_DoDropVob(player->spellItem);
					zCWorld* world = oCGame::GetGame()->GetGameWorld();
					if( world )
						world->RemoveVob(player->spellItem);
					player->spellItem = NULL;
				}
				player->spellItem = player->npc->CreateItem(zSTRING(spellInstance.c_str()),1);
				if( player->spellItem )
				{
					player->npc->Equip(player->spellItem);
					oCMag_Book* book = player->npc->GetSpellBook();
					if( book )
						book->Open(0);
				}
			}
			else
			{
				oCMag_Book* book = player->npc->GetSpellBook();
				if( book )
				{
					book->KillSelectedSpell();
				}
				
				if( player->spellItem )
				{
					player->npc->_DoDropVob(player->spellItem);
					zCWorld* world = oCGame::GetGame()->GetGameWorld();
					if( world )
						world->RemoveVob(player->spellItem);
					player->spellItem = NULL;
				}
			}
		}
	}
};

void PlayerRPC::MagicAttack(PacketReader& stream)
{
	SPDLOG_TRACE("PlayerRPC::MagicAttack()");
	int playerID = -1;
	int targetID = -1;
	if (!stream.Read(playerID) || !stream.Read(targetID) || !stream.Empty())
		return;

	if( playerID != core.GetMultiplayer()->GetMyID() )
	{
		CPlayer* player = playerManager.GetPlayer(playerID);
		if( player && player->npc )
		{
			if( player->npc->HasMagic() )
			{
				if( player->spellItem )
				{
					if( targetID >= 0 )
					{
						oCMag_Book* book = player->npc->GetSpellBook();
						if( book )
						{
							CPlayer* target = playerManager.GetPlayer(targetID);
							if( targetID != core.GetMultiplayer()->GetMyID() )
							{
								if( target && target->npc )
								{
									player->npc->SetFocusVob(target->npc);
									book->Spell_Setup(player->npc, target->npc);
									book->Spell_Invest();
									book->Spell_Cast();
									CSpell::StartSpellAction(player->npc, target->npc, player->spellItem);
								}
								else
								{
									book->Spell_Setup(player->npc, NULL);
									book->Spell_Invest();
									book->Spell_Cast();
								//	CSpell::StartSpellAction(player->npc, NULL, player->spellItem);
								}
							}
							else
							{
								player->npc->SetFocusVob(oCNpc::GetHero());
								book->Spell_Setup(player->npc, oCNpc::GetHero());
								book->Spell_Invest();
								book->Spell_Cast();
								CSpell::StartSpellAction(player->npc, oCNpc::GetHero(), player->spellItem);
							}

						/*	book->Spell_Invest();
							
							book->Spell_Cast();*/
						}
					}
					else
					{
						zVEC3 pos = player->npc->GetPosition();
							oCNpc* tmp_npc = oCGame::GetGame()->CreateNPC(zSTRING("PC_HERO"), pos[0], pos[1], pos[2]);
						if( tmp_npc )
						{
							oCMag_Book* book = player->npc->GetSpellBook();
							if( book )
							{
								player->npc->SetFocusVob(tmp_npc);
								book->Spell_Setup(player->npc,tmp_npc);
								tmp_npc->SetPositionWorld(zVEC3(pos[0] + 100, pos[1], pos[2]));
								book->Spell_Invest();
								book->Spell_Cast();
								CSpell::StartSpellAction(player->npc,tmp_npc,player->spellItem);
								tmp_npc->DestroyNpc();
							}	
						}
					}
				}
			}
		}
	}
};

void PlayerRPC::PlayerList(PacketReader& stream)
{
	std::uint32_t count = 0;
	if (!stream.Read(count) || count > 1024)
		return;
	std::vector<std::string> names(count);
	for (std::string& name : names)
		if (!stream.Read(name, 100))
			return;
	if (!stream.Empty())
		return;

	auto* playerList = CPlayerList::GetInstance().GetList();
	for (std::size_t i = 0; i < 1024; ++i)
		playerList[i].clear();
	for (std::size_t i = 0; i < names.size(); ++i)
		playerList[i] = std::move(names[i]);
};
/*
void PlayerRPC::SetProtection(PacketReader& stream)
{
	int playerID, index, value;
	stream.Read(playerID);
	stream.Read(index);
	stream.Read(value);
	CPlayer* player = playerManager.GetPlayer(playerID);
	if (player && player->npc)
	{
		if (core.GetMultiplayer()->GetMyID() != playerID)
		{
			player->npc->SetProtection(index, value);
		}
	}
};
*/
void PlayerRPC::SetOverlay(PacketReader& stream)
{
	int playerID = -1;
	bool add = false;
	std::string overlay;
	if (!stream.Read(playerID) || !stream.Read(add) || !stream.Read(overlay, 256) || !stream.Empty())
		return;

	CPlayer* player = playerManager.GetPlayer(playerID);
	if (player && player->npc && core.GetMultiplayer()->GetMyID() != playerID)
	{
		if (add)
			player->npc->ApplyOverlay(zSTRING(overlay.c_str()));
		else
			player->npc->RemoveOverlay(zSTRING(overlay.c_str()));
	}
};

void PlayerRPC::MobTrigger(PacketReader& stream)
{
	int playerID = -1;
	bool trigger = false;
	float x = 0.0f, y = 0.0f, z = 0.0f;
	if (!stream.Read(playerID) || !stream.Read(trigger) || !stream.Read(x) || !stream.Read(y) ||
		!stream.Read(z) || !stream.Empty() || !std::isfinite(x) || !std::isfinite(y) || !std::isfinite(z))
		return;

	zCTree<zCVob> *tree = oCGame::GetGame()->GetGameWorld()->GetGlobalVobTree().firstChild;
	static oCNpc *staticNpc = oCGame::GetGame()->CreateNPC(zSTRING("PC_HERO"), 0, -1000, 0);
	bool isStatic = false;

	oCNpc *triggerNpc = NULL;
	CPlayer* player = playerManager.GetPlayer(playerID);
	if (player && player->npc && core.GetMultiplayer()->GetMyID() != playerID)
		triggerNpc = player->npc;
	else
	{
		isStatic = true;
		triggerNpc = staticNpc;
	}
		
	while (tree)
	{
		if (tree->data)
		{
			zVEC3 pos = tree->data->GetPositionWorld();
			if (goMath::GetDistance3D(x, y, z, pos[0], pos[1], pos[2]) < 10)
			{
				if (isStatic) triggerNpc->SetPosition(x, y + 10, z);
				oCMobInter *mob = (oCMobInter*)tree->data;
				switch (::GetVobType(mob))
				{
				case VOB_TYPE_VT_OCMOBSWITCH:
				case VOB_TYPE_VT_OCMOBWHEEL:
				case VOB_TYPE_VT_OCMOBDOOR:
					if (trigger)
					{
						if (!mob->GetS1() && !mob->GetS2())
						{
							mob->StartInteraction(triggerNpc);
							mob->StartStateChange(triggerNpc, 0, 1);
							mob->EndInteraction(triggerNpc, 1);
							mob->OnTrigger(mob, triggerNpc);
							mob->SetState(1, 1);
						}
					}
					else
					{
						if (mob->GetS1() && mob->GetS2())
						{
							mob->StartInteraction(triggerNpc);
							mob->StartStateChange(triggerNpc, 1, 0);
							mob->EndInteraction(triggerNpc, 1);
							mob->OnUntrigger(mob, triggerNpc);
							mob->SetState(0, 0);
						}
					}
					core.GetMultiplayer()->triggerQueue.push(STriggerSync(g1o::network::NowMilliseconds() + 1200, triggerNpc, mob));
					break;
				
				case VOB_TYPE_VT_OCMOBINTER:
				case VOB_TYPE_VT_OCMOBCONTAINER:
					if (trigger)
					{
						if (!mob->GetS1() && !mob->GetS2())
						{
							mob->StartInteraction(triggerNpc);
							mob->StartStateChange(triggerNpc, 0, 1);
							mob->EndInteraction(triggerNpc, 1);
							mob->OnTrigger(mob, triggerNpc);
							mob->SetState(1, 1);
						}
					}
					else
					{
						if (mob->GetS1() && mob->GetS2())
						{
							mob->StartInteraction(triggerNpc);
							mob->StartStateChange(triggerNpc, 1, 0);
							mob->EndInteraction(triggerNpc, 1);
							mob->OnUntrigger(mob, triggerNpc);
							mob->SetState(0, 0);
							mob->StopInteraction(triggerNpc);
						}
					}
					break;
				}
			}
		}

		tree = tree->next;
	}

	staticNpc->SetPosition(0, -1000, 0);
}

void PlayerRPC::ShootArrow(PacketReader& stream)
{
	int playerID = -1, targetID = -1, aniID = 0, type = 0;
	if (!stream.Read(playerID) || !stream.Read(targetID) || !stream.Read(aniID) || !stream.Read(type) ||
		!stream.Empty() || (type != NPC_WEAPON_BOW && type != NPC_WEAPON_CBOW))
		return;

	if (core.GetMultiplayer()->GetMyID() != playerID)
	{
		CPlayer* player = playerManager.GetPlayer(playerID);
		if (player && player->npc)
		{
			player->npc->SetWeaponMode((oCNpc_WeaponMode)type);

			zCModelAni* animation = player->npc->GetModel()->GetAniFromAniID(aniID);
			if (animation) player->npc->GetModel()->StartAni(animation, 0);

			if (core.GetMultiplayer()->GetMyID() == targetID)
				player->npc->SetFocusVob(oCNpc::GetHero());
			else
			{
				CPlayer* target = playerManager.GetPlayer(targetID);
				if (target && target->npc)
					player->npc->SetFocusVob(target->npc);
			}

			switch (type)
			{
			case NPC_WEAPON_BOW: // Bow arrow
				{
					oCVob *item = player->npc->GetRightHand();
					if (!item)
					{
						oCItem *handItem = player->npc->CreateItem(zSTRING("ITAMARROW"), 1);
						if (handItem)
							player->npc->SetRightHand(handItem);
					}
				}
				break;
			case NPC_WEAPON_CBOW: // Crossbow bolt
				{
					oCVob *item = player->npc->GetLeftHand();
					if (!item)
					{
						oCItem *handItem = player->npc->CreateItem(zSTRING("ITAMBOLT"), 1);
						if (handItem)
							player->npc->SetLeftHand(handItem);
					}
				}
				break;
			}

			player->npc->DoShootArrow(1);
		}
	}
}

void PlayerRPC::ForceStandUp(PacketReader& stream)
{
	int playerID = -1, hp = 0;
	if (!stream.Read(playerID) || !stream.Read(hp) || !stream.Empty() || hp < 0)
		return;

	if (core.GetMultiplayer()->GetMyID() != playerID)
	{
		CPlayer* player = playerManager.GetPlayer(playerID);
		if (player && player->npc)
		{
			player->dead = false;
			if (player->npc->IsUnconscious())
				player->npc->DoDie(nullptr);

			player->npc->SetAttribute(NPC_ATR_HITPOINTS, hp);
		}
	}
}
