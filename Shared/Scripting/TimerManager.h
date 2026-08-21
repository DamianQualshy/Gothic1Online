#pragma once

#include "ScriptValue.h"

#include <cstdint>
#include <map>
#include <queue>
#include <set>

namespace g1o::script {

class TimerManager {
public:
	using Clock = std::uint64_t (*)();

	explicit TimerManager(Clock clock);
	unsigned Add(std::shared_ptr<ScriptCallable> callback, unsigned interval, bool repeat, ScriptValue data = {});
	bool Remove(unsigned id);
	bool SetInterval(unsigned id, unsigned interval);
	bool SetRepeat(unsigned id, bool repeat);
	bool SetData(unsigned id, ScriptValue data);
	void Pulse();
	void Reset();

private:
	struct Timer {
		std::shared_ptr<ScriptCallable> callback;
		ScriptValue data;
		unsigned interval = 0;
		std::uint64_t deadline = 0;
		bool repeat = false;
	};

	Clock clock_;
	std::map<unsigned, Timer> timers_;
	std::queue<unsigned> free_ids_;
	std::set<unsigned> pending_removals_;
	unsigned next_id_ = 0;
};

} // namespace g1o::script
