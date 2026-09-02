#include "stdafx.h"

CLocalPlayer::CLocalPlayer(int playerID, std::string playerName)
: CPlayer(playerID, playerName)
{
	SPDLOG_TRACE("CLocalPlayer::CLocalPlayer()");

	posBroadcastTimer = 0;
	angleBroadcastTimer = 0;
	weaponModeBroadcastTimer = 0;
	armorBroadcastTimer = 0;
	weaponBroadcastTimer = 0;
	instanceBroadcastTimer = 0;
	handBroadcastTimer = 0;
	standUpTimer = 0;
	fightBroadcastTimer = 0;
	worldBroadcastTimer = 0;
	protectionBroadcastTimer = 0;
	skillWeaponBroadcastTimer = 0;
	lastDeathTimer = 0;
	aniBroadcastTimer = 0;
	focusTimer = 0;

	isDead = false;
	lastMob = NULL;
};

CLocalPlayer::~CLocalPlayer()
{
	SPDLOG_TRACE("CLocalPlayer::~CLocalPlayer()");
};

void CLocalPlayer::SetAdditionalVisuals(zSTRING const& _bodyModel, int _bodyTexture, zSTRING const& _headModel, int _headTexture)
{
	bodyModel = _bodyModel;
	headModel = _headModel;
	bodyTexture = _bodyTexture;
	headTexture = _headTexture;

	if (oCNpc::GetHero()->IsHuman())
	{
		oCNpc::GetHero()->SetAdditionalVisuals(bodyModel, bodyTexture, 1, headModel, headTexture, 0, -1);
	}
}

void CLocalPlayer::Pulse()
{
	this->SendPlayAnimation();
	this->SendPosition();
	this->SendAngle();
	this->SendChangeWeaponMode();
	this->SendWearArmor();
	this->SendEquipWeapon();
	this->SendInstanceChange();
	this->SendHealth();
	this->SendMaxHealth();
	//this->SendHitFocus();
	this->SendStandUp();
	this->SendMagicSetup();
	this->SendHand();
	//this->SendProtection();
	this->BroadcastWorld();
	this->Respawn();
	this->Unconscious();
	this->HandleFocus();
};

void CLocalPlayer::SendPosition()
{
	zVEC3 playerPos = oCNpc::GetHero()->GetPosition();
	if( posBroadcastTimer < g1o::network::NowMilliseconds() )
	{
		int dist = goMath::GetDistance3D(playerPos[0], playerPos[1], playerPos[2], pos[0], pos[1], pos[2]);
		if (dist > 25 && core.GetNetwork()->GetPing() < PING_SYNC_LIMIT)
		{
			PacketWriter stream;
			stream.Write((std::uint8_t)GO_PLAYER);
			stream.Write((std::uint8_t)SET_POSITION);
			stream.Write(playerPos[0]);
			stream.Write(playerPos[1]);
			stream.Write(playerPos[2]);
			CNetwork* net = core.GetNetwork();
			net->Send(stream, k_nSteamNetworkingSend_UnreliableNoDelay);

			pos = playerPos;
		}
		else if (dist > 25)
			oCNpc::GetHero()->SetPosition(pos[0], pos[1], pos[2]);

		posBroadcastTimer = g1o::network::NowMilliseconds() + 200;
	}
};

void CLocalPlayer::SendAngle()
{
	float playerAngle = oCNpc::GetHero()->GetHeading();

	if( angleBroadcastTimer < g1o::network::NowMilliseconds() )
	{
		if( playerAngle != angle )
		{
			PacketWriter stream;
			stream.Write((std::uint8_t)GO_PLAYER);
			stream.Write((std::uint8_t)SET_ROTATION);
			stream.Write(playerAngle);
			CNetwork* net = core.GetNetwork();
			net->Send(stream, k_nSteamNetworkingSend_UnreliableNoDelay);

			angle = playerAngle;
		}
		angleBroadcastTimer = g1o::network::NowMilliseconds() + 160;
	}
};

