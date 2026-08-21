#include "..\\stdafx.h"

#include <Scripting/ScriptWire.h>

void ScriptRPC::HandleScriptRPC(CNetwork* network, Packet* packet)
{
	BitStream stream(packet->data,packet->length,false);
	stream.IgnoreBytes(1);

	MessageID eScriptRPC;
	stream.Read(eScriptRPC);
	switch(eScriptRPC)
	{
	case SCRIPT_PACKET: ScriptPacket(network,stream); break;
	case SCRIPT_UNCONSCIOUS: ScriptUnconscious(network,stream); break;
	case SCRIPT_VISUAL: ScriptVisual(network, stream); break;
	case SCRIPT_EVENT: ScriptEvent(network, stream); break;
	}
};

void ScriptRPC::ScriptPacket(CNetwork* network, BitStream& stream)
{
	RakString data;
	stream.Read(data);
	CEvent::Packet(data.C_String());
};

void ScriptRPC::ScriptUnconscious(CNetwork* network, BitStream& stream)
{
	bool unconscious;
	stream.Read(unconscious);

	scr.GetScriptVars()->isUnconsciousEnabled = unconscious;
}

void ScriptRPC::ScriptVisual(CNetwork* network, BitStream& stream)
{
	int playerID;
	RakString bodyModel, headModel;
	int bodyTexture, headTexture;

	stream.Read(playerID);

	CPlayer *player = playerManager.GetPlayer(playerID);
	if (playerID != core.GetMultiplayer()->GetMyID() && player)
	{
		stream.Read(bodyModel);
		stream.Read(bodyTexture);
		stream.Read(headModel);
		stream.Read(headTexture);

		player->SetAdditionalVisuals(zSTRING(bodyModel.C_String()), bodyTexture, zSTRING(headModel.C_String()), headTexture);
	}
}

void ScriptRPC::ScriptEvent(CNetwork* network, BitStream& stream)
{
	RakString event_name;
	g1o::script::ScriptArguments arguments;
	std::string error;
	if (!stream.Read(event_name))
		return;
	if (!g1o::script::EventManager::IsValidName(event_name.C_String()))
	{
		LOG("[script] Rejected invalid remote event name");
		return;
	}
	if (!g1o::script::wire::ReadArguments(stream, arguments, error))
	{
		if (!error.empty()) LOG("[script] Rejected remote event packet: %s", error.c_str());
		return;
	}
	if (!scr.GetEngine().Events().CanTriggerRemotely(event_name.C_String()))
	{
		LOG("[script] Server tried to trigger protected event '%s'", event_name.C_String());
		return;
	}
	scr.GetEngine().Dispatch(event_name.C_String(), arguments);
}
