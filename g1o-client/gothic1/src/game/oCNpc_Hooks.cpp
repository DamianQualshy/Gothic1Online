#include "../stdafx.h"

int oCNpc::Hook_DoDropVob(zCVob *vob)
{
	g1o::hooking::GetHookManager().Remove(0x006A10F0);
	oCItem* item = reinterpret_cast<oCItem*>(vob);
	if( strcmp(item->GetInstanceName().ToChar(), "ITLSTORCHBURNING") != 0 )	//Jebane pochodnie
	{
		if( this == oCNpc::GetHero() )
		{
			this->_DoDropVob(vob);
			itemManager.SendDropItem(std::string(item->GetInstanceName().ToChar()), item->GetPositionWorld(), item->GetAmount());
			vob->RemoveVobFromWorld();
		}
		else
			this->_DoDropVob(vob);
	}
	g1o::hooking::GetHookManager().Install(0x006A10F0, &oCNpc::Hook_DoDropVob);
	return 0;
};               

int oCNpc::Hook_DoTakeVob(zCVob *vob)
{
	g1o::hooking::GetHookManager().Remove(0x006A0D10);
	//core.GetChat()->AddLine(std::string("Take item"), zCOLOR(255,0,0,255));
	if( this == oCNpc::GetHero() )
	{
		this->_DoTakeVob(vob);
		/*if( itemManager.SendTakeItem(reinterpret_cast<oCItem*>(vob)) == false )
			this->DoDropVob(vob);*/
		itemManager.SendTakeItem(reinterpret_cast<oCItem*>(vob));
	}
	else
		this->_DoTakeVob(vob);
	g1o::hooking::GetHookManager().Install(0x006A0D10, &oCNpc::Hook_DoTakeVob);
	//Wysyłanie podniesienia itemu
	return 0;
};

void oCNpc::Hook_SetMovLock(int e)
{
	g1o::hooking::GetHookManager().Remove(0x00694C50);
	SetMovLock(scr.GetScriptVars()->isFrozen ? true : e);
	g1o::hooking::GetHookManager().Install(0x00694C50, &oCNpc::Hook_SetMovLock);
};

void oCNpc::Hook_OpenInventory()
{
	g1o::hooking::GetHookManager().Remove(0x006BB0A0);

	if (scr.GetScriptVars()->isEqEnabled && !scr.GetScriptVars()->isFrozen)
	{
		OpenInventory();
		if (IsInvOpen()) CEvent::OpenInventory();
	}
		
	g1o::hooking::GetHookManager().Install(0x006BB0A0, &oCNpc::Hook_OpenInventory);
};

void oCNpc::Hook_CloseInventory()
{
	g1o::hooking::GetHookManager().Remove(0x006BB2F0);

	if (IsInvOpen())
	{
		CloseInventory();
		CEvent::CloseInventory();
	}

	g1o::hooking::GetHookManager().Install(0x006BB2F0, &oCNpc::Hook_CloseInventory);
}; 

int oCNpc::Hook_ApplyOverlay(zSTRING const& overlay)
{
	g1o::hooking::GetHookManager().Remove(0x0068AD40);

	int result = ApplyOverlay(overlay);
	if (this == oCNpc::GetHero() && result)
		playerManager.GetLocalPlayer()->SendOverlay(true, overlay.ToChar());

	g1o::hooking::GetHookManager().Install(0x0068AD40, &oCNpc::Hook_ApplyOverlay);
	return result;
};

void oCNpc::Hook_RemoveOverlay(zSTRING const& overlay)
{
	g1o::hooking::GetHookManager().Remove(0x0068B040);
	RemoveOverlay(overlay);
	if (this == oCNpc::GetHero())
		playerManager.GetLocalPlayer()->SendOverlay(false, overlay.ToChar());
	g1o::hooking::GetHookManager().Install(0x0068B040, &oCNpc::Hook_RemoveOverlay);
};

int oCNpc::Hook_ApplyTimedOverlayMds(zSTRING const& overlay, float time)
{
	g1o::hooking::GetHookManager().Remove(0x006B0C60);

	int result = ApplyTimedOverlayMds(overlay, time);
	if (this == oCNpc::GetHero() && result)
		playerManager.GetLocalPlayer()->SendTimedOverlay(time, overlay.ToChar());

	g1o::hooking::GetHookManager().Install(0x006B0C60, &oCNpc::Hook_ApplyTimedOverlayMds);
	return result;
}

void oCNpc::Hook_DropUnconscious(float time, oCNpc* npc)
{
	g1o::hooking::GetHookManager().Remove(0x00692C10);
	if (scr.GetScriptVars()->isUnconsciousEnabled)
		this->DropUnconscious(time, npc);
	g1o::hooking::GetHookManager().Install(0x00692C10, &oCNpc::Hook_DropUnconscious);
}

int oCNpc::Hook_DoShootArrow(int p)
{
	g1o::hooking::GetHookManager().Remove(0x006A09F0);
	if (this == oCNpc::GetHero())
		playerManager.GetLocalPlayer()->SendArrow();
	const int result = this->DoShootArrow(p);
	g1o::hooking::GetHookManager().Install(0x006A09F0, &oCNpc::Hook_DoShootArrow);
	return result;
}

void oCNpc::Hook_OnDamage_Anim(oSDamageDescriptor &dmgDes)
{
	//g1o::hooking::GetHookManager().Remove(0x00741990);
	//g1o::hooking::GetHookManager().Install(0x00741990, &oCNpc::Hook_OnDamage);
}

void oCNpc::Hook_OnDamage_Script(oSDamageDescriptor &dmgDes) //0x00738E40
{
	g1o::hooking::GetHookManager().Remove(0x00738E40);
	if (scr.GetScriptVars()->isSpawningEnabled)
		this->OnDamage_Script(dmgDes);

	if (this != oCNpc::GetHero() && dmgDes.pNpcAttacker == oCNpc::GetHero())
		playerManager.GetLocalPlayer()->SendHitFocus(this);
	g1o::hooking::GetHookManager().Install(0x00738E40, &oCNpc::Hook_OnDamage_Script);
}

void oCNpc::Fake_DropAllInHand()
{
	return;
};


void oCNpc::Fake_Disable()
{
	/*if( playerManager.IsPlayerSynchronised(this) == true )
		return;
	else
	{
		g1o::hooking::GetHookManager().Remove(0x006A1D20);
		this->Disable();
		g1o::hooking::GetHookManager().Install(0x006A1D20, &oCNpc::Fake_Disable);
	}*/
	return;
};
