#ifndef CPLAYER_H
#define CPLAYER_H

struct STimedOverlay
{
	std::uint64_t time;
	std::string overlay;

	STimedOverlay() : time(0) {}
	STimedOverlay(std::uint64_t timeValue, std::string overlayValue)
		: time(timeValue), overlay(std::move(overlayValue)) {}
};

class CPlayer : public CCreature
{
private:
	HSteamNetConnection connection;
	std::string ipAddress;

public:
	int playerId;
	List<CPlayer*> streamedPlayers;
	List<CItem*> streamedItems;
	List<std::string> overlaysList;
	List<STimedOverlay> timedOverlays;
	bool bConnected;

	CPlayer(HSteamNetConnection clientConnection, std::string clientIp, int playerID, std::string playerName);
	~CPlayer();

	void Disconnect();
	void CheckTimedOverlay();

	HSteamNetConnection GetConnection() const { return connection; }
	const std::string& GetIP() const { return ipAddress; }
	int GetID() const { return playerId; }
	int GetVirtualWorld() const { return virtualWorld; }
	void SetVirtualWorld(unsigned worldId) { virtualWorld = worldId; }
};

#endif