void CLocalPlayer::SendChangeWeaponMode()
{
	if( weaponModeBroadcastTimer < g1o::network::NowMilliseconds() )
	{
		int wm = oCNpc::GetHero()->GetWeaponMode();
		if( wm != this->weaponMode )
		{
			if( wm != NPC_WEAPON_NONE )
			{
				oCItem* item = reinterpret_cast<oCItem*>(oCNpc::GetHero()->GetLeftHand());
				if( item != NULL && strcmp(item->GetInstanceName().ToChar(), "ITLSTORCHBURNING") == 0 ) //Bug z pochodniami w lapie
				{
					oCNpc::GetHero()->_DoDropVob(item);
					item->SetPositionWorld(zVEC3(0, 10000000, 0));
					item->RemoveVobFromWorld();
				}
			}
			SPDLOG_TRACE("CLocalPlayer::SendChangeWeaponMode()");
			PacketWriter stream;
			stream.Write((std::uint8_t)GO_PLAYER);
			stream.Write((std::uint8_t)CHANGE_WEAPONMODE);
			stream.Write(wm);
			CNetwork* net = core.GetNetwork();
			net->Send(stream, k_nSteamNetworkingSend_Reliable);
			this->weaponMode = wm;
		}
		weaponModeBroadcastTimer = g1o::network::NowMilliseconds() + 300;
	}
};

void CLocalPlayer::SendPlayAnimation()
{
	if( aniBroadcastTimer < g1o::network::NowMilliseconds() )
	{
		if( playerManager.GetNumberOfPlayers() > 1 )
		{
			oCNpc* hero = oCNpc::GetHero();
			if( hero )
			{
				zCModelAni* ani = hero->GetCurrentAni();
				if( ani )
				{
					int aniID = ani->GetAniID();
					if( this->animationId != aniID )
					{
						PacketWriter stream;
						stream.Write((std::uint8_t)GO_PLAYER);
						stream.Write((std::uint8_t)PLAY_ANIMATION);
						stream.Write(aniID);
						CNetwork* net = core.GetNetwork();
						net->Send(stream, k_nSteamNetworkingSend_UnreliableNoDelay);
						this->animationId = aniID;
					}
				}
			}
		}
		aniBroadcastTimer = g1o::network::NowMilliseconds() + 200;
	}
};

void CLocalPlayer::SendWearArmor()
{
	if( armorBroadcastTimer < g1o::network::NowMilliseconds() )
	{
		oCNpc* hero = oCNpc::GetHero();
		if( hero )
		{
			CNetwork* net = core.GetNetwork();
			oCItem* armor = hero->GetEquippedArmor();
			if( armor )
			{
				if (strcmp(armor->GetInstanceName().ToChar(), this->armorInstance.c_str()) != 0) //Są różne
				{
					this->armorInstance = armor->GetInstanceName().ToChar();
					//Wyslanie nowej instancji do serwera
					PacketWriter stream;
					stream.Write((std::uint8_t)GO_PLAYER);
					stream.Write((std::uint8_t)WEAR_ARMOR);
					stream.Write(this->armorInstance);
					net->Send(stream, k_nSteamNetworkingSend_Reliable);
				}

			}
			else //Gdy jest rowne null
			{
				if (strcmp("NULL", this->armorInstance.c_str()) != 0) //Są różne
				{
					//Wyslanie nullwoej instancji do serwera
					this->armorInstance = "NULL";
					PacketWriter stream;
					stream.Write((std::uint8_t)GO_PLAYER);
					stream.Write((std::uint8_t)WEAR_ARMOR);
					stream.Write(this->armorInstance);
					net->Send(stream, k_nSteamNetworkingSend_Reliable);
				}
			}
		}
		armorBroadcastTimer = g1o::network::NowMilliseconds() + 1000;
	}
};

