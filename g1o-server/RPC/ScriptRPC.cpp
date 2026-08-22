#include "../stdafx.h"

#include <cmath>

void ScriptRPC::HandleScriptRPC(CNetwork* network, Packet* packet)
{
	//LOG("ScriptRPC::HandleScriptRPC()");
	BitStream stream(packet->data,packet->length,false);
	stream.IgnoreBytes(1);

	MessageID eScriptRPC;
	stream.Read(eScriptRPC);

	switch (eScriptRPC)
	{
	case SCRIPT_VISUAL:
		ScriptVisual(network, stream, packet); break;
	case SCRIPT_FOCUS:
		ScriptFocus(network, stream, packet); break;
	case SCRIPT_CLIENT_EVENT:
		ClientEvent(network, stream, packet); break;
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
	CPlayer* player = playerManager.GetPlayer(packet->systemAddress);
	bool focusType;
	int focusID;

	if (!player || !stream.Read(focusType) || !stream.Read(focusID))
		return;

	if (focusType)
		SEvent::PlayerTakeFocus(player->GetID(), focusID);
	else
		SEvent::PlayerLostFocus(player->GetID(), focusID);
}

void ScriptRPC::ClientEvent(CNetwork* network, BitStream& stream, Packet* packet)
{
	CPlayer* player = playerManager.GetPlayer(packet->systemAddress);
	MessageID rawEvent;
	if (!player || !stream.Read(rawEvent)) return;

	const int playerID = player->GetID();
	switch (static_cast<EClientScriptEvent>(rawEvent))
	{
	case CLIENT_EVENT_KEY_DOWN: {
		int key;
		RakString letter;
		if (stream.Read(key) && key >= 0 && key < 512 && stream.Read(letter) && letter.GetLength() <= 8)
			SEvent::KeyDown(playerID, key, letter.C_String());
		break;
	}
	case CLIENT_EVENT_MOUSE_DOWN:
	case CLIENT_EVENT_MOUSE_UP: {
		int button;
		if (stream.Read(button) && button >= 0 && button <= 1)
		{
			if (rawEvent == CLIENT_EVENT_MOUSE_DOWN)
				SEvent::MouseDown(playerID, button);
			else
				SEvent::MouseUp(playerID, button);
		}
		break;
	}
	case CLIENT_EVENT_MOUSE_WHEEL: {
		int delta;
		if (stream.Read(delta)) SEvent::MouseWheel(playerID, delta);
		break;
	}
	case CLIENT_EVENT_OPEN_INVENTORY:
		SEvent::OpenInventory(playerID);
		break;
	case CLIENT_EVENT_CLOSE_INVENTORY:
		SEvent::CloseInventory(playerID);
		break;
	case CLIENT_EVENT_MOB_TRIGGER:
	case CLIENT_EVENT_MOB_UNTRIGGER: {
		RakString name;
		float x, y, z;
		int type;
		if (stream.Read(name) && name.GetLength() <= 256 && stream.Read(x) && stream.Read(y) && stream.Read(z) &&
			std::isfinite(x) && std::isfinite(y) && std::isfinite(z) &&
			stream.Read(type) && type >= -1 && type <= 6)
		{
			if (rawEvent == CLIENT_EVENT_MOB_TRIGGER)
				SEvent::MobTrigger(playerID, name.C_String(), x, y, z, type);
			else
				SEvent::MobUntrigger(playerID, name.C_String(), x, y, z, type);
		}
		break;
	}
	case CLIENT_EVENT_USE_ITEM: {
		RakString instance;
		int amount, hand;
		if (stream.Read(instance) && instance.GetLength() <= 256 && stream.Read(amount) && amount >= 0 &&
			stream.Read(hand) && hand >= 0 && hand <= 1)
			SEvent::UseItem(playerID, instance.C_String(), amount, hand);
		break;
	}
	default:
		LOG("[script] Rejected unknown client event %u from player %d", static_cast<unsigned>(rawEvent), playerID);
		break;
	}
}
