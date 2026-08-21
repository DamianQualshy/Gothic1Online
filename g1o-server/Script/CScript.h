#pragma once

#include <Scripting/ScriptEngine.h>

#define scr CScript::GetInstance()

class CScript
{
private:
	std::unique_ptr<g1o::script::ScriptEngine> engine;

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
	bool StartScripts(const std::vector<std::string>& paths);
	void OnTick();
};
