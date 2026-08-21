#include "../stdafx.h"

zCView* zCView::CreateView(int x, int y, int width, int height, zSTRING const& texture)
{
	zCView* view = new zCView(x, y, width, height);
	if( view )
	{
		view->InsertBack(texture);
		return view;
	}
	return NULL;
};

void zCView::Hook_Print(int p1, int p2, zSTRING const& p3)
{
	pMemLib->RemoveHook(0x006FFEB0);
	oCNpc *focus = oCNpc::GetHero()->GetFocusNpc();

	if (focus)
	{
		zSTRING fname = p3;
		fname.Delete(focus->GetName(0).Length(), fname.Length());
		if (strcmp(focus->GetName(0).ToChar(), fname.ToChar()) == 0)
		{
			CPlayer *player = playerManager.GetPlayer(focus);
			if (CEvent::PlayerRenderNickname(player ? player->GetID() : -1, focus->GetName(0).ToChar(), p1, p2) == 0)
				this->Print(p1, p2, p3);

			pMemLib->ImportHook(0x006FFEB0, sizeof(void(zCView::*)(int, int, zSTRING const&)), &zCView::Hook_Print);
			return;
		}
	}

	this->Print(p1, p2, p3);
	pMemLib->ImportHook(0x006FFEB0, sizeof(void(zCView::*)(int, int, zSTRING const&)), &zCView::Hook_Print);
};

