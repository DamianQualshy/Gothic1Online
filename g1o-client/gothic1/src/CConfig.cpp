#include "stdafx.h"

#include <fstream>
#include <iomanip>
#include <nlohmann/json.hpp>

namespace
{
	void ReadString(const nlohmann::json& config, const char* name, RakString& value)
	{
		const auto field = config.find(name);
		if (field != config.end() && field->is_string())
			value = field->get_ref<const std::string&>().c_str();
	}

	void ReadLegacyString(TiXmlElement* parent, const char* name, RakString& value)
	{
		if (!parent)
			return;
		TiXmlElement* element = parent->FirstChildElement(name);
		if (element && element->GetText())
			value = element->GetText();
	}
}

CConfig::CConfig()
{
	SPDLOG_TRACE("CConfig::CConfig()");
	SetDefault();

	if (LoadConfigFromFile("..\\Multiplayer\\G1O_Config.json") == false)
	{
		if (LoadConfigFromFile("Multiplayer\\G1O_Config.json") == false)
		{
			if (LoadLegacyConfigFromFile("..\\Multiplayer\\G1O_Config.xml") ||
				LoadLegacyConfigFromFile("Multiplayer\\G1O_Config.xml"))
				SPDLOG_INFO("Using legacy client XML configuration until the launcher migrates it to JSON");
			else
				SaveConfigToFile("..\\Multiplayer\\G1O_Config.json");
		}
	}
}

CConfig::~CConfig()
{
	SPDLOG_TRACE("CConfig::~CConfig()");
}

bool CConfig::LoadConfigFromFile(RakString fileName)
{
	SPDLOG_TRACE("CConfig::LoadConfigFromFile({})", fileName.C_String());

	std::ifstream file(fileName.C_String());
	if (!file)
	{
		SPDLOG_TRACE("Config file doesn't exist");
		return false;
	}

	try
	{
		nlohmann::json config;
		file >> config;
		if (!config.is_object())
			return false;

		SPDLOG_TRACE("Config file found");
		ReadString(config, "playerName", playerName);
		ReadString(config, "lang", language);
	}
	catch (const nlohmann::json::exception& exception)
	{
		SPDLOG_WARN("Could not parse {}: {}", fileName.C_String(), exception.what());
		return false;
	}

	return true;
}

bool CConfig::LoadLegacyConfigFromFile(RakString fileName)
{
	TiXmlDocument document(fileName.C_String());
	if (!document.LoadFile())
		return false;

	TiXmlElement* root = document.FirstChildElement("GO_Config");
	if (!root)
		return false;

	ReadLegacyString(root, "playerName", playerName);
	ReadLegacyString(root, "lang", language);
	return true;
}

void CConfig::SaveConfigToFile(RakString fileName)
{
	SPDLOG_TRACE("CConfig::SaveConfigToFile({})", fileName.C_String());
	std::ofstream file(fileName.C_String());
	if (!file)
		return;

	nlohmann::ordered_json config;
	config["playerName"] = playerName.C_String();
	config["lang"] = language.C_String();
	config["launcherPosX"] = -1;
	config["launcherPosY"] = -1;
	config["favorites"] = nlohmann::ordered_json::array();
	file << std::setw(2) << config << '\n';
}

void CConfig::SetDefault()
{
	SPDLOG_TRACE("CConfig::SetDefault()");

	playerName = "Nickname";
	language = "en";
}
