#include "TimerManager.h"

#include <vector>

namespace g1o::script {

TimerManager::TimerManager(Clock clock) : clock_(clock)
{
}

unsigned TimerManager::Add(std::shared_ptr<ScriptCallable> callback, unsigned interval, bool repeat, ScriptValue data)
{
	const unsigned id = free_ids_.empty() ? next_id_++ : free_ids_.front();
	if (!free_ids_.empty())
		free_ids_.pop();
	timers_.emplace(id, Timer{std::move(callback), std::move(data), interval, clock_() + interval, repeat});
	return id;
}

bool TimerManager::Remove(unsigned id)
{
	if (timers_.find(id) == timers_.end() || pending_removals_.find(id) != pending_removals_.end())
		return false;
	pending_removals_.insert(id);
	return true;
}

bool TimerManager::SetInterval(unsigned id, unsigned interval)
{
	const auto timer = timers_.find(id);
	if (timer == timers_.end() || pending_removals_.find(id) != pending_removals_.end())
		return false;
	timer->second.interval = interval;
	timer->second.deadline = clock_() + interval;
	return true;
}

bool TimerManager::SetRepeat(unsigned id, bool repeat)
{
	const auto timer = timers_.find(id);
	if (timer == timers_.end() || pending_removals_.find(id) != pending_removals_.end())
		return false;
	timer->second.repeat = repeat;
	return true;
}

bool TimerManager::SetData(unsigned id, ScriptValue data)
{
	const auto timer = timers_.find(id);
	if (timer == timers_.end() || pending_removals_.find(id) != pending_removals_.end())
		return false;
	timer->second.data = std::move(data);
	return true;
}

void TimerManager::Pulse()
{
	auto apply_removals = [this]()
	{
		for (const unsigned id : pending_removals_)
		{
			if (timers_.erase(id) != 0)
				free_ids_.push(id);
		}
		pending_removals_.clear();
	};

	apply_removals();

	const std::uint64_t now = clock_();
	std::vector<unsigned> due;
	for (const auto& [id, timer] : timers_)
	{
		if (now >= timer.deadline && timer.callback)
			due.push_back(id);
	}

	for (const unsigned id : due)
	{
		auto timer = timers_.find(id);
		if (timer == timers_.end() || pending_removals_.find(id) != pending_removals_.end() ||
			now < timer->second.deadline || !timer->second.callback)
			continue;

		const auto callback = timer->second.callback;
		const ScriptArguments arguments = timer->second.data.IsNull() ? ScriptArguments{} : ScriptArguments{timer->second.data};
		callback->Invoke(arguments);

		timer = timers_.find(id);
		if (timer == timers_.end() || pending_removals_.find(id) != pending_removals_.end())
			continue;
		if (timer->second.repeat)
			timer->second.deadline = now + timer->second.interval;
		else
			pending_removals_.insert(id);
	}

	apply_removals();
}

void TimerManager::Reset()
{
	timers_.clear();
	free_ids_ = {};
	pending_removals_ = {};
	next_id_ = 0;
}

} // namespace g1o::script
