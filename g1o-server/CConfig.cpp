#include "stdafx.h"

#include <algorithm>
#include <cctype>
#include <filesystem>
#include <stdexcept>
#include <unordered_set>

namespace
{
	namespace fs = std::filesystem;

	struct ParsedScripts
	{
		std::vector<ScriptEntry> entries;
		std::vector<std::string> server;
		std::vector<std::string> client;
		std::unordered_set<std::string> serverKeys;
		std::unordered_set<std::string> clientKeys;
		std::unordered_set<std::string> activeImports;
	};

	std::string Lower(std::string value)
	{
		std::transform(value.begin(), value.end(), value.begin(), [](unsigned char character) {
			return static_cast<char>(std::tolower(character));
		});
		return value;
	}

	bool ReadBool(const char* value, bool& result)
	{
		if (!value) return false;
		const std::string normalized = Lower(value);
		if (normalized == "true" || normalized == "1") { result = true; return true; }
		if (normalized == "false" || normalized == "0") { result = false; return true; }
		return false;
	}

	bool IsInside(const fs::path& root, const fs::path& candidate)
	{
		const fs::path relative = candidate.lexically_relative(root);
		if (relative.empty()) return candidate == root;
		return *relative.begin() != "..";
	}

	fs::path ResolvePath(const fs::path& root, const fs::path& parent, const char* source, const char* kind)
	{
		if (!source || !*source) throw std::runtime_error(std::string(kind) + " is missing its src attribute");
		const fs::path declared(source);
		if (declared.is_absolute()) throw std::runtime_error(std::string(kind) + " path must be relative: " + source);
		const fs::path resolved = fs::weakly_canonical(parent / declared);
		if (!IsInside(root, resolved)) throw std::runtime_error(std::string(kind) + " path leaves the server directory: " + source);
		return resolved;
	}

	std::string RelativeName(const fs::path& root, const fs::path& path)
	{
		return path.lexically_relative(root).generic_string();
	}

	std::string AddScript(ParsedScripts& parsed, const fs::path& root, const fs::path& documentDirectory, TiXmlElement* element)
	{
		const fs::path path = ResolvePath(root, documentDirectory, element->Attribute("src"), "script");
		if (!fs::is_regular_file(path)) throw std::runtime_error("script file does not exist: " + path.string());

		const std::string extension = Lower(path.extension().string());
		if (extension != ".nut" && extension != ".lua")
			throw std::runtime_error("unsupported script extension: " + path.string());

		const char* typeValue = element->Attribute("type");
		if (!typeValue) throw std::runtime_error("script is missing its type attribute: " + path.string());
		const std::string type = Lower(typeValue);
		ScriptSide side;
		if (type == "client") side = ScriptSide::Client;
		else if (type == "server") side = ScriptSide::Server;
		else if (type == "shared") side = ScriptSide::Shared;
		else throw std::runtime_error("unsupported script type '" + type + "': " + path.string());

		const std::string relative = RelativeName(root, path);
		const std::string key = Lower(relative);
		auto add = [&](std::vector<std::string>& target, std::unordered_set<std::string>& keys, const char* targetName) {
			if (!keys.insert(key).second)
				throw std::runtime_error("duplicate " + std::string(targetName) + " script: " + relative);
			target.push_back(relative);
		};
		if (side == ScriptSide::Server || side == ScriptSide::Shared) add(parsed.server, parsed.serverKeys, "server");
		if (side == ScriptSide::Client || side == ScriptSide::Shared) add(parsed.client, parsed.clientKeys, "client");
		parsed.entries.push_back({relative, side});
		return extension;
	}

	std::unordered_set<std::string> ReadScriptDocument(
		const fs::path& path, const fs::path& root, ParsedScripts& parsed, bool importedResource)
	{
		const std::string importKey = Lower(path.generic_string());
		if (!parsed.activeImports.insert(importKey).second)
			throw std::runtime_error("script import cycle detected at: " + path.string());

		TiXmlDocument document(path.string().c_str());
		if (!document.LoadFile())
		{
			parsed.activeImports.erase(importKey);
			throw std::runtime_error("cannot load script configuration: " + path.string());
		}
		TiXmlElement* rootElement = document.FirstChildElement("server");
		if (!rootElement)
		{
			parsed.activeImports.erase(importKey);
			throw std::runtime_error("configuration root <server> is missing in: " + path.string());
		}

		std::unordered_set<std::string> languages;
		for (TiXmlElement* element = rootElement->FirstChildElement(); element; element = element->NextSiblingElement())
		{
			const std::string name = element->Value();
			if (name == "script")
			{
				languages.insert(AddScript(parsed, root, path.parent_path(), element));
			}
			else if (name == "import")
			{
				const fs::path imported = ResolvePath(root, path.parent_path(), element->Attribute("src"), "import");
				if (!fs::is_regular_file(imported)) throw std::runtime_error("import file does not exist: " + imported.string());
				const auto importedLanguages = ReadScriptDocument(imported, root, parsed, true);
				languages.insert(importedLanguages.begin(), importedLanguages.end());
			}
		}

		parsed.activeImports.erase(importKey);
		if (importedResource && languages.size() > 1)
			throw std::runtime_error("imported script resource mixes Squirrel and Lua files: " + path.string());
		return languages;
	}

	std::string ScriptLanguage(const std::string& path)
	{
		return Lower(fs::path(path).extension().string());
	}

