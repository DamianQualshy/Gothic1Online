#ifndef CNETWORK_H
#define CNETWORK_H

#include <string>

class CNetwork
{
private:
	ISteamNetworkingSockets* sockets;
	HSteamListenSocket listenSocket;
	HSteamNetPollGroup pollGroup;
	CReceiver* pReceiver;
	bool initialized;

	static CNetwork* callbackInstance;
	static void ConnectionStatusChangedCallback(SteamNetConnectionStatusChangedCallback_t* info);
	void OnConnectionStatusChanged(SteamNetConnectionStatusChangedCallback_t* info);

public:
	CNetwork();
	~CNetwork();

	bool InitNetwork();
	void PollCallbacks();
	ISteamNetworkingSockets* GetSockets() const { return sockets; }
	HSteamNetPollGroup GetPollGroup() const { return pollGroup; }
	CReceiver* GetReceiver() const { return pReceiver; }

	bool Send(HSteamNetConnection connection, const PacketWriter& packet, int sendFlags = k_nSteamNetworkingSend_Reliable);
	void Disconnect(HSteamNetConnection connection, int reason = 0, const char* debug = "Disconnected", bool linger = true);
	int GetPing(HSteamNetConnection connection) const;
	std::string GetRemoteAddress(HSteamNetConnection connection) const;

	void SendToAll(const PacketWriter& packet, int sendFlags = k_nSteamNetworkingSend_Reliable);
	void SendToPlayersOnList(const PacketWriter& packet, List<CPlayer*>* targetPlayerList, int sendFlags = k_nSteamNetworkingSend_Reliable);
	void SendToAllWithoutPlayer(const PacketWriter& packet, CPlayer* player, int sendFlags = k_nSteamNetworkingSend_Reliable);
	void SendToAllInWorld(const PacketWriter& packet, const std::string& world, CPlayer* player = nullptr, int sendFlags = k_nSteamNetworkingSend_Reliable);
};

#endif
