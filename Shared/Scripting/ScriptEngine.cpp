#include "ScriptEngine.h"
#include "SharedNatives.h"

#include <algorithm>
#include <cctype>
#include <filesystem>

namespace g1o::script {

namespace {

bool ReadString(const ScriptArguments& arguments, std::size_t index, std::string& value)
{
	if (index >= arguments.size()) return false;
	const std::string* string = arguments[index].AsString();
	if (!string) return false;
	value = *string;
	return true;
}

bool ReadInteger(const ScriptArguments& arguments, std::size_t index, int& value)
{
	if (index >= arguments.size() || !arguments[index].IsNumber()) return false;
	value = static_cast<int>(arguments[index].AsInteger());
	return true;
}

bool ReadBool(const ScriptArguments& arguments, std::size_t index, bool& value)
{
	if (index >= arguments.size() || (!arguments[index].IsBool() && !arguments[index].IsInteger())) return false;
	value = arguments[index].AsBool();
	return true;
}

} // namespace

const std::vector<const char*>& CoreHostFunctionNames()
{
	static const std::vector<const char*> names = {
		"addEvent", "removeEvent", "getEvents", "toggleEvent", "isEventEnabled",
		"addEventHandler", "removeEventHandler", "callEvent", "cancelEvent", "eventValue", "isEventCancelled",
		"setTimer", "killTimer", "setTimerInterval", "setTimerRepeat", "setTimerData"
	};
	return names;
}

ScriptEngine::ScriptEngine(TimerManager::Clock clock, ScriptLogger logger)
	: timers_(clock), logger_(std::move(logger))
{
	RegisterSharedNatives(natives_, clock);
}

ScriptEngine::~ScriptEngine()
{
	Stop();
}

void ScriptEngine::RegisterEvents(const std::vector<std::string>& names)
{
	registered_events_ = names;
	for (const std::string& name : names)
		events_.AddEvent(name);
}

std::optional<RuntimeLanguage> ScriptEngine::LanguageFromPath(const std::string& path)
{
	std::string extension = std::filesystem::path(path).extension().string();
	std::transform(extension.begin(), extension.end(), extension.begin(), [](unsigned char character) {
		return static_cast<char>(std::tolower(character));
	});
	if (extension == ".lua" || extension == ".luac") return RuntimeLanguage::Lua;
	if (extension == ".nut" || extension == ".cnut") return RuntimeLanguage::Squirrel;
	return std::nullopt;
}

bool ScriptEngine::CreateRuntime(RuntimeLanguage language)
{
	runtime_ = language == RuntimeLanguage::Lua
		? CreateLuaRuntime(*this)
		: CreateSquirrelRuntime(*this);
	return runtime_ != nullptr;
}

bool ScriptEngine::StartFile(const std::string& path)
{
	return StartFiles({path});
}

bool ScriptEngine::StartFiles(const std::vector<std::string>& paths)
{
	Stop();
	for (const std::string& name : registered_events_)
		events_.AddEvent(name);
	if (paths.empty())
	{
		Log("No scripts were configured");
		Stop();
		return false;
	}
	std::optional<RuntimeLanguage> runtimeLanguage;
	for (const std::string& path : paths)
	{
		const auto language = LanguageFromPath(path);
		if (!language)
		{
			Log("Unsupported script extension: " + std::filesystem::path(path).extension().string());
			Stop();
			return false;
		}
		if (runtimeLanguage && *runtimeLanguage != *language)
		{
			Log("A script runtime cannot mix Squirrel and Lua files");
			Stop();
			return false;
		}
		if (!runtimeLanguage) runtimeLanguage = language;
	}
	if (!CreateRuntime(*runtimeLanguage))
	{
		Stop();
		return false;
	}
	for (const std::string& path : paths)
	{
		if (!runtime_->LoadFile(path))
		{
			Stop();
			return false;
		}
	}
	return true;
}

void ScriptEngine::Stop()
{
	timers_.Reset();
	events_.Reset();
	runtime_.reset();
}

EventManager::DispatchResult ScriptEngine::Dispatch(const std::string& event, const ScriptArguments& arguments)
{
	return events_.Dispatch(event, arguments);
}

bool ScriptEngine::Call(const std::string& function, const ScriptArguments& arguments)
{
	return runtime_ && runtime_->Call(function, arguments);
}

void ScriptEngine::PulseTimers()
{
	timers_.Pulse();
}

/* g1odoc (func)
 *
 * This function registers a custom event.
 *
 * @name addEvent
 * @side server
 * @category Event
 * @version 0.5.0
 * @param (string) eventName Event name, from 1 to 128 bytes.
 * @return (bool) True if the event was registered.
 *
 */

/* g1odoc (func)
 *
 * This function removes a custom event and all of its handlers.
 *
 * @name removeEvent
 * @side server
 * @category Event
 * @version 0.5.0
 * @param (string) eventName Event name.
 *
 */

/* g1odoc (func)
 *
 * This function returns the registered event names.
 *
 * @name getEvents
 * @side server
 * @category Event
 * @version 0.5.0
 * @return (array) Registered event names.
 *
 */

/* g1odoc (func)
 *
 * This function enables or disables an event globally.
 *
 * @name toggleEvent
 * @side server
 * @category Event
 * @version 0.5.0
 * @param (string) eventName Event name.
 * @param (bool) enabled Whether the event is enabled.
 *
 */

/* g1odoc (func)
 *
 * This function checks whether an event is enabled.
 *
 * @name isEventEnabled
 * @side server
 * @category Event
 * @version 0.5.0
 * @param (string) eventName Event name.
 * @return (bool) True if the event is enabled.
 *
 */

/* g1odoc (func)
 *
 * This function binds a function to an event.
 *
 * @name addEventHandler
 * @side server
 * @category Event
 * @version 0.5.0
 * @param (string) eventName Event name.
 * @param (fun) handler Function to invoke.
 * @param (int) priority Optional handler priority; lower values run first.
 * @return (bool) True if the handler was added.
 *
 */

/* g1odoc (func)
 *
 * This function unbinds a function from an event.
 *
 * @name removeEventHandler
 * @side server
 * @category Event
 * @version 0.5.0
 * @param (string) eventName Event name.
 * @param (fun) handler Previously registered function.
 * @return (bool) True if a matching handler was removed.
 *
 */

/* g1odoc (func)
 *
 * This function dispatches a custom event to all of its handlers.
 *
 * @name callEvent
 * @side server
 * @category Event
 * @version 0.5.0
 * @param (string) eventName Event name.
 * @param (...) arguments Values passed to each handler.
 * @return (bool) True if the event existed, was enabled, and was not cancelled.
 *
 */

/* g1odoc (func)
 *
 * This function cancels the event currently being dispatched.
 *
 * @name cancelEvent
 * @side server
 * @category Event
 * @version 0.5.0
 *
 */

/* g1odoc (func)
 *
 * This function replaces the integer value of the event currently being dispatched.
 *
 * @name eventValue
 * @side server
 * @category Event
 * @version 0.5.0
 * @param (int) value New event value.
 *
 */

/* g1odoc (func)
 *
 * This function checks whether the event currently being dispatched was cancelled.
 *
 * @name isEventCancelled
 * @side server
 * @category Event
 * @version 0.5.0
 * @return (bool) True if the current event was cancelled.
 *
 */

/* g1odoc (func)
 *
 * This function creates a script timer.
 *
 * @name setTimer
 * @side server
 * @category Timer
 * @version 0.4.0
 * @param (fun) handler Function to invoke.
 * @param (int) interval Interval in milliseconds.
 * @param (bool) repeat Whether the timer repeats.
 * @param (mixed) data Optional value passed to the handler.
 * @return (int) Timer ID.
 *
 */

/* g1odoc (func)
 *
 * This function stops and removes a script timer.
 *
 * @name killTimer
 * @side server
 * @category Timer
 * @version 0.4.0
 * @param (int) timerId Timer ID.
 * @return (bool) True if the timer was removed.
 *
 */

/* g1odoc (func)
 *
 * This function changes a script timer's interval.
 *
 * @name setTimerInterval
 * @side server
 * @category Timer
 * @version 0.4.0
 * @param (int) timerId Timer ID.
 * @param (int) interval Interval in milliseconds.
 * @return (bool) True if the timer was updated.
 *
 */

/* g1odoc (func)
 *
 * This function changes whether a script timer repeats.
 *
 * @name setTimerRepeat
 * @side server
 * @category Timer
 * @version 0.4.0
 * @param (int) timerId Timer ID.
 * @param (bool) repeat Whether the timer repeats.
 * @return (bool) True if the timer was updated.
 *
 */

/* g1odoc (func)
 *
 * This function replaces the value passed to a script timer's handler.
 *
 * @name setTimerData
 * @side server
 * @category Timer
 * @version 0.4.0
 * @param (int) timerId Timer ID.
 * @param (mixed) data New handler value.
 * @return (bool) True if the timer was updated.
 *
 */

std::optional<ScriptArguments> ScriptEngine::InvokeHostFunction(
	const std::string& name, ScriptArguments arguments, std::string& error)
{
	std::string event;
	if (name == "addEvent")
	{
		if (!ReadString(arguments, 0, event)) { error = "addEvent expects an event name"; return std::nullopt; }
		if (arguments.size() != 1) { error = "addEvent expects one event name"; return std::nullopt; }
		return ScriptArguments{ScriptValue(events_.AddEvent(event))};
	}
	if (name == "removeEvent")
	{
		if (!ReadString(arguments, 0, event)) { error = "removeEvent expects an event name"; return std::nullopt; }
		events_.RemoveEvent(event);
		return ScriptArguments{};
	}
	if (name == "getEvents")
	{
		ScriptArray names;
		for (const auto& registered : events_.GetEvents()) names.emplace_back(registered);
		return ScriptArguments{ScriptValue(std::move(names))};
	}
	if (name == "toggleEvent")
	{
		bool enabled = false;
		if (!ReadString(arguments, 0, event) || !ReadBool(arguments, 1, enabled)) { error = "toggleEvent expects name and boolean"; return std::nullopt; }
		events_.ToggleEvent(event, enabled);
		return ScriptArguments{};
	}
	if (name == "isEventEnabled")
	{
		if (!ReadString(arguments, 0, event)) { error = "isEventEnabled expects an event name"; return std::nullopt; }
		const auto enabled = events_.IsEventEnabled(event);
		return ScriptArguments{enabled ? ScriptValue(*enabled) : ScriptValue()};
	}
	if (name == "addEventHandler")
	{
		if (!ReadString(arguments, 0, event) || arguments.size() < 2 || !arguments[1].IsCallable()) {
			error = "addEventHandler expects name, function, and optional priority"; return std::nullopt;
		}
		int priority = 9999;
		if (arguments.size() >= 3 && !ReadInteger(arguments, 2, priority)) { error = "event priority must be an integer"; return std::nullopt; }
		return ScriptArguments{ScriptValue(events_.AddHandler(event, arguments[1].AsCallable(), priority).has_value())};
	}
	if (name == "removeEventHandler")
	{
		if (!ReadString(arguments, 0, event) || arguments.size() < 2 || !arguments[1].IsCallable()) {
			error = "removeEventHandler expects name and function"; return std::nullopt;
		}
		return ScriptArguments{ScriptValue(events_.RemoveHandler(event, *arguments[1].AsCallable()))};
	}
	if (name == "callEvent")
	{
		if (!ReadString(arguments, 0, event)) { error = "callEvent expects an event name"; return std::nullopt; }
		arguments.erase(arguments.begin());
		const auto result = events_.Dispatch(event, arguments);
		return ScriptArguments{ScriptValue(result.dispatched && !result.cancelled)};
	}
	if (name == "cancelEvent")
	{
		events_.CancelCurrentEvent();
		return ScriptArguments{};
	}
	if (name == "eventValue")
	{
		int value = 0;
		if (!ReadInteger(arguments, 0, value)) { error = "eventValue expects an integer"; return std::nullopt; }
		events_.SetCurrentEventValue(value);
		return ScriptArguments{};
	}
	if (name == "isEventCancelled")
		return ScriptArguments{ScriptValue(events_.IsCurrentEventCancelled())};
	if (name == "setTimer")
	{
		int interval = 0;
		bool repeat = false;
		if (arguments.size() < 3 || !arguments[0].IsCallable() || !ReadInteger(arguments, 1, interval) || !ReadBool(arguments, 2, repeat) || interval < 0) {
			error = "setTimer expects function, non-negative interval, repeat, and optional data"; return std::nullopt;
		}
		ScriptValue data = arguments.size() >= 4 ? arguments[3] : ScriptValue{};
		return ScriptArguments{ScriptValue(timers_.Add(arguments[0].AsCallable(), static_cast<unsigned>(interval), repeat, std::move(data)))};
	}
	if (name == "killTimer" || name == "setTimerInterval" || name == "setTimerRepeat" || name == "setTimerData")
	{
		int id = 0;
		if (!ReadInteger(arguments, 0, id) || id < 0) { error = name + " expects a timer id"; return std::nullopt; }
		bool result = false;
		if (name == "killTimer") result = timers_.Remove(static_cast<unsigned>(id));
		else if (name == "setTimerInterval") {
			int interval = 0; if (!ReadInteger(arguments, 1, interval) || interval < 0) { error = "setTimerInterval expects a non-negative interval"; return std::nullopt; }
			result = timers_.SetInterval(static_cast<unsigned>(id), static_cast<unsigned>(interval));
		}
		else if (name == "setTimerRepeat") {
			bool repeat = false; if (!ReadBool(arguments, 1, repeat)) { error = "setTimerRepeat expects a boolean"; return std::nullopt; }
			result = timers_.SetRepeat(static_cast<unsigned>(id), repeat);
		}
		else {
			if (arguments.size() < 2) { error = "setTimerData expects a value"; return std::nullopt; }
			result = timers_.SetData(static_cast<unsigned>(id), arguments[1]);
		}
		return ScriptArguments{ScriptValue(result)};
	}

	return natives_.Invoke(name, std::move(arguments), error);
}

void ScriptEngine::Log(const std::string& message) const
{
	if (logger_) logger_(message);
}

} // namespace g1o::script
