#include "../stdafx.h"

void oCMag_Book::Hook_Spell_Cast()
{
	g1o::hooking::GetHookManager().Remove(0x0046FC00);
	if( this == oCNpc::GetHero()->GetSpellBook() )
	{
		SPDLOG_TRACE("oCMag_Book::Hook_Spell_Cast()");
		if( core.GetNetwork()->IsInitiated() == true && core.GetNetwork()->IsConnected() == true )
			playerManager.GetLocalPlayer()->SendMagicAttack();
	}
	this->Spell_Cast();
	g1o::hooking::GetHookManager().Install(0x0046FC00, &oCMag_Book::Hook_Spell_Cast);
};
