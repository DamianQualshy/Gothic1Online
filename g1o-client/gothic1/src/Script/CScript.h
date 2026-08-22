#pragma once

#define scr CScript::GetInstance()

class CScript
{
private:
	CScriptState* scriptVars;
	CKey* scriptKeys;

	CScript();
	CScript(const CScript&) = delete;
	CScript& operator=(const CScript&) = delete;
	~CScript();

public:
	static CScript& GetInstance()
	{
		static CScript script;
		return script;
	}

	CScriptState* GetScriptVars() const { return scriptVars; }
	CKey* GetScriptKeys() const { return scriptKeys; }

	void OnRender();
};
