#include "EventManager.h"

#include <algorithm>

namespace g1o::script {

bool EventManager::AddEvent(const std::string& name)
{
	if (!IsValidName(name)) return false;
	return events_.emplace(name, Event{}).second;
}

bool EventManager::IsValidName(const std::string& name)
{
	return !name.empty() && name.size() <= MaxNameLength;
}

bool EventManager::RemoveEvent(const std::string& name)
{
	return events_.erase(name) != 0;
}

bool EventManager::HasEvent(const std::string& name) const
{
	return events_.find(name) != events_.end();
}

std::vector<std::string> EventManager::GetEvents() const
{
	std::vector<std::string> names;
	names.reserve(events_.size());
	for (const auto& [name, event] : events_)
		names.push_back(name);
	std::sort(names.begin(), names.end());
	return names;
}

bool EventManager::ToggleEvent(const std::string& name, bool enabled)
{
	const auto it = events_.find(name);
	if (it == events_.end())
		return false;
	it->second.enabled = enabled;
	return true;
}

std::optional<bool> EventManager::IsEventEnabled(const std::string& name) const
{
	const auto it = events_.find(name);
	if (it == events_.end())
		return std::nullopt;
	return it->second.enabled;
}

std::optional<EventManager::HandlerId> EventManager::AddHandler(
	const std::string& name, std::shared_ptr<ScriptCallable> callback, int priority)
{
	const auto event = events_.find(name);
	if (event == events_.end() || !callback)
		return std::nullopt;
	for (const auto& handler : event->second.handlers)
		if (handler.callback->Equals(*callback))
			return std::nullopt;

	const HandlerId id = next_handler_id_++;
	event->second.handlers.push_back({id, priority, std::move(callback)});
	std::stable_sort(event->second.handlers.begin(), event->second.handlers.end(),
		[](const Handler& left, const Handler& right) { return left.priority < right.priority; });
	return id;
}

bool EventManager::RemoveHandler(const std::string& name, const ScriptCallable& callback)
{
	const auto event = events_.find(name);
	if (event == events_.end())
		return false;

	auto& handlers = event->second.handlers;
	const auto old_size = handlers.size();
	handlers.erase(std::remove_if(handlers.begin(), handlers.end(),
		[&callback](const Handler& handler) { return handler.callback->Equals(callback); }), handlers.end());
	return old_size != handlers.size();
}

bool EventManager::RemoveHandler(const std::string& name, HandlerId id)
{
	const auto event = events_.find(name);
	if (event == events_.end())
		return false;

	auto& handlers = event->second.handlers;
	const auto old_size = handlers.size();
	handlers.erase(std::remove_if(handlers.begin(), handlers.end(),
		[id](const Handler& handler) { return handler.id == id; }), handlers.end());
	return old_size != handlers.size();
}

EventManager::DispatchResult EventManager::Dispatch(const std::string& name, const ScriptArguments& arguments)
{
	const auto event = events_.find(name);
	if (event == events_.end() || !event->second.enabled)
		return {};

	std::vector<HandlerId> snapshot;
	snapshot.reserve(event->second.handlers.size());
	for (const auto& handler : event->second.handlers)
		snapshot.push_back(handler.id);

	contexts_.emplace_back();
	for (const HandlerId id : snapshot)
	{
		const auto current_event = events_.find(name);
		if (current_event == events_.end() || !current_event->second.enabled)
			break;

		const auto handler = std::find_if(current_event->second.handlers.begin(), current_event->second.handlers.end(),
			[id](const Handler& candidate) { return candidate.id == id; });
		if (handler != current_event->second.handlers.end())
		{
			const auto callback = handler->callback;
			callback->Invoke(arguments);
		}
	}

	const Context context = contexts_.back();
	contexts_.pop_back();
	return {true, context.cancelled, context.value};
}

void EventManager::CancelCurrentEvent()
{
	if (!contexts_.empty())
		contexts_.back().cancelled = true;
}

void EventManager::SetCurrentEventValue(int value)
{
	if (!contexts_.empty())
		contexts_.back().value = value;
}

bool EventManager::IsCurrentEventCancelled() const
{
	return !contexts_.empty() && contexts_.back().cancelled;
}

std::optional<int> EventManager::CurrentEventValue() const
{
	return contexts_.empty() ? std::nullopt : contexts_.back().value;
}

void EventManager::Reset()
{
	events_.clear();
	contexts_.clear();
	next_handler_id_ = 1;
}

} // namespace g1o::script
