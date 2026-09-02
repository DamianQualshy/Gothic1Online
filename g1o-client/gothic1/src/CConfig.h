#ifndef CCONFIG_H
#define CCONFIG_H

class CConfig
{
private:
	std::string playerName;
	std::string language;
	bool LoadLegacyConfigFromFile(std::string fileName);
public:
	CConfig();
	~CConfig();

	bool LoadConfigFromFile(std::string fileName);
	void SaveConfigToFile(std::string fileName);
	void SetDefault();

	inline std::string GetPlayerName(){ return this->playerName;};
	inline std::string GetLanguage(){ return this->language; };

};

#endif //CCONFIG_H