void CLocalPlayer::SendEquipWeapon()
{
	if( weaponBroadcastTimer < g1o::network::NowMilliseconds() )
	{
		oCNpc* hero = oCNpc::GetHero();
		if( hero )
		{
			CNetwork* net = core.GetNetwork();
			oCItem* meleeWeapon = hero->GetEquippedMeleeWeapon();
			oCItem* rangedWeapon = hero->GetEquippedRangedWeapon();

			if( meleeWeapon )
			{
				if(strcmp(meleeWeapon->GetInstanceName().ToChar(), this->meleeWeaponInstance.c_str()) != 0) //Są różne
				{
					this->meleeWeaponInstance = meleeWeapon->GetInstanceName().ToChar();
					//Wysłanie nowej instancji
					PacketWriter s1;
					s1.Write((std::uint8_t)GO_PLAYER);
					s1.Write((std::uint8_t)EQUIP_WEAPON);
					s1.Write(1); //1 - melee | 2 - ranged
					s1.Write(this->meleeWeaponInstance);
					net->Send(s1, k_nSteamNetworkingSend_Reliable);
				}
			}
			else if( !meleeWeapon )
			{
				if(strcmp(this->meleeWeaponInstance.c_str(), "NULL") != 0 )
				{
					this->meleeWeaponInstance = "NULL";
					PacketWriter s1;
					s1.Write((std::uint8_t)GO_PLAYER);
					s1.Write((std::uint8_t)EQUIP_WEAPON);
					s1.Write(1); //1 - melee | 2 - ranged
					s1.Write(this->meleeWeaponInstance);
					net->Send(s1, k_nSteamNetworkingSend_Reliable);
				}
			}

			if( rangedWeapon )
			{
				if(strcmp(rangedWeapon->GetInstanceName().ToChar(), this->rangedWeaponInstance.c_str()) != 0)
				{
					this->rangedWeaponInstance = rangedWeapon->GetInstanceName().ToChar();
					//Wysłanie nowej instancji
					PacketWriter s2;
					s2.Write((std::uint8_t)GO_PLAYER);
					s2.Write((std::uint8_t)EQUIP_WEAPON);
					s2.Write(2); //1 - melee | 2 - ranged
					s2.Write(this->rangedWeaponInstance);
					net->Send(s2, k_nSteamNetworkingSend_Reliable);
				}
			}
			else if( !rangedWeapon )
			{
				if(strcmp(this->rangedWeaponInstance.c_str(), "NULL") != 0)
				{
					this->rangedWeaponInstance = "NULL";
					//Wysłanie nowej instancji
					PacketWriter s2;
					s2.Write((std::uint8_t)GO_PLAYER);
					s2.Write((std::uint8_t)EQUIP_WEAPON);
					s2.Write(2); //1 - melee | 2 - ranged
					s2.Write(this->rangedWeaponInstance);
					net->Send(s2, k_nSteamNetworkingSend_Reliable);
				}
			}
		}

		weaponBroadcastTimer = g1o::network::NowMilliseconds() + 1000;
	}
};

void CLocalPlayer::SendInstanceChange()
{
	if( instanceBroadcastTimer < g1o::network::NowMilliseconds() )
	{
		oCNpc* hero = oCNpc::GetHero();
		if( hero )
		{
			CNetwork* net = core.GetNetwork();
			zSTRING instance = hero->GetInstanceName();
			if( strcmp(instance.ToChar(), this->instance.c_str()) != 0 )
			{
				SPDLOG_TRACE("CLocalPlayer::SendInstanceChange()");
				this->instance = instance.ToChar();

				PacketWriter stream;
				stream.Write((std::uint8_t)GO_PLAYER);
				stream.Write((std::uint8_t)CHANGE_INSTANCE);
				stream.Write(this->instance);
				net->Send(stream, k_nSteamNetworkingSend_Reliable);

				instanceBroadcastTimer = g1o::network::NowMilliseconds() + 3000; //co 5 sekund xd | OK, ale lepiej co 3 xD
			}
		}
	}
};

