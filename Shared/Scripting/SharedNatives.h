#pragma once

#include "NativeRegistry.h"
#include "TimerManager.h"

namespace g1o::script {

void RegisterSharedNatives(NativeRegistry& registry, TimerManager::Clock clock);

} // namespace g1o::script
