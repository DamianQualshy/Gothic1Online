#include "..\\stdafx.h"

CScriptState::CScriptState()
{
	isFrozen = false;
	isKeyEnabled = true;
	isUnconsciousEnabled = true;
	isSavingActive = true;
	isInterfaceEnabled = true;
	isEqEnabled = true;
	isSpawningEnabled = false;
	isMarvinEnabled = false;
	drawList.Clear();
	textureList.Clear();

	drawView = new zCView(0, 0, 8192, 8192);
	zCView::GetScreen()->InsertItem(drawView);
	drawView->SetTransparency(1);
};

void CScriptState::SetFreeze(bool _enable)
{
	this->isFrozen = _enable;
	oCNpc::GetHero()->SetMovLock(_enable);
};

void CScriptState::DrawTop()
{
	zCView::GetScreen()->RemoveItem(drawView);
	zCView::GetScreen()->InsertItem(drawView);
};

void CScriptState::OnRender()
{
	drawView->ClrPrintwin();
	for( size_t i = 0; i < drawList.Num(); ++i )
		drawList[i]->OnRender(drawView);

	if (zCursor::GetCursor().IsShowing())
	{
		// handle three keys at once
		zCursor::EMouseStatus statusLeft = zCursor::GetCursor().HandleEvent(zCursor::LEFT);
		zCursor::EMouseStatus statusRight = zCursor::GetCursor().HandleEvent(zCursor::RIGHT);
		zCursor::EMouseStatus statusWheel = zCursor::GetCursor().HandleEvent(zCursor::WHEEL);

		MOUSEPOS pos = zCursor::GetCursor().GetPosition();

		switch (statusLeft)
		{
		case zCursor::LEFT_DOWN:
			CEvent::MouseDown(0);
			break;

		case zCursor::LEFT_UP:
			CEvent::MouseUp(0);
			break;
		}

		switch (statusRight)
		{
		case zCursor::RIGHT_DOWN:
			CEvent::MouseDown(1);
			break;

		case zCursor::RIGHT_UP:
			CEvent::MouseUp(1);
			break;
		}

		switch (statusWheel)
		{
		case zCursor::WHEEL_DOWN:
			CEvent::MouseWheel((int)pos.wheel);
			break;

		case zCursor::WHEEL_UP:
			CEvent::MouseWheel((int)pos.wheel);
			break;
		}
	}
};