void CLocalPlayer::SendHand()
{
	if( this->handBroadcastTimer < g1o::network::NowMilliseconds() )
	{
		oCNpc* hero = oCNpc::GetHero();
		if( hero )
		{
			CNetwork* net = core.GetNetwork();
			oCItem* leftHandIt = (oCItem*)hero->GetLeftHand();
			oCItem* rightHandIt = (oCItem*)hero->GetRightHand();
			if( leftHandIt )
			{
				if( strcmp(this->leftHand.c_str(), leftHandIt->GetInstanceName().ToChar()) != 0 )
				{
					this->leftHand = leftHandIt->GetInstanceName().ToChar();
					//core.GetChat()->AddLine(std::string("L+ %s", this->leftHand.c_str()), zCOLOR(255, 0, 0));
					SPDLOG_TRACE("Left hand: {}", this->leftHand.c_str());
					CEvent::UseItem(leftHand.c_str(), leftHandIt->GetAmount(), 0);

					PacketWriter stream;
					stream.Write((std::uint8_t)GO_PLAYER);
					stream.Write((std::uint8_t)ITEM_HAND);
					stream.Write(1); //Left hand
					stream.Write(this->leftHand);

					net->Send(stream, k_nSteamNetworkingSend_Reliable);
				}
			}
			else if( !leftHandIt )
			{
				if( strcmp(this->leftHand.c_str(), "NULL") != 0 )
				{
					this->leftHand = "NULL";
					//core.GetChat()->AddLine(std::string("L- %s", this->leftHand.c_str()), zCOLOR(255, 0, 0));
					SPDLOG_TRACE("Left hand: {}", this->leftHand.c_str());
					CEvent::UseItem("", 0, 0);

					PacketWriter stream;
					stream.Write((std::uint8_t)GO_PLAYER);
					stream.Write((std::uint8_t)ITEM_HAND);
					stream.Write(1);
					stream.Write(this->leftHand);

					net->Send(stream, k_nSteamNetworkingSend_Reliable);
				}
			}
			if( rightHandIt )
			{
				if( strcmp(this->rightHand.c_str(), rightHandIt->GetInstanceName().ToChar()) != 0 )
				{
					this->rightHand = rightHandIt->GetInstanceName().ToChar();
					//core.GetChat()->AddLine(std::string("R+ %s", this->rightHand.c_str()), zCOLOR(255, 0, 0));
					SPDLOG_TRACE("Right hand:{}", this->rightHand.c_str());
					CEvent::UseItem(rightHand.c_str(), rightHandIt->GetAmount(), 1);

					PacketWriter stream;
					stream.Write((std::uint8_t)GO_PLAYER);
					stream.Write((std::uint8_t)ITEM_HAND);
					stream.Write(2);
					stream.Write(this->rightHand);

					net->Send(stream, k_nSteamNetworkingSend_Reliable);
				}
			}
			else if( !rightHandIt )
			{
				if( strcmp(this->rightHand.c_str(), "NULL") != 0 )
				{
					this->rightHand = "NULL";
					//core.GetChat()->AddLine(std::string("R- %s", this->rightHand.c_str()), zCOLOR(255, 0, 0));
					SPDLOG_TRACE("Right hand:{}", this->rightHand.c_str());
					CEvent::UseItem("", 0, 1);

					PacketWriter stream;
					stream.Write((std::uint8_t)GO_PLAYER);
					stream.Write((std::uint8_t)ITEM_HAND);
					stream.Write(2);
					stream.Write(this->rightHand);
					net->Send(stream, k_nSteamNetworkingSend_Reliable);

				}
			}
		}
		this->handBroadcastTimer = g1o::network::NowMilliseconds() + 700;
	}
};

void CLocalPlayer::SendChangeLevel(std::string levelName)
{
	//Brak timera bo zmianą worldu nie da sie spamowac
	this->world = levelName;
	PacketWriter s;
	s.Write((std::uint8_t)GO_PLAYER);
	s.Write((std::uint8_t)CHANGE_LEVEL);
	s.Write(this->world);

	CNetwork* n = core.GetNetwork();	//Ustawilem unreliable, bo watek odbierajacy pakiety w tym momencie jest nieaktywny
	n->Send(s, k_nSteamNetworkingSend_UnreliableNoDelay);
};

void CLocalPlayer::SendEnterWorld()
{
	//Brak timera
	PacketWriter s;
	s.Write((std::uint8_t)GO_PLAYER);
	s.Write((std::uint8_t)ENTER_WORLD);

	CNetwork* n = core.GetNetwork(); //Jak bedzie gubic pakiety to ustawic na RELIABLE_OREDERED
	n->Send(s, k_nSteamNetworkingSend_UnreliableNoDelay);
};

void CLocalPlayer::SendHealth()
{
	oCNpc* hero = oCNpc::GetHero();
	if( hero )
	{
		if( hero->GetAttribute(NPC_ATR_HITPOINTS) != this->health )
		{
			PacketWriter stream;
			stream.Write((std::uint8_t)GO_PLAYER);
			stream.Write((std::uint8_t)SET_HEALTH);
			stream.Write(hero->GetAttribute(NPC_ATR_HITPOINTS));

			CNetwork* net = core.GetNetwork();
			net->Send(stream, k_nSteamNetworkingSend_Reliable);

			this->health = hero->GetAttribute(NPC_ATR_HITPOINTS);
		}
	}
};

