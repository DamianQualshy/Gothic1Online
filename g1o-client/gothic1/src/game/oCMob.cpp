#include "../stdafx.h"
#include <iterator>

namespace {
const char* const mobDoor[] = {
	"TPL_DOORDECO_V1.3DS", "EVT_TPL_DECOSTONE_01_DOORS_01.3DS",
	"EVT_TPL_DECOSTONE_01_DOORS_02.3DS", "DOOR_WOODEN.ASC", "DOOR_WOODEN.MDS"
};

const char* const mobBed[] = {
	"ORC_E_BED.3DS", "ORC_BED_01.3DS", "DT_BED_V1.3DS", "BED_1_OC.ASC",
	"BED_2_OC.ASC", "BEDHIGH_1_OC.ASC", "BEDHIGH_2_OC.ASC", "BEDHIGH_PSI.ASC",
	"BEDHIGH_PC.ASC", "BEDLOW_NC.ASC", "BEDLOW_OC.ASC", "BEDLOW_PC.ASC", "BEDLOW_PSI.ASC"
};

const char* const mobLadder[] = {
	"LADDER_2.ASC", "LADDER_3.ASC", "LADDER_4.ASC", "LADDER_5.ASC", "LADDER_6.ASC",
	"LADDER_7.ASC", "LADDER_8.ASC", "LADDER_9.ASC", "LADDER_10.ASC"
};

const char* const mobInter[] = {
	"BENCH_1_NC.ASC", "BENCH_1_OC.ASC", "BENCH_2_OC.ASC", "BENCH_3_OC.ASC",
	"BENCH_THRONE.ASC", "CHAIR_1_NC.ASC", "CHAIR_1_OC.ASC", "CHAIR_1_PC.ASC",
	"CHAIR_2_NC.ASC", "CHAIR_2_OC.ASC", "CHAIR_3_PC.ASC", "CHAIR_3_OC.ASC",
	"CHAIR_THRONE.ASC", "THRONE_BIG.ASC", "BARBQ_SCAV.ASC", "HERB_PSI.ASC",
	"LAB_PSI.ASC", "BSANVIL_OC.ASC", "BSSHARP_OC.ASC", "BSCOOL_OC.ASC",
	"BSFIRE_OC.ASC", "CHESTBIG_OCCHESTLARGE.ASC", "CHESTBIG_OCCHESTMEDIUM.ASC",
	"CHESTSMALL_OCCHESTSMALL.ASC", "CHESTBIG_ORCMUMMY.ASC", "CHESTSMALL_OCCRATESMALL.ASC",
	"CHESTBIG_OCCRATELARGE.ASC", "VWHEEL_1_OC.ASC", "ORE_GROUND.ASC",
	"FIREPLACE_GROUND.ASC", "FIREPLACE_NCSTONE.ASC", "FIREPLACE_NCSTONE2.ASC",
	"FIREPLACE_ORCSTAND.ASC", "FIREPLACE_HIGH.ASC", "FIREPLACE_HIGH2.ASC",
	"FIREPLACE_MIDDLE.ASC", "FIREPLACE_GROUND2.ASC", "FIREPLACE_PCHIGH.ASC",
	"FIREPLACE_PCHIGH2.ASC", "CAULDRON_OC.ASC", "LOVEBED_OC.ASC",
	"BATHTUB_WOODEN.ASC", "SMOKE_WATERPIPE.ASC"
};
}

bool MobType::IsDoor(zSTRING& visual)
{
	const char* vis = visual.Upper().ToChar();
	for(size_t i = 0; i < std::size(mobDoor); ++i)
		if(strcmp(mobDoor[i], vis) == 0)
			return true;
	return false;
};

bool MobType::IsBed(zSTRING& visual)
{
	const char* vis = visual.Upper().ToChar();
	for(size_t i = 0; i < std::size(mobBed); ++i)
		if(strcmp(mobBed[i], vis) == 0)
			return true;
	return false;
};

bool MobType::IsLadder(zSTRING& visual)
{
	const char* vis = visual.Upper().ToChar();
	for(size_t i = 0; i < std::size(mobLadder); ++i)
		if(strcmp(mobLadder[i], vis) == 0)
			return true;
	return false;
};

bool MobType::IsInter(zSTRING& visual)
{
	const char* vis = visual.Upper().ToChar();
	for(size_t i = 0; i < std::size(mobInter); ++i)
		if(strcmp(mobInter[i], vis) == 0)
			return true;
	return false;
};

void oCMobInter::Hook_OnTrigger(zCVob *target, zCVob *sender)
{
	pMemLib->RemoveHook(0x0067D300);
	if (this->GetS1() && !this->GetS2())
	{
		if (oCNpc::GetHero() == (oCNpc*)sender)
		{
			CEvent::MobTrigger(this);

			switch (::GetVobType(this))
			{
			case VOB_TYPE_VT_OCMOBSWITCH:
			case VOB_TYPE_VT_OCMOBWHEEL:
			case VOB_TYPE_VT_OCMOBDOOR:
				playerManager.GetLocalPlayer()->SendMobTrigger(true, this);
				break;
			case VOB_TYPE_VT_OCMOBINTER:
			case VOB_TYPE_VT_OCMOBCONTAINER:
				if (!this->GetName().IsEmpty())
				{
					playerManager.GetLocalPlayer()->lastMob = this;
					playerManager.GetLocalPlayer()->SendMobTrigger(true, this);
				}
				break;
			}
		}
		this->OnTrigger(target, sender);
	}
	pMemLib->ImportHook(0x0067D300, sizeof(void(oCMobInter::*)(zCVob*, zCVob*)), &oCMobInter::Hook_OnTrigger);
}

void oCMobInter::Hook_OnUntrigger(zCVob *target, zCVob *sender)
{
	pMemLib->RemoveHook(0x0067D5F0);
	if (!this->GetS1() && this->GetS2())
	{
		if (oCNpc::GetHero() == (oCNpc*)sender)
		{
			CEvent::MobUntrigger(this);

			switch (::GetVobType(this))
			{
			case VOB_TYPE_VT_OCMOBSWITCH:
			case VOB_TYPE_VT_OCMOBWHEEL:
			case VOB_TYPE_VT_OCMOBDOOR:
				playerManager.GetLocalPlayer()->SendMobTrigger(false, this);
				break;
			case VOB_TYPE_VT_OCMOBINTER:
			case VOB_TYPE_VT_OCMOBCONTAINER:
				if (!this->GetName().IsEmpty())
				{
					playerManager.GetLocalPlayer()->lastMob = NULL;
					playerManager.GetLocalPlayer()->SendMobTrigger(false, this);
				}
				break;
			}
		}
		this->OnUntrigger(target, sender);
	}
	pMemLib->ImportHook(0x0067D5F0, sizeof(void(oCMobInter::*)(zCVob*, zCVob*)), &oCMobInter::Hook_OnUntrigger);
}
