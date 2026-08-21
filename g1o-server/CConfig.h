#ifndef CCONFIG_H
#define CCONFIG_H

#include <string>
#include <vector>

enum class ScriptSide
{
	Client,
	Server,
	Shared
};

struct ScriptEntry
{
	std::string path;
	ScriptSide side = ScriptSide::Server;
};

class CConfig
{
private:
	bool valid;
	bool serverPublic;
	RakString serverName;
	RakString serverPort;
	RakString maxSlots;
	RakString adminPassword;
	std::vector<ScriptEntry> scripts;
	std::vector<std::string> serverScripts;
	std::vector<std::string> clientScripts;

public:
	CConfig();
	~CConfig();

	bool LoadConfigFromFile(RakString fileName);
	void SaveConfigToFile(RakString fileName);
	void SetDefault();

	bool IsValid() const { return valid; }
	bool GetServerPublic() const { return serverPublic; }
	RakString GetServerName() const { return serverName; }
	RakString GetServerPort() const { return serverPort; }
	RakString GetMaxSlots() const { return maxSlots; }
	RakString GetAdminPassword() const { return adminPassword; }
	const std::vector<ScriptEntry>& GetScripts() const { return scripts; }
	const std::vector<std::string>& GetServerScripts() const { return serverScripts; }
	const std::vector<std::string>& GetClientScripts() const { return clientScripts; }
};

#endif // CCONFIG_H
