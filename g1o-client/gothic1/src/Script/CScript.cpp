#include "..\stdafx.h"

#include <filesystem>

namespace {

std::uint64_t ScriptClock()
{
	return static_cast<std::uint64_t>(GetTimeMS());
}

const std::vector<std::string> kClientEvents = {
	"onInit", "onRender", "onCommand", "onPacket", "onMouseDown", "onMouseUp", "onMouseWheel", "onKeyDown",
	"onPlayerHit", "onPlayerDead", "onPlayerRespawn", "onPlayerUnconscious", "onPlayerStandUp", "onProgramName",
	"onOpenInventory", "onCloseInventory", "onMobTrigger", "onMobUntrigger", "onUseItem", "onPlayerTakeFocus",
	"onPlayerLostFocus", "onPlayerRenderNickname"
};

std::filesystem::path ClientManifestPath()
{
	const std::filesystem::path gothic_system_path = "../Multiplayer/Resources/client-scripts.manifest.json";
	if (std::filesystem::is_regular_file(gothic_system_path))
		return gothic_system_path;
	return "Multiplayer/Resources/client-scripts.manifest.json";
}

} // namespace

CScript::CScript() : scriptVars(new CScriptState()), scriptKeys(new CKey()), isScriptLoaded(false)
{
	engine = std::make_unique<g1o::script::ScriptEngine>(ScriptClock, [](const std::string& message) {
		core.GetChat()->AddLine(RakString(message.c_str()), zCOLOR(255, 0, 0));
		LOG("%s", message.c_str());
	});
	CVariable::RegisterConstants(engine->Natives());
	CFunction::Register(engine->Natives());
	engine->RegisterEvents(kClientEvents);
}

CScript::~CScript()
{
	isScriptLoaded = false;
	delete scriptVars;
	delete scriptKeys;
}

bool CScript::StartScripts()
{
	try
	{
		auto resource = g1o::resource::LoadClientResource(ClientManifestPath().string());
		std::vector<g1o::script::ScriptBuffer> scripts;
		scripts.reserve(resource.scripts.size());
		for (auto& script : resource.scripts)
			scripts.push_back({std::move(script.name), std::move(script.bytecode), script.language});
		isScriptLoaded = engine->StartBuffers(scripts, g1o::script::RuntimePolicy::SandboxedClient);
		if (isScriptLoaded && playerManager.GetLocalPlayer()) engine->Dispatch("onInit");
		return isScriptLoaded;
	}
	catch (const std::exception& error)
	{
		isScriptLoaded = false;
		core.GetChat()->AddLine(RakString("Cannot load client resource: %s", error.what()), zCOLOR(255, 0, 0, 255));
		LOG("Cannot load client resource: %s", error.what());
		return false;
	}
}

void CScript::OnRender()
{
	scriptVars->OnRender();
}
