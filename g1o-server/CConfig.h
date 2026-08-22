#ifndef CCONFIG_H
#define CCONFIG_H

#include <string>
#include <vector>

class CConfig
{
private:
	bool valid;
	bool serverPublic;
	RakString serverName;
	RakString serverPort;
	RakString maxSlots;
	RakString adminPassword;
	std::vector<std::string> scripts;

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
	const std::vector<std::string>& GetScripts() const { return scripts; }
};

#endif // CCONFIG_H