void CLocalPlayer::SendMaxHealth()
{
	oCNpc* hero = oCNpc::GetHero();
	if( hero )
	{
		if( hero->GetAttribute(NPC_ATR_HITPOINTS_MAX) != this->maxhealth )
		{
			PacketWriter stream;
			stream.Write((std::uint8_t)GO_PLAYER);
			stream.Write((std::uint8_t)SET_HEALTH_MAX);
			stream.Write(hero->GetAttribute(NPC_ATR_HITPOINTS_MAX));

			CNetwork* net = core.GetNetwork();
			net->Send(stream, k_nSteamNetworkingSend_Reliable);

			this->maxhealth = hero->GetAttribute(NPC_ATR_HITPOINTS_MAX);
		}
	}
};

void CLocalPlayer::SendHitFocus(oCNpc *target)
{
	oCNpc* hero = oCNpc::GetHero();
	if (hero)
	{
		CNetwork* net = core.GetNetwork();
		CPlayer* focusPlayer = playerManager.GetPlayer(target);
		if (focusPlayer && net->GetPing() < PING_SYNC_LIMIT)
		{
			if (target->GetAttribute(NPC_ATR_HITPOINTS) < focusPlayer->health)
			{
				//Obliczanie ilosci hp do odjęcia
				int minushp = (focusPlayer->health - target->GetAttribute(NPC_ATR_HITPOINTS));
				if ((focusPlayer->health - minushp) == 1)
					minushp = 0;

				if (hero->GetWeaponMode() != NPC_WEAPON_NONE)
				{
						if (!target->IsDead())
						{
							if (!target->IsUnconscious() && minushp > 0)
							{
								PacketWriter stream;
								stream.Write((std::uint8_t)GO_PLAYER);
								stream.Write((std::uint8_t)ATTACK_HIT);
								stream.Write(focusPlayer->GetID());
								stream.Write(minushp);

								net->Send(stream, k_nSteamNetworkingSend_Reliable);

								focusPlayer->health = target->GetAttribute(NPC_ATR_HITPOINTS);
							}
							else if (!hero->IsHuman() || !target->IsHuman())
							{
								PacketWriter stream;
								stream.Write((std::uint8_t)GO_PLAYER);
								stream.Write((std::uint8_t)ATTACK_DEAD);
								stream.Write(focusPlayer->GetID());

								net->Send(stream, k_nSteamNetworkingSend_Reliable);
								if (target->IsUnconscious())
									target->DoDie(nullptr);

								focusPlayer->unconscious = false;
							}
							else if (!focusPlayer->unconscious)
							{
								PacketWriter stream;
								stream.Write((std::uint8_t)GO_PLAYER);
								stream.Write((std::uint8_t)ATTACK_UNCONSCIOUS);
								stream.Write(focusPlayer->GetID());

								net->Send(stream, k_nSteamNetworkingSend_Reliable);
								focusPlayer->unconscious = true;
							}
						}
						else
						{
							PacketWriter stream;
							stream.Write((std::uint8_t)GO_PLAYER);
							stream.Write((std::uint8_t)ATTACK_DEAD);
							stream.Write(focusPlayer->GetID());

							net->Send(stream, k_nSteamNetworkingSend_Reliable);

							if (target->IsUnconscious())
								target->DoDie(nullptr);

							focusPlayer->unconscious = false;
						}
				}
			}
			else if (focusPlayer->npc->IsUnconscious() && focusPlayer->unconscious == false)
			{
				PacketWriter stream;
				stream.Write((std::uint8_t)GO_PLAYER);
				stream.Write((std::uint8_t)ATTACK_UNCONSCIOUS);
				stream.Write(focusPlayer->GetID());

				net->Send(stream, k_nSteamNetworkingSend_Reliable);
				focusPlayer->unconscious = true;
			}
		}
	}
};

void CLocalPlayer::SendStandUp()
{
	if( this->standUpTimer < g1o::network::NowMilliseconds() )
	{
		oCNpc* hero = oCNpc::GetHero();
		if( hero )
		{
			if( this->unconscious == true )
			{
				if( hero->IsUnconscious() == 0 )
				{
					this->unconscious = false;
					//Wysłanie że wstaje
					PacketWriter stream;
					stream.Write((std::uint8_t)GO_PLAYER);
					stream.Write((std::uint8_t)STAND_UP);
					stream.Write(false); //Że wstaje, true - że pada
					core.GetNetwork()->Send(stream, k_nSteamNetworkingSend_Reliable);
				}
			}
			else
			{
				if( hero->IsUnconscious() == 1 )
				{
					//Standup na false, pada. ale tego raczej nie bedziemy robic
					this->unconscious = true;
				}
			}
		}
		this->standUpTimer = g1o::network::NowMilliseconds() + 1000;
	}
};

