#include "HookManager.h"

#include <asmjit/asmjit.h>
#include <polyhook2/Detour/x86Detour.hpp>
#include <spdlog/spdlog.h>

#include <map>

namespace g1o::hooking {

struct HookManager::Impl
{
	struct Hook
	{
		std::uint64_t trampoline = 0;
		void* callbackThunk = nullptr;
		std::unique_ptr<PLH::x86Detour> detour;
	};

	asmjit::JitRuntime runtime;
	std::map<std::uintptr_t, std::unique_ptr<Hook>> hooks;
};

namespace {

void* BuildThisAdjustmentThunk(asmjit::JitRuntime& runtime, std::uintptr_t callback, std::int32_t adjustment)
{
	asmjit::CodeHolder code;
	code.init(runtime.environment(), runtime.cpuFeatures());
	asmjit::x86::Assembler assembler(&code);
	assembler.add(asmjit::x86::ecx, adjustment);
	assembler.mov(asmjit::x86::eax, static_cast<std::uint32_t>(callback));
	assembler.jmp(asmjit::x86::eax);

	void* thunk = nullptr;
	const asmjit::Error error = runtime.add(&thunk, &code);
	if (error)
	{
		SPDLOG_ERROR("AsmJit could not create a hook callback thunk: {}",
			asmjit::DebugUtils::errorAsString(error));
		return nullptr;
	}
	return thunk;
}

} // namespace

HookManager::HookManager() : impl(std::make_unique<Impl>())
{
}

HookManager::~HookManager()
{
	RemoveAll();
}

bool HookManager::InstallAddress(std::uintptr_t target, std::uintptr_t callback, std::int32_t thisAdjustment)
{
	if (!target || !callback)
	{
		SPDLOG_ERROR("Cannot install a hook with a null target or callback");
		return false;
	}
	if (IsInstalled(target))
	{
		SPDLOG_WARN("Hook at 0x{:08X} is already installed", target);
		return false;
	}

	auto hook = std::make_unique<Impl::Hook>();
	std::uintptr_t detourCallback = callback;
	if (thisAdjustment != 0)
	{
		hook->callbackThunk = BuildThisAdjustmentThunk(impl->runtime, callback, thisAdjustment);
		if (!hook->callbackThunk)
			return false;
		detourCallback = reinterpret_cast<std::uintptr_t>(hook->callbackThunk);
	}

	hook->detour = std::make_unique<PLH::x86Detour>(
		static_cast<std::uint64_t>(target), static_cast<std::uint64_t>(detourCallback), &hook->trampoline);
	if (!hook->detour->hook())
	{
		SPDLOG_ERROR("PolyHook2 could not install detour at 0x{:08X}", target);
		if (hook->callbackThunk)
			impl->runtime.release(hook->callbackThunk);
		return false;
	}

	SPDLOG_DEBUG("Installed detour at 0x{:08X} -> 0x{:08X}; trampoline 0x{:08X}",
		target, detourCallback, static_cast<std::uintptr_t>(hook->trampoline));
	impl->hooks.emplace(target, std::move(hook));
	return true;
}

bool HookManager::Remove(std::uintptr_t target)
{
	const auto hook = impl->hooks.find(target);
	if (hook == impl->hooks.end())
		return false;

	if (hook->second->detour && !hook->second->detour->unHook())
	{
		SPDLOG_ERROR("PolyHook2 could not remove detour at 0x{:08X}", target);
		return false;
	}
	if (hook->second->callbackThunk)
		impl->runtime.release(hook->second->callbackThunk);
	impl->hooks.erase(hook);
	return true;
}

void HookManager::RemoveAll()
{
	while (!impl->hooks.empty())
	{
		const auto target = impl->hooks.begin()->first;
		if (!Remove(target))
		{
			impl->hooks.erase(impl->hooks.begin());
		}
	}
}

bool HookManager::IsInstalled(std::uintptr_t target) const
{
	return impl->hooks.find(target) != impl->hooks.end();
}

std::uintptr_t HookManager::GetTrampoline(std::uintptr_t target) const
{
	const auto hook = impl->hooks.find(target);
	return hook == impl->hooks.end() ? 0 : static_cast<std::uintptr_t>(hook->second->trampoline);
}

HookManager& GetHookManager()
{
	static HookManager manager;
	return manager;
}

} // namespace g1o::hooking
