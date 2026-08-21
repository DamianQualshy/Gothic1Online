#include "stdafx.h"

namespace
{
	void ReadString(TiXmlElement* root, const char* name, RakString& value)
	{
		TiXmlElement* element = root ? root->FirstChildElement(name) : NULL;
		if (element && element->GetText())
			value = element->GetText();
	}
}

CConfig::CConfig()
{
	SetDefault();
	if (!LoadConfigFromFile("config.xml"))
		SaveConfigToFile("config.xml");
}

CConfig::~CConfig()
{
}

bool CConfig::LoadConfigFromFile(RakString fileName)
{
	TiXmlDocument document(fileName.C_String());
	if (!document.LoadFile())
	{
		LOG("[error] Config file doesn't exist");
		return false;
	}

	TiXmlElement* root = document.FirstChildElement("GO_Config");
	if (!root)
	{
		LOG("[error] Config root element GO_Config doesn't exist");
		return false;
	}

	LOG("[info] Config file found");
	TiXmlElement* publicElement = root->FirstChildElement("public");
	if (publicElement && publicElement->GetText())
		serverPublic = atoi(publicElement->GetText()) != 0;

	ReadString(root, "serverName", serverName);
	ReadString(root, "serverPort", serverPort);
	ReadString(root, "maxSlots", maxSlots);
	ReadString(root, "adminPassword", adminPassword);
	ReadString(root, "serverScript", serverScript);
	ReadString(root, "clientScript", clientScript);
	return true;
}

void CConfig::SaveConfigToFile(RakString fileName)
{
	FILE* config = fopen(fileName.C_String(), "w");
	if (!config)
	{
		LOG("[error] Cannot create config file %s", fileName.C_String());
		return;
	}

	fprintf(config, "<!-- Gothic Online server configuration. All available options are listed below. -->\n");
	fprintf(config, "<GO_Config>\n");
	fprintf(config, "\t<public>%d</public>\n", serverPublic ? 1 : 0);
	fprintf(config, "\t<serverName>%s</serverName>\n", serverName.C_String());
	fprintf(config, "\t<serverPort>%s</serverPort>\n", serverPort.C_String());
	fprintf(config, "\t<maxSlots>%s</maxSlots>\n", maxSlots.C_String());
	fprintf(config, "\t<adminPassword>%s</adminPassword>\n", adminPassword.C_String());
	fprintf(config, "\t<serverScript>%s</serverScript>\n", serverScript.C_String());
	fprintf(config, "\t<clientScript>%s</clientScript>\n", clientScript.C_String());
	fprintf(config, "</GO_Config>\n");
	fclose(config);
}

void CConfig::SetDefault()
{
	serverPublic = false;
	serverName = "Gothic Online Server";
	serverPort = "28970";
	maxSlots = "32";
	adminPassword = "change-me";
	serverScript = "server-main.gm";
	clientScript = "client-main.gm";
}
