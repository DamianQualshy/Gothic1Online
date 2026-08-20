#include "../stdafx.h"


oCNpc* oCGame::CreateNPC(zSTRING const& instance, float x, float y, float z)
{
	int insIndex = zCParser::GetParser()->GetIndex(instance);
	if(insIndex > 0)
	{
		oCNpc* npc = oCObjectFactory::GetFactory()->CreateNpc(insIndex);
		if( npc )
		{
			zVEC3 position(x, y, z);
			npc->Enable(position);
			npc->SetPositionWorld(position);
			npc->SetAttitude(NPC_ATTITUDE_FRIENDLY); //Żeby nie atakował bez powodu
			if( npc->IsHuman() )
			{
				npc->SetFlag(1);
				npc->ClearInventory();
			}
		return npc;
		}
	}
	DLOG("Cannot create npc");
	return NULL;
};
