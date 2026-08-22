#pragma once

#include "EventManager.h"
#include "NativeRegistry.h"
#include "TimerManager.h"

#include <functional>
#include <memory>
#include <optional>
#include <string>
#include <vector>

namespace g1o::script {

enum class RuntimeLanguage {
	Squirrel,
	Lua
};

using ScriptLogger = std::function<void(const std::string&)>;

class IScriptRuntime {
public:
	virtual ~IScriptRuntime() = default;
	virtual RuntimeLanguage Language() const = 0;
	virtual bool LoadFile(const std::string& path) = 0;
	virtual bool Call(const std::string& function, const ScriptArguments& arguments) = 0;
};

class ScriptEngine {
public:
	ScriptEngine(TimerManager::Clock clock, ScriptLogger logger);
	~ScriptEngine();

	ScriptEngine(const ScriptEngine&) = delete;
	ScriptEngine& operator=(const ScriptEngine&) = delete;

	NativeRegistry& Natives() { return natives_; }
	EventManager& Events() { return events_; }
	TimerManager& Timers() { return timers_; }

	void RegisterEvents(const std::vector<std::string>& names);
	bool StartFile(const std::string& path);
	bool StartFiles(const std::vector<std::string>& paths);
	void Stop();
	bool IsRunning() const { return runtime_ != nullptr; }

	EventManager::DispatchResult Dispatch(const std::string& event, const ScriptArguments& arguments = {});
	bool Call(const std::string& function, const ScriptArguments& arguments = {});
	void PulseTimers();

	std::optional<ScriptArguments> InvokeHostFunction(const std::string& name, ScriptArguments arguments, std::string& error);
	void Log(const std::string& message) const;

private:
	bool CreateRuntime(RuntimeLanguage language);
	static std::optional<RuntimeLanguage> LanguageFromPath(const std::string& path);

	NativeRegistry natives_;
	EventManager events_;
	TimerManager timers_;
	ScriptLogger logger_;
	std::unique_ptr<IScriptRuntime> runtime_;
	std::vector<std::string> registered_events_;
};

std::unique_ptr<IScriptRuntime> CreateSquirrelRuntime(ScriptEngine& engine);
std::unique_ptr<IScriptRuntime> CreateLuaRuntime(ScriptEngine& engine);
const std::vector<const char*>& CoreHostFunctionNames();

} // namespace g1o::script
