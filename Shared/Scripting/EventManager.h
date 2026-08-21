#pragma once

#include "ScriptValue.h"

#include <cstddef>
#include <cstdint>
#include <optional>
#include <string>
#include <unordered_map>
#include <vector>

namespace g1o::script {

class EventManager {
public:
	using HandlerId = std::uint64_t;
	static constexpr std::size_t MaxNameLength = 128;

	struct DispatchResult {
		bool dispatched = false;
		bool cancelled = false;
		std::optional<int> value;
	};

	bool AddEvent(const std::string& name, bool allow_remote_trigger = false);
	static bool IsValidName(const std::string& name);
	bool RemoveEvent(const std::string& name);
	bool HasEvent(const std::string& name) const;
	bool CanTriggerRemotely(const std::string& name) const;
	std::vector<std::string> GetEvents() const;
	bool ToggleEvent(const std::string& name, bool enabled);
	std::optional<bool> IsEventEnabled(const std::string& name) const;

	std::optional<HandlerId> AddHandler(const std::string& name, std::shared_ptr<ScriptCallable> callback, int priority = 9999);
	bool RemoveHandler(const std::string& name, const ScriptCallable& callback);
	bool RemoveHandler(const std::string& name, HandlerId id);
	DispatchResult Dispatch(const std::string& name, const ScriptArguments& arguments = {});

	void CancelCurrentEvent();
	void SetCurrentEventValue(int value);
	bool IsCurrentEventCancelled() const;
	std::optional<int> CurrentEventValue() const;
	void Reset();

private:
	struct Handler {
		HandlerId id = 0;
		int priority = 9999;
		std::shared_ptr<ScriptCallable> callback;
	};

	struct Event {
		bool enabled = true;
		bool allow_remote_trigger = false;
		std::vector<Handler> handlers;
	};

	struct Context {
		bool cancelled = false;
		std::optional<int> value;
	};

	std::unordered_map<std::string, Event> events_;
	std::vector<Context> contexts_;
	HandlerId next_handler_id_ = 1;
};

} // namespace g1o::script
