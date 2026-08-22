#include "..\stdafx.h"

CScript::CScript() : scriptVars(new CScriptState()), scriptKeys(new CKey())
{
}

CScript::~CScript()
{
	delete scriptVars;
	delete scriptKeys;
}

void CScript::OnRender()
{
	scriptVars->OnRender();
}
