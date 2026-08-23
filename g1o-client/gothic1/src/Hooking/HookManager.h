#pragma once

#include <cstdint>
#include <cstring>
#include <memory>
#include <type_traits>

namespace g1o::hooking {

class HookManager final
{
private:
	struct CallbackLayout
	{
		std::uintptr_t address = 0;
		std::int32_t thisAdjustment = 0;
	};

public:
	HookManager();
	~HookManager();

	HookManager(const HookManager&) = delete;
	HookManager& operator=(const HookManager&) = delete;

	template <typename Callback>
	bool Install(std::uintptr_t target, Callback callback)
	{
		static_assert(sizeof(std::uintptr_t) == 4, "G1O detours require the x86 target architecture");
		static_assert(std::is_trivially_copyable_v<Callback>, "Hook callbacks must be trivially copyable");
		static_assert(sizeof(Callback) <= sizeof(CallbackLayout),
			"This MSVC member-function pointer representation is not supported");

		CallbackLayout layout{};
		std::memcpy(&layout, &callback, sizeof(callback));
		return InstallAddress(target, layout.address, layout.thisAdjustment);
	}

	bool Remove(std::uintptr_t target);
	void RemoveAll();
	bool IsInstalled(std::uintptr_t target) const;
	std::uintptr_t GetTrampoline(std::uintptr_t target) const;

private:
	struct Impl;
	std::unique_ptr<Impl> impl;

	bool InstallAddress(std::uintptr_t target, std::uintptr_t callback, std::int32_t thisAdjustment);
};

HookManager& GetHookManager();

} // namespace g1o::hooking
