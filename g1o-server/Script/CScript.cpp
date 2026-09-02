#include "../stdafx.h"

namespace {

std::uint64_t ScriptClock()
{
	return static_cast<std::uint64_t>(g1o::network::NowMilliseconds());
}

const std::vector<std::string> kServerEvents = {
	"onInit", "onTick", "onPlayerConnect", "onPlayerHit", "onPlayerDeath", "onPlayerUnconscious",
	"onPlayerRespawn", "onPlayerStandUp", "onPlayerDisconnect", "onPlayerCommand",
	"onAdminCommand", "onPlayerMessage", "onPlayerTakeItem", "onPlayerDropItem", "onPlayerTakeFocus",
	"onPlayerLostFocus", "onKeyDown", "onMouseDown", "onMouseUp", "onMouseWheel", "onOpenInventory",
	"onCloseInventory", "onMobTrigger", "onMobUntrigger", "onUseItem"
};

} // namespace

CScript::CScript()
{
	engine = std::make_unique<g1o::script::ScriptEngine>(ScriptClock, [](const std::string& message) {
		SPDLOG_INFO("[script] {}", message);
	});
	SVariable::RegisterConstants(engine->Natives());
	SFunction::Register(engine->Natives());
	engine->RegisterEvents(kServerEvents);
}

CScript::~CScript() = default;

bool CScript::StartScripts(const std::vector<std::string>& paths)
{
	if (!engine->StartFiles(paths))
	{
		SPDLOG_ERROR("Cannot load the configured server scripts.");
		return false;
	}

	engine->Dispatch("onInit");
	return true;
}

void CScript::OnTick()
{
	engine->Dispatch("onTick");
	engine->PulseTimers();
}