void CLocalPlayer::SendMagicSetup()
{
	oCNpc* hero = oCNpc::GetHero();
	if( !hero ) return;
	if( hero->GetWeaponMode() == NPC_WEAPON_MAG )
	{
		oCMag_Book* book = hero->GetSpellBook();
		if( book )
		{
			int mag_spellID = book->GetSelectedSpellNr();
			if( this->spellID != mag_spellID )
			{
				oCItem* item = book->GetSpellItem(mag_spellID);
				if( item )
				{
					//Bo buguje gre
					if(strcmp(item->GetInstanceName().ToChar(), "ITARRUNECONTROL") == 0)
					{
						hero->SetWeaponMode2(NPC_WEAPON_NONE);
						hero->_DoDropVob(item);
						item->RemoveVobFromWorld();
						return;
					} //Wymuszone usunięcie spela
					PacketWriter stream;
					stream.Write((std::uint8_t)GO_PLAYER);
					stream.Write((std::uint8_t)MAGIC_SETUP);
					stream.Write(std::string(item->GetInstanceName().ToChar()));
					CNetwork* net = core.GetNetwork();
					net->Send(stream, k_nSteamNetworkingSend_Reliable);
					//Wysłanie
					this->spellID = mag_spellID;
				}
			}
		}
	}
	else
	{
		if( this->spellID >= 0 )
		{
			//Wysłanie null
			PacketWriter stream;
			stream.Write((std::uint8_t)GO_PLAYER);
			stream.Write((std::uint8_t)MAGIC_SETUP);
			stream.Write(std::string("NULL"));
			CNetwork* net = core.GetNetwork();
			net->Send(stream, k_nSteamNetworkingSend_Reliable);
			//Wysłanie
			this->spellID = -1;
		}
	}
};

void CLocalPlayer::SendMagicAttack()
{
	oCNpc* hero = oCNpc::GetHero();
	if( hero )
	{
		oCNpc* focus = hero->GetFocusNpc();
		if( focus )
		{
			CPlayer* focusPlayer = playerManager.GetPlayer(focus);
			if( focusPlayer )
			{
				PacketWriter stream;
				stream.Write((std::uint8_t)GO_PLAYER);
				stream.Write((std::uint8_t)MAGIC_ATTACK);
				stream.Write(focusPlayer->GetID());
				CNetwork* net = core.GetNetwork();
				net->Send(stream, k_nSteamNetworkingSend_UnreliableNoDelay);
			}
			else
			{
				//brak celu
				PacketWriter stream;
				stream.Write((std::uint8_t)GO_PLAYER);
				stream.Write((std::uint8_t)MAGIC_ATTACK);
				stream.Write(-1);
				CNetwork* net = core.GetNetwork();
				net->Send(stream, k_nSteamNetworkingSend_UnreliableNoDelay);
			}
		}
		else
		{
			//brak celu
			PacketWriter stream;
			stream.Write((std::uint8_t)GO_PLAYER);
			stream.Write((std::uint8_t)MAGIC_ATTACK);
			stream.Write(-1);
			CNetwork* net = core.GetNetwork();
			net->Send(stream, k_nSteamNetworkingSend_UnreliableNoDelay);
		}
	}
};

void CLocalPlayer::SendOverlay(bool add, std::string overlay)
{
	if (overlay != "HUMANS_TORCH.MDS")
	{
		PacketWriter stream;
		stream.Write((std::uint8_t)GO_PLAYER);
		stream.Write((std::uint8_t)SET_OVERLAY);
		stream.Write(add);
		stream.Write(overlay);

		core.GetNetwork()->Send(stream, k_nSteamNetworkingSend_Reliable);
	}
}
void CLocalPlayer::SendTimedOverlay(std::uint64_t time, std::string overlay)
{
	PacketWriter stream;
	stream.Write((std::uint8_t)GO_PLAYER);
	stream.Write((std::uint8_t)SET_TIMED_OVERLAY);
	stream.Write(time);
	stream.Write(overlay);

	core.GetNetwork()->Send(stream, k_nSteamNetworkingSend_Reliable);
}

