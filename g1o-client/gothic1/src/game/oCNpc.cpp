#include "../stdafx.h"



zCModelAni* oCNpc::GetCurrentAni()
{
	zCModel* model = GetModel();
	if( model )
	{
		for( size_t i = 1; i < 1210; i++ )
		{
			zCModelAni* animation = model->GetAniFromAniID(i);
			if( animation )
			{
				if( CAnimation::GetInstance().IsAniBlockedForAll(animation) == false && CAnimation::GetInstance().IsAnimationTurning(RakString(animation->GetAniName().ToChar())) == false )
				{
					if( model->IsAnimationActive(animation->GetAniName()) )
					{
						if( !IsHuman() )
						{
							if( i != 341 )
								return animation;
						}
						else return animation;		
					}
				}
			}
		}
	}
	return NULL;
};

zSTRING oCNpc::GetAnimationName()
{
	zCModelAni *model = GetCurrentAni();
	if (model)
		return model->GetAniName();

	return zSTRING("UNKNOWN");
}

int oCNpc::GetAnimationID()
{
	zCModelAni *model = GetCurrentAni();
	if (model)
		return model->GetAniID();

	return -1;
}

void oCNpc::SetSkillWeapon(int skillID, unsigned value)
{
	if (skillID > 0 && skillID <= 4)
	{
		if (value >= 0 && value < 30)
			SetTalentSkill(skillID, LOW);
		else if (value >= 30 && value < 60)
			SetTalentSkill(skillID, MEDIUM);
		else if (value >= 60 && value <= 100)
			SetTalentSkill(skillID, MASTER);

		SetTalentValue(skillID, value);
	}
};

int oCNpc::GetSkillWeapon(int skillID)
{
	if (skillID > 0 && skillID <= 4)
		return GetTalentValue(skillID);

	return 0;
};

void oCNpc::SetProtection(int type, int value)
{
	if (value < 0) value = 0;

	switch (type)
	{
	case PROT_WEAPON:
		protection[oEDamageIndex_Edge] = value;
		protection[oEDamageIndex_Blunt] = value;
		break;

	case PROT_ARROW:
		protection[oEDamageIndex_Point] = value;
		break;

	case PROT_FIRE:
		protection[oEDamageIndex_Fire] = value;
		break;

	case PROT_MAGIC:
		protection[oEDamageIndex_Magic] = value;
		break;
	}
};

int oCNpc::GetProtection(int type)
{
	switch (type)
	{
	case PROT_WEAPON:
		return protection[oEDamageIndex_Blunt];
		break;

	case PROT_ARROW:
		return protection[oEDamageIndex_Point];
		break;

	case PROT_FIRE:
		return protection[oEDamageIndex_Fire];
		break;

	case PROT_MAGIC:
		return protection[oEDamageIndex_Magic];
		break;
	}

	return 0;
};

int oCNpc::_DoDropVob(zCVob* vob)	//0x006A10F0
{
	g1o::hooking::GetHookManager().Remove(0x006A10F0);
	const int result = this->DoDropVob(vob);
	g1o::hooking::GetHookManager().Install(0x006A10F0, &oCNpc::Hook_DoDropVob);
	return result;
};

int oCNpc::_DoTakeVob(zCVob* vob)	//0x006A0D10
{
	g1o::hooking::GetHookManager().Remove(0x006A0D10);
	const int result = this->DoTakeVob(vob);
	g1o::hooking::GetHookManager().Install(0x006A0D10, &oCNpc::Hook_DoTakeVob);
	return result;
};

void oCNpc::ClearInventory()
{
	oCItem* melee = GetEquippedMeleeWeapon();
	oCItem* ranged = GetEquippedRangedWeapon();
	oCItem* armor = GetEquippedArmor();
	if( melee )
	{
		UnequipItem(melee);
		_DoDropVob(melee);
		melee->RemoveVobFromWorld();
	}
	if( ranged )
	{
		UnequipItem(ranged);
		_DoDropVob(ranged);
		ranged->RemoveVobFromWorld();

	}
	if( armor )
	{
		UnequipItem(armor);
		_DoDropVob(armor);
		armor->RemoveVobFromWorld();
	}
	oCItem* item = NULL;
	for( int i = 0; i < 2; ++i )	//Trzeba usuwać dwa razy bo nie wywala wszystkich itemów za pierwszym
	{
		for( int j = 0; j < 5000; ++j )
		{
			item = IsInInv(j,0);
			if( item )
			{
				_DoDropVob(item);
				item->RemoveVobFromWorld();
			}
			item = NULL;
		}
	}
};

