#ifndef CPLAYERMANAGER_H
#define CPLAYERMANAGER_H

#define playerManager CPlayerManager::GetManager()
#define playerListIter map<int,CPlayer*>::iterator

class CPlayer;

class CPlayerManager
{
private:
	std::uint64_t timerBroadcastList;
	int nextPlayerId;

	CPlayerManager();
	CPlayerManager(const CPlayerManager&) = delete;
	~CPlayerManager();

public:
	map<int, CPlayer*> playerList;

	static CPlayerManager& GetManager()
	{
		static CPlayerManager manager;
		return manager;
	}

	bool IsNicknameUsed(const std::string& playerName) const;
	bool IsPlayerInManager(const CPlayer* player) const;
	CPlayer* CreatePlayer(HSteamNetConnection connection, const std::string& playerName);
	void CreatePlayerForOtherPlayer(CPlayer* player, CPlayer* receiver);
	bool DestroyPlayer(CPlayer* player);
	void CheckPlayersTimedOverlays();

	CPlayer* GetPlayer(int playerID) const;
	CPlayer* GetPlayer(HSteamNetConnection connection) const;
	CPlayer* GetPlayer(const std::string& playerName) const;
	unsigned int GetNumberOfPlayers() const { return static_cast<unsigned int>(playerList.size()); }
	void BroadcastPlayerList();
};

#endif
