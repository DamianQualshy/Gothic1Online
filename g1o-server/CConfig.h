#ifndef CCONFIG_H
#define CCONFIG_H

#include <cstddef>
#include <string>
#include <vector>

class CConfig
{
private:
	bool valid;
	bool serverPublic;
	std::string serverName;
	std::string serverDescription;
	std::string serverIdentitySeed;
	std::string serverPort;
	std::string maxSlots;
	std::string adminPassword;
	std::vector<std::string> scripts;

public:
	static constexpr std::size_t MAX_DESCRIPTION_LENGTH = 400;

	CConfig();
	~CConfig();

	bool LoadConfigFromFile(std::string fileName);
	void SaveConfigToFile(std::string fileName);
	void SetDefault();

	bool IsValid() const { return valid; }
	bool GetServerPublic() const { return serverPublic; }
	std::string GetServerName() const { return serverName; }
	std::string GetServerDescription() const { return serverDescription; }
	std::string GetServerIdentitySeed() const { return serverIdentitySeed; }
	std::string GetServerPort() const { return serverPort; }
	std::string GetMaxSlots() const { return maxSlots; }
	std::string GetAdminPassword() const { return adminPassword; }
	const std::vector<std::string>& GetScripts() const { return scripts; }
};

#endif // CCONFIG_H
