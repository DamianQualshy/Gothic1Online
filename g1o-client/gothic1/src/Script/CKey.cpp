#include "..\\stdafx.h"

CKey::CKey()
{
	SPDLOG_TRACE("CKey::CKey()");

	timeLastKey = 0;
	disabledKeys.Clear();
};

CKey::~CKey()
{
	SPDLOG_TRACE("CKey::~CKey()");
};

void CKey::KeyEvent(int key)
{
	if (zCInput::GetInput()->KeyPressed(KEY_LSHIFT) && zCInput::GetInput()->KeyPressed(KEY_LALT))
		core.GetKeyBoard()->SwitchLayout();

	// Blockade keys, when chat is active
	if (!core.GetChat()->IsInputActive() && g1o::network::NowMilliseconds() > this->timeLastKey)
	{
		CEvent::KeyDown(key);
		this->timeLastKey = g1o::network::NowMilliseconds() + 70;
	}
}

bool CKey::IsKeyEnabled(int key)
{
	if( disabledKeys.FindIndex(key) > -1 )
		return false;
	return true;
}

void CKey::SetKeyEnabled(int key, bool toggle)
{
	if( toggle == true )
		if( disabledKeys.FindIndex(key) > -1 )
			disabledKeys.Remove(key);
	if( toggle == false )
		if( disabledKeys.FindIndex(key) == -1 )
			disabledKeys.PushBack(key);
}
