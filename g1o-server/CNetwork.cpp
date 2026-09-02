#include "stdafx.h"

CNetwork* CNetwork::callbackInstance = nullptr;

CNetwork::CNetwork()
	: sockets(nullptr),
	  listenSocket(k_HSteamListenSocket_Invalid),
	  pollGroup(k_HSteamNetPollGroup_Invalid),
	  pReceiver(new CReceiver()),
	  initialized(false)
{
}

CNetwork::~CNetwork()
{
	if (sockets)
	{
		for (const auto& entry : playerManager.playerList)
			sockets->CloseConnection(entry.second->GetConnection(), 0, "Server shutdown", true);
		if (listenSocket != k_HSteamListenSocket_Invalid)
			sockets->CloseListenSocket(listenSocket);
		if (pollGroup != k_HSteamNetPollGroup_Invalid)
			sockets->DestroyPollGroup(pollGroup);
	}
	if (callbackInstance == this)
		callbackInstance = nullptr;
	if (initialized)
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
	initialized = true;
	sockets = SteamNetworkingSockets();
	callbackInstance = this;

	const auto port = static_cast<std::uint16_t>(std::stoi(core.GetConfig()->GetServerPort()));
	SteamNetworkingIPAddr address;
	address.Clear();
	address.m_port = port;

	SteamNetworkingConfigValue_t option;
	option.SetPtr(k_ESteamNetworkingConfig_Callback_ConnectionStatusChanged,
		reinterpret_cast<void*>(ConnectionStatusChangedCallback));
	listenSocket = sockets->CreateListenSocketIP(address, 1, &option);
	if (listenSocket == k_HSteamListenSocket_Invalid)
	{
		SPDLOG_ERROR("Could not create a GNS listen socket on port {}", port);
		return false;
	}

	pollGroup = sockets->CreatePollGroup();
	if (pollGroup == k_HSteamNetPollGroup_Invalid)
	{
		SPDLOG_ERROR("Could not create the GNS server poll group");
		return false;
	}

	SPDLOG_INFO("Listening for GNS connections on 0.0.0.0:{}", port);
	return true;
}

void CNetwork::PollCallbacks()
{
	if (sockets)
		sockets->RunCallbacks();
}

bool CNetwork::Send(HSteamNetConnection connection, const PacketWriter& packet, int sendFlags)
{
	if (!sockets || connection == k_HSteamNetConnection_Invalid || packet.Empty())
		return false;
	return sockets->SendMessageToConnection(connection, packet.Data(), packet.Size(),
		sendFlags, nullptr) == k_EResultOK;
}

void CNetwork::Disconnect(HSteamNetConnection connection, int reason, const char* debug, bool linger)
{
	if (sockets && connection != k_HSteamNetConnection_Invalid)
		sockets->CloseConnection(connection, reason, debug, linger);
}

int CNetwork::GetPing(HSteamNetConnection connection) const
{
	SteamNetConnectionRealTimeStatus_t status{};
	if (!sockets || sockets->GetConnectionRealTimeStatus(connection, &status, 0, nullptr) != k_EResultOK)
		return -1;
	return status.m_nPing;
}

std::string CNetwork::GetRemoteAddress(HSteamNetConnection connection) const
{
	SteamNetConnectionInfo_t info{};
	if (!sockets || !sockets->GetConnectionInfo(connection, &info))
		return {};
	char text[SteamNetworkingIPAddr::k_cchMaxString]{};
	info.m_addrRemote.ToString(text, sizeof(text), false);
	return text;
}

void CNetwork::SendToAll(const PacketWriter& packet, int sendFlags)
{
	for (const auto& entry : playerManager.playerList)
		Send(entry.second->GetConnection(), packet, sendFlags);
}

void CNetwork::SendToPlayersOnList(const PacketWriter& packet, List<CPlayer*>* targetPlayerList, int sendFlags)
{
	if (!targetPlayerList)
		return;
	for (unsigned int i = 0; i < targetPlayerList->Num(); ++i)
		Send((*targetPlayerList)[i]->GetConnection(), packet, sendFlags);
}

void CNetwork::SendToAllWithoutPlayer(const PacketWriter& packet, CPlayer* player, int sendFlags)
{
	if (!player)
		return;
	for (const auto& entry : playerManager.playerList)
	{
		if (entry.first != player->GetID() && entry.second->world == player->world)
			Send(entry.second->GetConnection(), packet, sendFlags);
	}
}

void CNetwork::SendToAllInWorld(const PacketWriter& packet, const std::string& world, CPlayer* player, int sendFlags)
{
	for (const auto& entry : playerManager.playerList)
	{
		if ((!player || entry.first != player->GetID()) && entry.second->world == world)
			Send(entry.second->GetConnection(), packet, sendFlags);
	}
}

void CNetwork::ConnectionStatusChangedCallback(SteamNetConnectionStatusChangedCallback_t* info)
{
	if (callbackInstance)
		callbackInstance->OnConnectionStatusChanged(info);
}

void CNetwork::OnConnectionStatusChanged(SteamNetConnectionStatusChangedCallback_t* info)
{
	switch (info->m_info.m_eState)
	{
	case k_ESteamNetworkingConnectionState_Connecting:
	{
		char remote[SteamNetworkingIPAddr::k_cchMaxString]{};
		info->m_info.m_addrRemote.ToString(remote, sizeof(remote), false);
		if (core.GetBanSystem()->IsBanned(remote))
		{
			sockets->CloseConnection(info->m_hConn, 1001, "Banned", false);
			return;
		}
		if (sockets->AcceptConnection(info->m_hConn) != k_EResultOK ||
			!sockets->SetConnectionPollGroup(info->m_hConn, pollGroup))
		{
			sockets->CloseConnection(info->m_hConn, 1002, "Connection setup failed", false);
			return;
		}
		ConnectionRPC::CatchConnection(this, info->m_hConn, remote);
		break;
	}
	case k_ESteamNetworkingConnectionState_ClosedByPeer:
	case k_ESteamNetworkingConnectionState_ProblemDetectedLocally:
		ConnectionRPC::Disconnected(this, info->m_hConn,
			info->m_info.m_eState == k_ESteamNetworkingConnectionState_ProblemDetectedLocally,
			info->m_info.m_szEndDebug);
		sockets->CloseConnection(info->m_hConn, 0, nullptr, false);
		break;
	default:
		break;
	}
}
