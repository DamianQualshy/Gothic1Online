#include "../stdafx.h"

void zCModel::Hook_StartAni(zCModelAni *pA, int pB)
{
	g1o::hooking::GetHookManager().Remove(0x005612F0);
	if (!CAnimation::GetInstance().IsAniBlockedForAll(pA))
	{
		//core.GetChat()->AddLine(std::string("%s %d %d", pA->GetAniName().ToChar(), pA->GetAniID(), pB), zCOLOR(255, 255, 0));
		//this->StartAni(pA, pB);
		if(oCNpc::GetHero())
		{
			if (this == oCNpc::GetHero()->GetModel())
			{
				if (pA)
				{
					if (CAnimation::GetInstance().IsAnimationTurning(pA->GetAniName().ToChar()) == false && pA->GetAniID() > 0)
					{
						core.GetChat()->AddLine(std::string("AniName: ") + pA->GetAniName().ToChar() +
							" ID:" + std::to_string(pA->GetAniID()), zCOLOR(255, 0, 0, 255));
						this->StartAni(pA, pB);
						/*int aniID = pA->GetAniID();
						if (core.GetNetwork()->IsConnected() == true)
						{
							//playerManager.GetLocalPlayer()->SendPlayAnimation(aniID, pB);
						}*/
					}
				}
			}
			else
				this->StartAni(pA, pB);
		}
	}
	g1o::hooking::GetHookManager().Install(0x005612F0, &zCModel::Hook_StartAni);
};
