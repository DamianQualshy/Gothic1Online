#ifndef G1O_GOTHIC_COMPATIBILITY_H
#define G1O_GOTHIC_COMPATIBILITY_H

#include <cstdint>

static const int NPC_ATR_HITPOINTS_MAX = NPC_ATR_HITPOINTSMAX;
static const int NPC_ATR_MANA_MAX = NPC_ATR_MANAMAX;
static const int NPC_TALENT_PICKLOCK = oCNpcTalent::NPC_TAL_PICKLOCK;
static const int NPC_TALENT_PICKPOCKET = oCNpcTalent::NPC_TAL_PICKPOCKET;
static const int NPC_TALENT_MAGE = oCNpcTalent::NPC_TAL_MAGE;
static const int NPC_TALENT_SNEAK = oCNpcTalent::NPC_TAL_SNEAK;
static const int NPC_TALENT_ACROBAT = oCNpcTalent::NPC_TAL_ACROBAT;
static const int NPC_ATTITUDE_FRIENDLY = Gothic_I_Classic::NPC_ATT_FRIENDLY;

enum oCNpc_Skill { LOW, MEDIUM, MASTER };
enum oCNpc_Protection { PROT_WEAPON, PROT_ARROW, PROT_FIRE, PROT_MAGIC };
using oCNpc_WeaponMode = int;

enum zTVobTypeVT : std::uintptr_t {
    VOB_TYPE_VT_OCMOB = 0x007DDCFC,
    VOB_TYPE_VT_OCMOBBED = 0x007DD1CC,
    VOB_TYPE_VT_OCMOBCONTAINER = 0x007DD3FC,
    VOB_TYPE_VT_OCMOBDOOR = 0x007DD8AC,
    VOB_TYPE_VT_OCMOBFIRE = 0x007DD9E4,
    VOB_TYPE_VT_OCMOBINTER = 0x007DDDB4,
    VOB_TYPE_VT_OCMOBITEMSLOT = 0x007DDB04,
    VOB_TYPE_VT_OCMOBLADDER = 0x007DD794,
    VOB_TYPE_VT_OCMOBLOCKABLE = 0x007DD544,
    VOB_TYPE_VT_OCMOBMSG = 0x007DDC9C,
    VOB_TYPE_VT_OCMOBSWITCH = 0x007DD2E4,
    VOB_TYPE_VT_OCMOBWHEEL = 0x007DD67C,
    VOB_TYPE_VT_ZCTRIGGER = 0x007DBF2C,
    VOB_TYPE_VT_ZCTRIGGERLIST = 0x007DB94C,
    VOB_TYPE_VT_ZCTRIGGERTELEPORT = 0x007DB9CC,
    VOB_TYPE_VT_ZCTRIGGERUNTOUCH = 0x007DB67C,
    VOB_TYPE_VT_ZCTRIGGERWORLDSTART = 0x007DB8D4,
    VOB_TYPE_VT_OCNPC = 0x007DDF34,
    VOB_TYPE_VT_OCVOB = 0x007DE74C,
    VOB_TYPE_VT_ZCVOB = 0x007DB44C,
    VOB_TYPE_VT_ZCVOBLIGHT = 0x007DB534,
    VOB_TYPE_VT_ZCVOBSOUND = 0x007DC76C,
    VOB_TYPE_VT_ZCVOBSTARTPOINT = 0x007DEBB4,
    VOB_TYPE_VT_ZCVOBWAYPOINT = 0x007DEA6C,
    VOB_TYPE_VT_ERROR = 0x77FFFFFF
};

inline zTVobTypeVT GetVobType(const zCVob* vob) {
    return vob ? static_cast<zTVobTypeVT>(*reinterpret_cast<const std::uintptr_t*>(vob)) : VOB_TYPE_VT_ERROR;
}

namespace MobType {
    bool IsBed(zSTRING& visual);
    bool IsDoor(zSTRING& visual);
    bool IsLadder(zSTRING& visual);
    bool IsInter(zSTRING& visual);
}

#include "Cursor.h"

int Apply_Options_Video();
void Fake_HandleResultString(zSTRING value);
int Hook_Apply_Options_Video();
int ConsoleEval(zSTRING const& command, zSTRING& message);
void HandleResultString(zSTRING value);
int __cdecl vidGetFPSRate();

#endif
