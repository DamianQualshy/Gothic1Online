#pragma once

#include <Scripting/ScriptEngine.h>

#define scr CScript::GetInstance()

class CScript
{
private:
	std::unique_ptr<g1o::script::ScriptEngine> engine;
	CScriptState* scriptVars;
	CKey* scriptKeys;
	bool isScriptLoaded;

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

	g1o::script::ScriptEngine& GetEngine() { return *engine; }
	CScriptState* GetScriptVars() const { return scriptVars; }
	CKey* GetScriptKeys() const { return scriptKeys; }
	bool IsScriptLoaded() const { return isScriptLoaded; }

	bool StartScripts();
	void OnRender();
};