void CLocalPlayer::SendMobTrigger(bool trigger, oCMobInter *mob)
{
	zVEC3 pos = mob->GetPositionWorld();

	PacketWriter stream;
	stream.Write((std::uint8_t)GO_PLAYER);
	stream.Write((std::uint8_t)MOB_TRIGGER);
	stream.Write(trigger);
	stream.Write(this->world);
	stream.Write(pos[0]);
	stream.Write(pos[1]);
	stream.Write(pos[2]);

	core.GetNetwork()->Send(stream, k_nSteamNetworkingSend_Reliable);
}

void CLocalPlayer::SendArrow()
{
	int targetID = -1;
	int aniID, type;

	oCNpc *hero = oCNpc::GetHero();
	oCNpc *focus = hero->GetFocusNpc();

	if (focus)
	{
		CPlayer *focusPlayer = playerManager.GetPlayer(focus);
		if (focusPlayer)
			targetID = focusPlayer->GetID();
	}

	aniID = hero->GetAnimationID();
	type = hero->GetWeaponMode();

	PacketWriter stream;
	stream.Write((std::uint8_t)GO_PLAYER);
	stream.Write((std::uint8_t)SHOOT_ARROW);
	stream.Write(targetID);
	stream.Write(aniID);
	stream.Write(type);

	core.GetNetwork()->Send(stream, k_nSteamNetworkingSend_Reliable);
}

void CLocalPlayer::SendFocus(int focusID, bool taken)
{
	PacketWriter stream;
	stream.Write((std::uint8_t)GO_SCRIPT);
	stream.Write((std::uint8_t)SCRIPT_FOCUS);
	stream.Write(taken);
	stream.Write(focusID);

	core.GetNetwork()->Send(stream, k_nSteamNetworkingSend_Reliable);
}
/*
void CLocalPlayer::SendProtection()
{
	if (this->protectionBroadcastTimer < g1o::network::NowMilliseconds())
	{
		oCNpc *hero = oCNpc::GetHero();

		int protWeapon = hero->GetProtection(PROT_WEAPON);
		int protArrow = hero->GetProtection(PROT_ARROW);
		int protFire = hero->GetProtection(PROT_FIRE);
		int protMagic = hero->GetProtection(PROT_MAGIC);

		CNetwork* net = core.GetNetwork();

		if (protWeapon != protection[0])
		{
			PacketWriter stream;
			stream.Write((std::uint8_t)GO_PLAYER);
			stream.Write((std::uint8_t)SET_PROTECTION);
			stream.Write(0);
			stream.Write(protWeapon);

			net->Send(stream, k_nSteamNetworkingSend_Reliable);

			protection[0] = protWeapon;
		}

		if (protArrow != protection[1])
		{
			PacketWriter stream;
			stream.Write((std::uint8_t)GO_PLAYER);
			stream.Write((std::uint8_t)SET_PROTECTION);
			stream.Write(1);
			stream.Write(protArrow);

			net->Send(stream, k_nSteamNetworkingSend_Reliable);

			protection[1] = protArrow;
		}

		if (protFire != protection[2])
		{
			PacketWriter stream;
			stream.Write((std::uint8_t)GO_PLAYER);
			stream.Write((std::uint8_t)SET_PROTECTION);
			stream.Write(2);
			stream.Write(protFire);

			net->Send(stream, k_nSteamNetworkingSend_Reliable);

			protection[2] = protFire;
		}

		if (protMagic != protection[3])
		{
			PacketWriter stream;
			stream.Write((std::uint8_t)GO_PLAYER);
			stream.Write((std::uint8_t)SET_PROTECTION);
			stream.Write(3);
			stream.Write(protMagic);

			net->Send(stream, k_nSteamNetworkingSend_Reliable);

			protection[3] = protMagic;
		}

		this->protectionBroadcastTimer = g1o::network::NowMilliseconds() + 1200;
	}
};
*/

void CLocalPlayer::BroadcastWorld()
{
	if( this->worldBroadcastTimer < g1o::network::NowMilliseconds() )
	{
		oCWorld* zworld = oCGame::GetGame()->GetGameWorld();
		if( zworld )
		{
			std::string worldName = std::string(zworld->GetWorldName().ToChar()) + ".ZEN";
			if( strcmp(this->world.c_str(), worldName.c_str()) != 0 )
			{
				playerManager.DestroyAllPlayers();
				this->SendChangeLevel(worldName);
				this->SendEnterWorld();
			}
			worldName.clear();
		}
		this->worldBroadcastTimer = g1o::network::NowMilliseconds() + 800;
	}
};

