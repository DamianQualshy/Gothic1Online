#include "..\\stdafx.h"

CDraw::CDraw(std::string txt, std::string fnt, int x, int y, zCOLOR clr)
{
	isVisible = false;
	pos[1] = x;
	pos[2] = y;
	text = zSTRING(txt.c_str());
	font = zSTRING(fnt.c_str());
	color = clr;

	zCursor::GetCursor().Top();
};

void CDraw::OnRender(zCView *screen)
{
	if( isVisible )
	{
		screen->SetFont(font);
		screen->SetFontColor(color);
		screen->SetFont(font);
		screen->Print(pos[1], pos[2], text);
	}
};