	void RequireSingleLanguage(const std::vector<std::string>& paths, const char* side)
	{
		if (paths.empty()) throw std::runtime_error("no " + std::string(side) + " or shared scripts are configured");
		const std::string language = ScriptLanguage(paths.front());
		for (const std::string& path : paths)
			if (ScriptLanguage(path) != language)
				throw std::runtime_error(std::string(side) + " script resource mixes Squirrel and Lua files");
	}

	const char* SideName(ScriptSide side)
	{
		switch (side)
		{
		case ScriptSide::Client: return "client";
		case ScriptSide::Shared: return "shared";
		default: return "server";
		}
	}
}

CConfig::CConfig()
{
	valid = false;
	SetDefault();
	if (!fs::is_regular_file("config.xml"))
		SaveConfigToFile("config.xml");
	valid = LoadConfigFromFile("config.xml");
}

CConfig::~CConfig() = default;

bool CConfig::LoadConfigFromFile(RakString fileName)
{
	valid = false;
	try
	{
		const fs::path configPath = fs::weakly_canonical(fileName.C_String());
		TiXmlDocument document(configPath.string().c_str());
		if (!document.LoadFile())
		{
			LOG("[error] Config file doesn't exist or is invalid: %s", configPath.string().c_str());
			return false;
		}

		TiXmlElement* root = document.FirstChildElement("server");
		if (!root)
		{
			LOG("[error] Config root element <server> doesn't exist");
			return false;
		}

		bool parsedPublic = serverPublic;
		RakString parsedName = serverName;
		RakString parsedPort = serverPort;
		RakString parsedSlots = maxSlots;
		RakString parsedPassword = adminPassword;
		if (TiXmlElement* config = root->FirstChildElement("config"))
		{
			if (const char* value = config->Attribute("public"); value && !ReadBool(value, parsedPublic))
				throw std::runtime_error("config.public must be true or false");
			if (const char* value = config->Attribute("host_name")) parsedName = value;
			if (const char* value = config->Attribute("port")) parsedPort = value;
			if (const char* value = config->Attribute("max_slots")) parsedSlots = value;
			if (const char* value = config->Attribute("rcon_pass")) parsedPassword = value;
		}

		ParsedScripts parsed;
		ReadScriptDocument(configPath, configPath.parent_path(), parsed, false);
		RequireSingleLanguage(parsed.server, "server");
		RequireSingleLanguage(parsed.client, "client");

		serverPublic = parsedPublic;
		serverName = parsedName;
		serverPort = parsedPort;
		maxSlots = parsedSlots;
		adminPassword = parsedPassword;
		scripts = std::move(parsed.entries);
		serverScripts = std::move(parsed.server);
		clientScripts = std::move(parsed.client);
		valid = true;
		LOG("[info] Config file found: %u server script(s), %u client script(s)",
			static_cast<unsigned>(serverScripts.size()), static_cast<unsigned>(clientScripts.size()));
		return true;
	}
	catch (const std::exception& error)
	{
		LOG("[error] Cannot load config: %s", error.what());
		return false;
	}
}

void CConfig::SaveConfigToFile(RakString fileName)
{
	TiXmlDocument document;
	document.LinkEndChild(new TiXmlDeclaration("1.0", "UTF-8", ""));
	document.LinkEndChild(new TiXmlComment(" Gothic Online server configuration. Script declarations are loaded in document order. "));
	auto* root = new TiXmlElement("server");
	document.LinkEndChild(root);
	auto* config = new TiXmlElement("config");
	config->SetAttribute("public", serverPublic ? "true" : "false");
	config->SetAttribute("host_name", serverName.C_String());
	config->SetAttribute("port", serverPort.C_String());
	config->SetAttribute("max_slots", maxSlots.C_String());
	config->SetAttribute("rcon_pass", adminPassword.C_String());
	root->LinkEndChild(config);
	for (const ScriptEntry& script : scripts)
	{
		auto* element = new TiXmlElement("script");
		element->SetAttribute("src", script.path.c_str());
		element->SetAttribute("type", SideName(script.side));
		root->LinkEndChild(element);
	}
	if (!document.SaveFile(fileName.C_String()))
		LOG("[error] Cannot create config file %s", fileName.C_String());
}

void CConfig::SetDefault()
{
	serverPublic = false;
	serverName = "Gothic Online Server";
	serverPort = "28970";
	maxSlots = "32";
	adminPassword = "change-me";
	scripts = {
		{"resources/squirrel-scripts/shared/constants.nut", ScriptSide::Shared},
		{"resources/squirrel-scripts/shared/helpers.nut", ScriptSide::Shared},
		{"resources/squirrel-scripts/server/main.nut", ScriptSide::Server},
		{"resources/squirrel-scripts/server/player-events.nut", ScriptSide::Server},
		{"resources/squirrel-scripts/server/commands.nut", ScriptSide::Server},
		{"resources/squirrel-scripts/client/main.nut", ScriptSide::Client},
		{"resources/squirrel-scripts/client/player-events.nut", ScriptSide::Client},
		{"resources/squirrel-scripts/client/commands.nut", ScriptSide::Client}
	};
	serverScripts = {scripts[0].path, scripts[1].path, scripts[2].path, scripts[3].path, scripts[4].path};
	clientScripts = {scripts[0].path, scripts[1].path, scripts[5].path, scripts[6].path, scripts[7].path};
}
