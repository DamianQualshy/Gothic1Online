#include "stdafx.h"

CNetwork* CNetwork::callbackInstance = nullptr;

CNetwork::CNetwork()
	: bIsInitiated(false),
	  runtimeInitialized(false),
	  sockets(nullptr),
	  serverConnection(k_HSteamNetConnection_Invalid),
	  pReceiver(new CReceiver()),
	  bConnected(false)
{
}

CNetwork::~CNetwork()
{
	if (sockets && serverConnection != k_HSteamNetConnection_Invalid)
		sockets->CloseConnection(serverConnection, 0, "Client shutdown", false);
	if (callbackInstance == this)
		callbackInstance = nullptr;
	if (runtimeInitialized)
		GameNetworkingSockets_Kill();
	delete pReceiver;
}

bool CNetwork::InitNetwork()
{
	SteamDatagramErrMsg error;
	if (!GameNetworkingSockets_Init(nullptr, error))
	{
		SPDLOG_ERROR("GameNetworkingSockets initialization failed: {}", error);
		return false;
	}
	runtimeInitialized = true;
	sockets = SteamNetworkingSockets();
	callbackInstance = this;
	bIsInitiated = sockets != nullptr;
	return bIsInitiated;
}

void CNetwork::Connect(const std::string& address, unsigned short port)
{
	if (!bIsInitiated || serverConnection != k_HSteamNetConnection_Invalid)
		return;

	SteamNetworkingIPAddr serverAddress;
	serverAddress.Clear();
	if (!serverAddress.ParseString(address.c_str()))
	{
		SPDLOG_ERROR("Invalid server address: {}", address);
		ConnectionRPC::ConnectionFailed(this);
		return;
	}
	serverAddress.m_port = port;

	SteamNetworkingConfigValue_t option;
	option.SetPtr(k_ESteamNetworkingConfig_Callback_ConnectionStatusChanged,
		reinterpret_cast<void*>(ConnectionStatusChangedCallback));
	serverConnection = sockets->ConnectByIPAddress(serverAddress, 1, &option);
	if (serverConnection == k_HSteamNetConnection_Invalid)
		ConnectionRPC::ConnectionFailed(this);
}

void CNetwork::Disconnect()
{
	if (playerManager.GetLocalPlayer())
		playerManager.GetLocalPlayer()->ReleaseMob();
	if (sockets && serverConnection != k_HSteamNetConnection_Invalid)
		sockets->CloseConnection(serverConnection, 0, "Client disconnected", true);
	serverConnection = k_HSteamNetConnection_Invalid;
	bConnected = false;
}

void CNetwork::PollCallbacks()
{
	if (sockets)
		sockets->RunCallbacks();
}

bool CNetwork::Send(const PacketWriter& packet, int sendFlags)
{
	if (!sockets || serverConnection == k_HSteamNetConnection_Invalid || packet.Empty())
		return false;
	return sockets->SendMessageToConnection(serverConnection, packet.Data(), packet.Size(),
		sendFlags, nullptr) == k_EResultOK;
}

int CNetwork::GetPing() const
{
	SteamNetConnectionRealTimeStatus_t status{};
	if (!sockets || serverConnection == k_HSteamNetConnection_Invalid ||
		sockets->GetConnectionRealTimeStatus(serverConnection, &status, 0, nullptr) != k_EResultOK)
		return -1;
	return status.m_nPing;
}

bool CNetwork::GetStatus(SteamNetConnectionRealTimeStatus_t& status) const
{
	return sockets && serverConnection != k_HSteamNetConnection_Invalid &&
		sockets->GetConnectionRealTimeStatus(serverConnection, &status, 0, nullptr) == k_EResultOK;
}

void CNetwork::ConnectionStatusChangedCallback(SteamNetConnectionStatusChangedCallback_t* info)
{
	if (callbackInstance)
		callbackInstance->OnConnectionStatusChanged(info);
}

void CNetwork::OnConnectionStatusChanged(SteamNetConnectionStatusChangedCallback_t* info)
{
	if (info->m_hConn != serverConnection)
		return;
	switch (info->m_info.m_eState)
	{
	case k_ESteamNetworkingConnectionState_Connected:
		ConnectionRPC::CatchConnection(this);
		break;
	case k_ESteamNetworkingConnectionState_ClosedByPeer:
	case k_ESteamNetworkingConnectionState_ProblemDetectedLocally:
	{
		const bool failedToConnect = info->m_eOldState == k_ESteamNetworkingConnectionState_Connecting;
		sockets->CloseConnection(info->m_hConn, 0, nullptr, false);
		serverConnection = k_HSteamNetConnection_Invalid;
		bConnected = false;
		if (failedToConnect)
			ConnectionRPC::ConnectionFailed(this);
		else
			ConnectionRPC::ConnectionClosed(this,
				info->m_info.m_eState == k_ESteamNetworkingConnectionState_ProblemDetectedLocally,
				info->m_info.m_eEndReason, info->m_info.m_szEndDebug);
		break;
	}
	default:
		break;
	}
}