void CLocalPlayer::Respawn()
{
	if( lastDeathTimer < g1o::network::NowMilliseconds() )
	{
		oCNpc* hero = oCNpc::GetHero();
		if( hero->IsDead() )
		{
			if( isDead == false )
			{
				lastDeathTimer = g1o::network::NowMilliseconds() + 5000;
				isDead = true;

				if (hero->IsHuman())
				{
					// Unequip weapons
					oCItem *meleeWeapon = hero->GetEquippedMeleeWeapon();
					if (meleeWeapon) hero->UnequipItem(meleeWeapon);
					oCItem *rangedWeapon = hero->GetEquippedRangedWeapon();
					if (rangedWeapon) hero->UnequipItem(rangedWeapon);

					oCItem* leftHand = (oCItem*)hero->GetLeftHand();
					if (leftHand)
					{
						hero->_DoDropVob(leftHand);

						int amount = leftHand->GetAmount();
						zSTRING instance = leftHand->GetInstanceName();

						leftHand->RemoveVobFromWorld();
						hero->CreateItem(instance, amount);
					}
					oCItem* rightHand = (oCItem*)hero->GetRightHand();
					if (rightHand)
					{
						hero->_DoDropVob(rightHand);

						int amount = rightHand->GetAmount();
						zSTRING instance = rightHand->GetInstanceName();

						rightHand->RemoveVobFromWorld();
						hero->CreateItem(instance, amount);
					}
				}

				return;
			}
			else
			{
				zVEC3 pos = oCGame::GetGame()->GetStartPos();
				hero->SetAttribute(NPC_ATR_HITPOINTS, 1);
				hero->SetPosition(pos[0], pos[1] + 15, pos[2]);
				hero->ForceStandUp();
				hero->GetModel()->FadeOutAnisLayerRange(1, 2000);
				isDead = false;
				unconscious = false;

				oCGame* game = oCGame::GetGame();
				if (game->GetShowPlayerStatus())
				{
					game->SetShowPlayerStatus(0);
					game->SetShowPlayerStatus(1);
				}

			}
		}
		else
			isDead = false;
		lastDeathTimer = g1o::network::NowMilliseconds() + 300;
	}
};

void CLocalPlayer::Unconscious()
{
	if (oCNpc::GetHero()->IsUnconscious() && !this->unconscious && scr.GetScriptVars()->isUnconsciousEnabled)
	{
		this->unconscious = true;
	}
}

void CLocalPlayer::ReleaseMob()
{
	if (lastMob)
	{
		oCNpc *hero = oCNpc::GetHero();

		zVEC3 posMob = lastMob->GetPositionWorld();
		zVEC3 posHero = hero->GetPosition();

		if (goMath::GetDistance3D(posMob[0], posMob[1], posMob[2], posHero[0], posHero[1], posHero[2]) < 150)
		{
			SendMobTrigger(false, lastMob);
			lastMob->SendStateChange(1, 0);
			lastMob->EndInteraction(hero, 1);
			lastMob->SetState(1, 0);
			lastMob->Hook_OnUntrigger(lastMob, hero);
		}
		lastMob = NULL;
	}
}

void CLocalPlayer::HandleFocus()
{
	static oCNpc *hasFocus = NULL;
	static int focusID = -1;

	if (focusTimer < g1o::network::NowMilliseconds())
	{
		oCNpc *focus = oCNpc::GetHero()->GetFocusNpc();
		if (focus)
		{
			if (hasFocus && focus && hasFocus != focus)
			{
				hasFocus = focus;

				SendFocus(focusID, false);

				CPlayer *player = playerManager.GetPlayer(focus);

				focusID = player ? player->GetID() : -1;

				SendFocus(focusID, true);
			}
			else if (!hasFocus)
			{
				hasFocus = focus;

				CPlayer *player = playerManager.GetPlayer(focus);

				focusID = player ? player->GetID() : -1;

				SendFocus(focusID, true);
			}
		}
		else if (hasFocus)
		{
			hasFocus = NULL;
			SendFocus(focusID, false);
		}

		focusTimer = g1o::network::NowMilliseconds() + 50;
	}
}
