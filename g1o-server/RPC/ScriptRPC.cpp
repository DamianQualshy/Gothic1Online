#include "../stdafx.h"

#include <Scripting/ScriptWire.h>

void ScriptRPC::HandleScriptRPC(CNetwork* network, Packet* packet)
{
	//LOG("ScriptRPC::HandleScriptRPC()");
	BitStream stream(packet->data,packet->length,false);
	stream.IgnoreBytes(1);

	MessageID eScriptRPC;
	stream.Read(eScriptRPC);

	switch (eScriptRPC)
	{
	case SCRIPT_PACKET:
		ScriptPacket(network, stream, packet); break;
	case SCRIPT_VISUAL:
		ScriptVisual(network, stream, packet); break;
	case SCRIPT_FOCUS:
		ScriptFocus(network, stream, packet); break;
	case SCRIPT_EVENT:
		ScriptEvent(network, stream, packet); break;
	}
};

void ScriptRPC::ScriptPacket(CNetwork* network, BitStream& stream, Packet* packet)
{
	//LOG("ScriptRPC::ScriptPacket()");
	CPlayer* player = playerManager.GetPlayer(packet->systemAddress);
	if( player )
	{
		RakString data;
		stream.Read(data);
		SEvent::PlayerPacket(player->GetID(), data.C_String());
	}
};

void ScriptRPC::ScriptVisual(CNetwork* network, BitStream& stream, Packet* packet)
{
	CPlayer* player = playerManager.GetPlayer(packet->systemAddress);
	if (player)
	{
		stream.Read(player->bodyModel);
		stream.Read(player->bodyTexture);
		stream.Read(player->headModel);
		stream.Read(player->headTexture);

		BitStream s;
		s.Write((MessageID)GO_SCRIPT);
		s.Write((MessageID)SCRIPT_VISUAL);
		s.Write(player->GetID());
		s.Write(player->bodyModel);
		s.Write(player->bodyTexture);
		s.Write(player->headModel);
		s.Write(player->headTexture);

		network->SendToPlayersOnList(s, LOW_PRIORITY, RELIABLE_ORDERED, &player->streamedPlayers);
	}
};

void ScriptRPC::ScriptFocus(CNetwork* network, BitStream& stream, Packet* packet)
{
	bool focusType;
	int playerID, focusID;

	stream.Read(focusType);
	stream.Read(playerID);
	stream.Read(focusID);

	focusType ? SEvent::PlayerTakeFocus(playerID, focusID) : SEvent::PlayerLostFocus(playerID, focusID);
}

void ScriptRPC::ScriptEvent(CNetwork* network, BitStream& stream, Packet* packet)
{
	CPlayer* player = playerManager.GetPlayer(packet->systemAddress);
	RakString event_name;
	g1o::script::ScriptArguments arguments;
	std::string error;
	if (!player || !stream.Read(event_name))
		return;
	if (!g1o::script::EventManager::IsValidName(event_name.C_String()))
	{
		LOG("[script] Rejected invalid remote event name from player %d", player->GetID());
		return;
	}
	if (!g1o::script::wire::ReadArguments(stream, arguments, error))
	{
		if (!error.empty()) LOG("[script] Rejected remote event packet: %s", error.c_str());
		return;
	}
	if (!scr.GetEngine().Events().CanTriggerRemotely(event_name.C_String()))
	{
		LOG("[script] Player %d tried to trigger protected event '%s'", player->GetID(), event_name.C_String());
		return;
	}
	arguments.insert(arguments.begin(), g1o::script::ScriptValue(player->GetID()));
	scr.GetEngine().Dispatch(event_name.C_String(), arguments);
}
