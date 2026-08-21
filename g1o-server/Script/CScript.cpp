#include "../stdafx.h"

namespace {

std::uint64_t ScriptClock()
{
	return static_cast<std::uint64_t>(GetTimeMS());
}

const std::vector<std::string> kServerEvents = {
	"onInit", "onTick", "onPlayerConnect", "onPlayerHit", "onPlayerDeath", "onPlayerUnconscious",
	"onPlayerRespawn", "onPlayerStandUp", "onPlayerDisconnect", "onPlayerCommand", "onPlayerPacket",
	"onAdminCommand", "onPlayerMessage", "onPlayerTakeItem", "onPlayerDropItem", "onPlayerTakeFocus",
	"onPlayerLostFocus"
};

} // namespace

CScript::CScript()
{
	engine = std::make_unique<g1o::script::ScriptEngine>(ScriptClock, [](const std::string& message) {
		std::fprintf(stderr, "%s\n", message.c_str());
	});
	SVariable::RegisterConstants(engine->Natives());
	SFunction::Register(engine->Natives());
	engine->RegisterEvents(kServerEvents);
}

CScript::~CScript() = default;

bool CScript::StartScripts(const std::vector<std::string>& paths)
{
	if (!engine->StartFiles(paths, g1o::script::RuntimePolicy::TrustedServer))
	{
		std::fprintf(stderr, "Cannot load the configured server scripts.\n");
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
