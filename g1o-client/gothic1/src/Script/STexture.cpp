#include "..\\stdafx.h"

STexture::STexture(const char* textureName, int x, int y, int w, int h)
{
	isVisible = true;
	pos[0] = x; pos[1] = y;
	pos[2] = w; pos[3] = h;

	texName = zSTRING(textureName);
	texture = zCView::CreateView(x, y, w, h, texName);
	texture->SetPos(x,y);
	texture->SetSize(w,h);
	//texture->InsertBack(zSTRING(textureName));
	zCView::GetScreen()->InsertItem(texture);

	zCursor::GetCursor().Top();
	scr.GetScriptVars()->DrawTop();
};

STexture::~STexture()
{
	if(texture)
	{
		zCView::GetScreen()->RemoveItem(texture);
		delete texture;
		texture = nullptr;
	}
};

void STexture::SetVisible(bool val)
{
	if (isVisible == false && val == true)
	{
		zCView::GetScreen()->InsertItem(texture);
		texture->SetPos(pos[0], pos[1]);
		texture->SetSize(pos[2], pos[3]);
		
		zCursor::GetCursor().Top();
		scr.GetScriptVars()->DrawTop();
	}
	else if (isVisible == true && val == false)
		zCView::GetScreen()->RemoveItem(texture);
	isVisible = val;
};
