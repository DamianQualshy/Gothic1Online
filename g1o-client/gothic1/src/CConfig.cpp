#include "stdafx.h"

namespace
{
	void ReadString(TiXmlElement* parent, const char* name, RakString& value)
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
	DLOG("CConfig::CConfig()");
	SetDefault();

	if (LoadConfigFromFile("..\\Multiplayer\\G1O_Config.xml") == false)
	{
		if (LoadConfigFromFile("Multiplayer\\G1O_Config.xml") == false)
			SaveConfigToFile("..\\Multiplayer\\G1O_Config.xml");
	}
}

CConfig::~CConfig()
{
	DLOG("CConfig::~CConfig()");
}

bool CConfig::LoadConfigFromFile(RakString fileName)
{
	DLOG("CConfig::LoadConfigFromFile(%s)", fileName.C_String());

	TiXmlDocument document(fileName.C_String());
	if (!document.LoadFile())
	{
		DLOG("Config file doesn't exist");
		return false;
	}

	TiXmlElement* root = document.FirstChildElement("GO_Config");
	if (!root)
	{
		DLOG("Config root element doesn't exist");
		return false;
	}

	DLOG("Config file found");
	// G2O-style flat layout used by the launcher and injected client.
	ReadString(root, "playerName", playerName);
	ReadString(root, "lang", language);
	ReadString(root, "serverIp", serverIp);
	ReadString(root, "serverPort", serverPort);
	ReadString(root, "startWorld", startWorld);
	ReadString(root, "playerInstance", playerInstance);
	ReadString(root, "clientScript", clientScript);

	return true;
}

void CConfig::SaveConfigToFile(RakString fileName)
{
	DLOG("CConfig::SaveConfigToFile(%s)", fileName.C_String());
	FILE* config = fopen(fileName.C_String(), "w");
	if (!config)
		return;

	fprintf(config, "<!-- Gothic Online client configuration. All available options are listed below. -->\n");
	fprintf(config, "<GO_Config>\n");
	fprintf(config, "\t<playerName>%s</playerName>\n", playerName.C_String());
	fprintf(config, "\t<serverIp>%s</serverIp>\n", serverIp.C_String());
	fprintf(config, "\t<serverPort>%s</serverPort>\n", serverPort.C_String());
	fprintf(config, "\t<startWorld>%s</startWorld>\n", startWorld.C_String());
	fprintf(config, "\t<playerInstance>%s</playerInstance>\n", playerInstance.C_String());
	fprintf(config, "\t<clientScript>%s</clientScript>\n", clientScript.C_String());
	fprintf(config, "\t<lang>%s</lang>\n", language.C_String());
	fprintf(config, "\t<launcherPosX>-1</launcherPosX>\n");
	fprintf(config, "\t<launcherPosY>-1</launcherPosY>\n");
	fprintf(config, "\t<favorites />\n");
	fprintf(config, "</GO_Config>\n");
	fclose(config);
}

void CConfig::SetDefault()
{
	DLOG("CConfig::SetDefault()");

	playerName = "Nickname";
	serverIp = "127.0.0.1";
	serverPort = "28970";
	startWorld = "WORLD.ZEN";
	playerInstance = "PC_HERO";
	clientScript = "client-main.gm";
	language = "en";
}
