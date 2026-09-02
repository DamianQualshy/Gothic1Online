#include "../stdafx.h"

#include <cmath>

namespace
{
	void SendRejection(CNetwork* network, HSteamNetConnection connection, EConnectionRPC reason)
	{
		PacketWriter packet;
		packet.Write(GO_CONNECTION);
		packet.Write(reason);
		network->Send(connection, packet);
		network->Disconnect(connection, 2000 + static_cast<int>(reason), "Connection rejected", true);
	}
}

void ConnectionRPC::HandleConnectionRPC(CNetwork* network, HSteamNetConnection connection, PacketReader& packet)
{
	EConnectionRPC rpc{};
	if (packet.Read(rpc) && rpc == PLEASE_CONNECT)
		PleaseConnect(network, connection, packet);
}

void ConnectionRPC::CatchConnection(CNetwork*, HSteamNetConnection connection, const std::string& remoteAddress)
{
	SPDLOG_INFO("[connection] Incoming GNS transport {} from {}", connection, remoteAddress);
}

void ConnectionRPC::Disconnected(CNetwork*, HSteamNetConnection connection, bool transportFailure, const char* debug)
{
	CPlayer* player = playerManager.GetPlayer(connection);
	if (!player)
		return;

	SEvent::PlayerDisconnect(player->GetID(), transportFailure ? "LOST_CONNECTION" : "DISCONNECTED");
	player->spawned = false;
	player->bConnected = false;
	SPDLOG_INFO("[connection] {} disconnected: {}", player->name, debug ? debug : "no detail");
	playerManager.DestroyPlayer(player);
}

void ConnectionRPC::PleaseConnect(CNetwork* network, HSteamNetConnection connection, PacketReader& packet)
{
	std::uint32_t version = 0;
	std::string playerName;
	std::string world;
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;
	if (!packet.Read(version) || !packet.Read(playerName, 30) || !packet.Read(world, 256) ||
		!packet.Read(x) || !packet.Read(y) || !packet.Read(z) || !packet.Empty() ||
		!std::isfinite(x) || !std::isfinite(y) || !std::isfinite(z) ||
		playerName.find('\0') != std::string::npos || world.find('\0') != std::string::npos)
	{
		ClosedConnectionWithReason(network, connection, "Malformed connection request");
		return;
	}

	if (version != versionNumber)
	{
		IncorrectVersion(network, connection);
		return;
	}
	if (playerManager.GetNumberOfPlayers() >= static_cast<unsigned int>(std::stoi(core.GetConfig()->GetMaxSlots())))
	{
		ServerFull(network, connection);
		return;
	}
	if (playerName == "(SERVER)" || playerManager.IsNicknameUsed(playerName))
	{
		NicknameUsed(network, connection);
		return;
	}

	CPlayer* player = playerManager.CreatePlayer(connection, playerName);
	if (!player)
	{
		ClosedConnectionWithReason(network, connection, "Invalid player name");
		return;
	}
	player->world = std::move(world);
	player->x = x;
	player->y = y;
	player->z = z;

	PacketWriter response;
	response.Write(GO_CONNECTION);
	response.Write(ACCEPT_CONNECTION);
	response.Write(core.GetConfig()->GetServerName());
	response.Write(player->GetID());
	response.Write(core.GetHour());
	response.Write(core.GetMinute());
	response.Write(core.GetDay());
	response.Write(core.GetUnconscious());
	network->Send(connection, response);

	playerManager.CreatePlayerForOtherPlayer(player, player);
	playerManager.BroadcastPlayerList();
	player->spawned = true;
	SEvent::PlayerConnect(player->GetID());
	SPDLOG_INFO("[join] {} joined from {}", playerName, player->GetIP());
}

void ConnectionRPC::IncorrectVersion(CNetwork* network, HSteamNetConnection connection)
{
	SendRejection(network, connection, INCORRECT_VERSION);
}

void ConnectionRPC::ServerFull(CNetwork* network, HSteamNetConnection connection)
{
	SendRejection(network, connection, SERVER_FULL);
}

void ConnectionRPC::NicknameUsed(CNetwork* network, HSteamNetConnection connection)
{
	SendRejection(network, connection, NICKNAME_USED);
}

void ConnectionRPC::ClosedConnectionWithReason(CNetwork* network, HSteamNetConnection connection, const std::string& reason)
{
	PacketWriter packet;
	packet.Write(GO_CONNECTION);
	packet.Write(CLOSED_CONNECTION_REASON);
	packet.Write(reason);
	network->Send(connection, packet);
	network->Disconnect(connection, 2004, reason.c_str(), true);
}
