#ifndef CCLIENT_H
#define CCLIENT_H

#include <optional>

#include <LaunchSession.h>

#define core CClient::GetCore()

class CClient
{
private:
	bool bIsLateHooksInitiated;
	std::optional<g1o::LaunchSession> launchSession;

	CSplashScreen* pSplashScreen;
	CGothicGame* pGothicGame;
	CRender* pRender;
	CConfig* pConfig;
	CNetwork* pNetwork;
	CMultiplayer* pMultiplayer;
	CChat* pChat;
	CKeyBoard* pKeyBoard;
private: //singleton
	CClient();
	CClient(const CClient&) {};
	~CClient();
public:
	static CClient & GetCore()
	{
		static CClient client;
		return client;
	}

	void Start();
	void InitializeHooks();
	void DeInitializeHooks();
	void InitializeLateHooks();
	void DeInitializeLateHooks();
	void ApplyPatches();

	bool IsLateHooksInitiated(){ return this->bIsLateHooksInitiated; };

	inline CGothicGame* GetGothicGame() { return this->pGothicGame; };
	inline CRender* GetRender() { return this->pRender; };
	inline CConfig* GetConfig() { return this->pConfig; };
	inline CNetwork* GetNetwork() { return this->pNetwork; };
	inline CMultiplayer* GetMultiplayer() { return this->pMultiplayer; };
	inline CChat* GetChat() { return this->pChat; };
	inline CKeyBoard* GetKeyBoard() { return this->pKeyBoard; };
	inline const g1o::LaunchSession& GetLaunchSession() const { return this->launchSession.value(); };
};


#endif //CCLIENT_H
