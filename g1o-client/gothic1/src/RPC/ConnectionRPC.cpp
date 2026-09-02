#include "..\\stdafx.h"

namespace
{
	std::string FormatClientText(EClientText text, const std::string& value = {})
	{
		std::string result = ClientLanguage::Get(text, core.GetConfig()->GetLanguage());
		const auto placeholder = result.find("%s");
		if (placeholder != std::string::npos)
			result.replace(placeholder, 2, value);
		return result;
	}
}

void ConnectionRPC::HandleConnectionRPC(CNetwork* network, PacketReader& packet)
{
	EConnectionRPC rpc{};
	if (!packet.Read(rpc))
		return;
	switch (rpc)
	{
	case ACCEPT_CONNECTION:
		AcceptConnection(network, packet);
		break;
	case INCORRECT_VERSION:
		if (packet.Empty()) IncorrectVersion(network);
		break;
	case SERVER_FULL:
		if (packet.Empty()) ServerFull(network);
		break;
	case NICKNAME_USED:
		if (packet.Empty()) NicknameUsed(network);
		break;
	case CLOSED_CONNECTION_REASON:
		DisconnectedWithReason(network, packet);
		break;
	default:
		break;
	}
}

void ConnectionRPC::CatchConnection(CNetwork* network)
{
	CConfig* config = core.GetConfig();
	const zVEC3 position = oCNpc::GetHero()->GetPosition();
	PacketWriter request;
	request.Write(GO_CONNECTION);
	request.Write(PLEASE_CONNECT);
	request.Write(versionNumber);
	request.Write(config->GetPlayerName());
	request.Write(core.GetLaunchSession().startWorld);
	request.Write(position[0]);
	request.Write(position[1]);
	request.Write(position[2]);
	network->Send(request);
}

void ConnectionRPC::ConnectionClosed(CNetwork*, bool transportFailure, int reason, const char* debug)
{
	SPDLOG_WARN("GNS connection closed (reason {}): {}", reason, debug ? debug : "no detail");
	core.GetChat()->AddLine(FormatClientText(transportFailure ? EClientText::ConnectionLost : EClientText::ServerClosedConnection),
		zCOLOR(255, 0, 0, 255));
}

void ConnectionRPC::AcceptConnection(CNetwork* network, PacketReader& packet)
{
	CMultiplayer* multiplayer = core.GetMultiplayer();
	int hour = 0;
	int minute = 0;
	int day = 0;
	bool unconscious = false;
	if (!packet.Read(multiplayer->hostName, 256) || !packet.Read(multiplayer->myID) ||
		!packet.Read(hour) || !packet.Read(minute) || !packet.Read(day) ||
		!packet.Read(unconscious) || !packet.Empty())
	{
		network->Disconnect();
		return;
	}
	oCGame::GetGame()->SetTime(day, hour, minute);
	scr.GetScriptVars()->isUnconsciousEnabled = unconscious;
	core.GetChat()->AddLine(FormatClientText(EClientText::ConnectedJoining, multiplayer->hostName), zCOLOR(0, 255, 0, 255));
	network->bConnected = true;
}

void ConnectionRPC::IncorrectVersion(CNetwork* network)
{
	core.GetChat()->AddLine(FormatClientText(EClientText::IncorrectVersion), zCOLOR(255, 0, 0, 255));
	network->Disconnect();
}

void ConnectionRPC::ServerFull(CNetwork* network)
{
	core.GetChat()->AddLine(FormatClientText(EClientText::ServerFull), zCOLOR(255, 0, 0, 255));
	network->Disconnect();
}

void ConnectionRPC::NicknameUsed(CNetwork* network)
{
	core.GetChat()->AddLine(FormatClientText(EClientText::NicknameUsed), zCOLOR(255, 0, 0, 255));
	network->Disconnect();
}

void ConnectionRPC::DisconnectedWithReason(CNetwork* network, PacketReader& packet)
{
	std::string reason;
	if (packet.Read(reason, 1024) && packet.Empty())
		core.GetChat()->AddLine(FormatClientText(EClientText::Disconnected, reason), zCOLOR(255, 0, 0, 255));
	network->Disconnect();
}

void ConnectionRPC::ConnectionFailed(CNetwork* network)
{
	core.GetChat()->AddLine(FormatClientText(EClientText::ConnectionFailed), zCOLOR(255, 0, 0, 255));
	network->Disconnect();
}
