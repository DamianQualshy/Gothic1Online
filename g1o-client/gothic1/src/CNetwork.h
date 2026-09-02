#ifndef CNETWORK_H
#define CNETWORK_H

class CNetwork
{
private:
	bool bIsInitiated;
	bool runtimeInitialized;
	ISteamNetworkingSockets* sockets;
	HSteamNetConnection serverConnection;
	CReceiver* pReceiver;

	static CNetwork* callbackInstance;
	static void ConnectionStatusChangedCallback(SteamNetConnectionStatusChangedCallback_t* info);
	void OnConnectionStatusChanged(SteamNetConnectionStatusChangedCallback_t* info);

public:
	bool bConnected;

	CNetwork();
	~CNetwork();

	bool IsConnected() const { return bConnected; }
	bool IsInitiated() const { return bIsInitiated; }
	ISteamNetworkingSockets* GetSockets() const { return sockets; }
	HSteamNetConnection GetConnection() const { return serverConnection; }

	bool InitNetwork();
	void Connect(const std::string& address, unsigned short port);
	void Disconnect();
	void PollCallbacks();
	bool Send(const PacketWriter& packet, int sendFlags = k_nSteamNetworkingSend_Reliable);
	int GetPing() const;
	bool GetStatus(SteamNetConnectionRealTimeStatus_t& status) const;

	CReceiver* GetReceiver() { return pReceiver; }
};

#endif
