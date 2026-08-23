#ifndef CCONFIG_H
#define CCONFIG_H

class CConfig
{
private:
	RakString playerName;
	RakString language;
	bool LoadLegacyConfigFromFile(RakString fileName);
public:
	CConfig();
	~CConfig();

	bool LoadConfigFromFile(RakString fileName);
	void SaveConfigToFile(RakString fileName);
	void SetDefault();

	inline RakString GetPlayerName(){ return this->playerName;};
	inline RakString GetLanguage(){ return this->language; };

};

#endif //CCONFIG_H