void oCNpc::ForceStandUp()
{
	this->DoDie(nullptr);
	this->SetAttribute(NPC_ATR_HITPOINTS, 1);

	zCModel* model = this->GetModel();
	if( model )
	{
		if(model->IsAnimationActive(zSTRING("S_WOUNDEDB")))
			model->StartAni(zSTRING("T_WOUNDEDB_2_STAND"),0);
		else if(model->IsAnimationActive(zSTRING("S_WOUNDED")))
			model->StartAni(zSTRING("T_WOUNDED_2_STAND"),0);
	}

};

oCItem* oCNpc::CreateItem(zSTRING const& instance, int amount) //Przetestowac ta funkcje przy SetLeftHand
{
	int insIndex = zCParser::GetParser()->GetIndex(instance);
	if( insIndex > 0 )
	{
		oCItem* item = oCObjectFactory::GetFactory()->CreateItem(insIndex);
		if(item)
		{
			item->SetAmount(amount);
			this->DoPutInInventory(item);
			return item;
		}

	}
	return NULL;
};

void oCNpc::DestroyNpc()
{
	oCGame* game = oCGame::GetGame();
	if( game )
	{
		zCWorld* world = game->GetGameWorld();
		if( world )
		{
			if( this )
			{
				world->RemoveVob(this);
			}
		}

	}
};

void oCNpc::SetHeading(float angle)
{
	this->ResetRotationsWorld();
	this->RotateWorldY(angle);
};

float oCNpc::GetHeading()
{
	const zVEC3 at = trafoObjToWorld.GetAtVector();
	float x = at[0]; //Glownie operujemy na tym
	float rotx = asin(x) * 180.0f / 3.14f;

	float y = at[2]; // +/- (+ polnocna, - poludniowa)

	if(y > 0) //Polnocna polkula
	{
		if(x < 0)
			rotx = 360 + rotx;
	}
	else //Poludniowa polkula
	{
		if(rotx > 0) // (90 < rotx < 180)
			rotx = 180 - rotx;
		else //(x < 0) | (180 < rotx < 270)
		{
			rotx = 180 + rotx;
				rotx = 360 - rotx;
		}
	}										
	return rotx;
};

void oCNpc::_SetMovLock(int e)
{
	g1o::hooking::GetHookManager().Remove(0x00694C50);
	SetMovLock(e);
	g1o::hooking::GetHookManager().Install(0x00694C50, &oCNpc::Hook_SetMovLock);
};

void oCNpc::_OpenInventory()
{
	g1o::hooking::GetHookManager().Remove(0x006BB0A0);
	OpenInventory();
	g1o::hooking::GetHookManager().Install(0x006BB0A0, &oCNpc::Hook_OpenInventory);
};

void oCNpc::_CloseInventory()
{
	g1o::hooking::GetHookManager().Remove(0x006BB2F0);
	CloseInventory();
	g1o::hooking::GetHookManager().Install(0x006BB2F0, &oCNpc::Hook_CloseInventory);
};

int oCNpc::_ApplyOverlay(zSTRING const& overlay)
{
	g1o::hooking::GetHookManager().Remove(0x0068AD40);
	int returned = ApplyOverlay(overlay);
	g1o::hooking::GetHookManager().Install(0x0068AD40, &oCNpc::Hook_ApplyOverlay);

	return returned;
};

void oCNpc::_RemoveOverlay(zSTRING const& overlay)
{
	g1o::hooking::GetHookManager().Remove(0x0068B040);
	RemoveOverlay(overlay);
	g1o::hooking::GetHookManager().Install(0x0068B040, &oCNpc::Hook_RemoveOverlay);
};

