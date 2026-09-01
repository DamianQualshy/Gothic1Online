#include "stdafx.h"

#include <algorithm>
#include <array>
#include <cctype>
#include <cstring>
#include <filesystem>
#include <stdexcept>
#include <unordered_set>

#include <sodium.h>

namespace
{
	namespace fs = std::filesystem;

	struct ParsedScripts
	{
		std::vector<std::string> scripts;
		std::unordered_set<std::string> scriptKeys;
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

		if (element->Attribute("type"))
			throw std::runtime_error("script type is no longer supported; every script runs on the server: " + path.string());

		const std::string relative = RelativeName(root, path);
		const std::string key = Lower(relative);
		if (!parsed.scriptKeys.insert(key).second)
			throw std::runtime_error("duplicate script: " + relative);
		parsed.scripts.push_back(relative);
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

	void RequireSingleLanguage(const std::vector<std::string>& paths)
	{
		if (paths.empty()) throw std::runtime_error("no scripts are configured");
		const std::string language = ScriptLanguage(paths.front());
		for (const std::string& path : paths)
			if (ScriptLanguage(path) != language)
				throw std::runtime_error("script resource mixes Squirrel and Lua files");
	}

	bool IsValidServerIdentitySeed(const RakString& encodedSeed)
	{
		if (encodedSeed.IsEmpty())
			return false;

		std::array<unsigned char, crypto_sign_SEEDBYTES> decodedSeed{};
		std::size_t decodedLength = 0;
		return sodium_base642bin(
			decodedSeed.data(), decodedSeed.size(), encodedSeed.C_String(), encodedSeed.GetLength(),
			nullptr, &decodedLength, nullptr, sodium_base64_VARIANT_ORIGINAL) == 0 &&
			decodedLength == decodedSeed.size();
	}

	RakString GenerateServerIdentitySeed()
	{
		std::array<unsigned char, crypto_sign_SEEDBYTES> seed{};
		randombytes_buf(seed.data(), seed.size());

		const std::size_t encodedLength = sodium_base64_ENCODED_LEN(seed.size(), sodium_base64_VARIANT_ORIGINAL);
		std::string encoded(encodedLength, '\0');
		sodium_bin2base64(encoded.data(), encoded.size(), seed.data(), seed.size(), sodium_base64_VARIANT_ORIGINAL);
		encoded.resize(std::strlen(encoded.c_str()));
		return RakString(encoded.c_str());
	}

	bool SaveServerIdentitySeed(const fs::path& configPath, const RakString& seed)
	{
		TiXmlDocument document(configPath.string().c_str());
		if (!document.LoadFile())
			return false;

		TiXmlElement* root = document.FirstChildElement("server");
		if (!root)
			return false;

		TiXmlElement* config = root->FirstChildElement("config");
		if (!config)
		{
			config = new TiXmlElement("config");
			root->LinkEndChild(config);
		}

		config->SetAttribute("server_identity_seed", seed.C_String());
		return document.SaveFile(configPath.string().c_str());
	}
}

CConfig::CConfig()
{
	if (sodium_init() < 0)
		throw std::runtime_error("failed to initialize libsodium");

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
			SPDLOG_ERROR("Config file doesn't exist or is invalid: {}", configPath.string().c_str());
			return false;
		}

		TiXmlElement* root = document.FirstChildElement("server");
		if (!root)
		{
			SPDLOG_ERROR("Config root element <server> doesn't exist");
			return false;
		}

		bool parsedPublic = serverPublic;
		RakString parsedName = serverName;
		RakString parsedDescription = serverDescription;
		RakString parsedIdentitySeed = serverIdentitySeed;
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
			if (const char* value = config->Attribute("server_identity_seed")) parsedIdentitySeed = value;
		}
		if (TiXmlElement* description = root->FirstChildElement("description"))
		{
			parsedDescription = description->GetText() ? description->GetText() : "";
			if (parsedDescription.GetLength() > CConfig::MAX_DESCRIPTION_LENGTH)
				throw std::runtime_error("description is longer than 400 bytes");
		}

		ParsedScripts parsed;
		ReadScriptDocument(configPath, configPath.parent_path(), parsed, false);
		RequireSingleLanguage(parsed.scripts);

		serverPublic = parsedPublic;
		serverName = parsedName;
		serverDescription = parsedDescription;
		serverIdentitySeed = parsedIdentitySeed;
		serverPort = parsedPort;
		maxSlots = parsedSlots;
		adminPassword = parsedPassword;
		scripts = std::move(parsed.scripts);
		if (!IsValidServerIdentitySeed(serverIdentitySeed))
		{
			if (!serverIdentitySeed.IsEmpty())
				SPDLOG_WARN("Configured server identity seed is invalid; generating a replacement");
			serverIdentitySeed = GenerateServerIdentitySeed();
			if (!SaveServerIdentitySeed(configPath, serverIdentitySeed))
				SPDLOG_WARN("Could not persist the generated server identity seed to {}", configPath.string().c_str());
			else
				SPDLOG_INFO("Generated and saved a new server identity seed");
		}
		valid = true;
		SPDLOG_INFO("Config file found: {} server script(s)", static_cast<unsigned>(scripts.size()));
		return true;
	}
	catch (const std::exception& error)
	{
		SPDLOG_ERROR("Cannot load config: {}", error.what());
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
	config->SetAttribute("server_identity_seed", serverIdentitySeed.C_String());
	root->LinkEndChild(config);
	auto* description = new TiXmlElement("description");
	auto* descriptionText = new TiXmlText(serverDescription.C_String());
	descriptionText->SetCDATA(true);
	description->LinkEndChild(descriptionText);
	root->LinkEndChild(description);
	for (const std::string& script : scripts)
	{
		auto* element = new TiXmlElement("script");
		element->SetAttribute("src", script.c_str());
		root->LinkEndChild(element);
	}
	if (!document.SaveFile(fileName.C_String()))
		SPDLOG_ERROR("Cannot create config file {}", fileName.C_String());
}

void CConfig::SetDefault()
{
	serverPublic = false;
	serverName = "Gothic Online Server";
	serverDescription = "<font color=orange><b>G</b></font>othic Online <font color=lightgreen><b>S</b></font>erver";
	serverIdentitySeed = "";
	serverPort = "28970";
	maxSlots = "32";
	adminPassword = "change-me";
	scripts = {
		"resources/squirrel-scripts/constants.nut",
		"resources/squirrel-scripts/helpers.nut",
		"resources/squirrel-scripts/main.nut",
		"resources/squirrel-scripts/player-events.nut",
		"resources/squirrel-scripts/commands.nut"
	};
}
