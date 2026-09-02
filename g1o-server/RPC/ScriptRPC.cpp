#include "../stdafx.h"

#include <cmath>

void ScriptRPC::HandleScriptRPC(CNetwork* network, HSteamNetConnection connection, PacketReader& stream)
{
	//SPDLOG_TRACE("ScriptRPC::HandleScriptRPC()");

	EScriptRPC eScriptRPC{};
	if (!playerManager.GetPlayer(connection) || !stream.Read(eScriptRPC))
		return;

	switch (eScriptRPC)
	{
	case SCRIPT_VISUAL:
		ScriptVisual(network, stream, connection); break;
	case SCRIPT_FOCUS:
		ScriptFocus(network, stream, connection); break;
	case SCRIPT_CLIENT_EVENT:
		ClientEvent(network, stream, connection); break;
	}
};

void ScriptRPC::ScriptVisual(CNetwork* network, PacketReader& stream, HSteamNetConnection connection)
{
	CPlayer* player = playerManager.GetPlayer(connection);
	std::string bodyModel, headModel;
	int bodyTexture = 0, headTexture = 0;
	if (player && stream.Read(bodyModel, 256) && stream.Read(bodyTexture) &&
		stream.Read(headModel, 256) && stream.Read(headTexture) && stream.Empty())
	{
		player->bodyModel = std::move(bodyModel);
		player->bodyTexture = bodyTexture;
		player->headModel = std::move(headModel);
		player->headTexture = headTexture;

		PacketWriter s;
		s.Write((std::uint8_t)GO_SCRIPT);
		s.Write((std::uint8_t)SCRIPT_VISUAL);
		s.Write(player->GetID());
		s.Write(player->bodyModel);
		s.Write(player->bodyTexture);
		s.Write(player->headModel);
		s.Write(player->headTexture);

		network->SendToPlayersOnList(s, &player->streamedPlayers, k_nSteamNetworkingSend_Reliable);
	}
};

void ScriptRPC::ScriptFocus(CNetwork*, PacketReader& stream, HSteamNetConnection connection)
{
	CPlayer* player = playerManager.GetPlayer(connection);
	bool focusType;
	int focusID;

	if (!player || !stream.Read(focusType) || !stream.Read(focusID) || !stream.Empty())
		return;

	if (focusType)
		SEvent::PlayerTakeFocus(player->GetID(), focusID);
	else
		SEvent::PlayerLostFocus(player->GetID(), focusID);
}

void ScriptRPC::ClientEvent(CNetwork*, PacketReader& stream, HSteamNetConnection connection)
{
	CPlayer* player = playerManager.GetPlayer(connection);
	EClientScriptEvent event{};
	if (!player || !stream.Read(event)) return;

	const int playerID = player->GetID();
	switch (event)
	{
	case CLIENT_EVENT_KEY_DOWN: {
		int key = 0;
		std::string letter;
		if (stream.Read(key) && key >= 0 && key < 512 && stream.Read(letter, 8) && stream.Empty())
			SEvent::KeyDown(playerID, key, letter.c_str());
		break;
	}
	case CLIENT_EVENT_MOUSE_DOWN:
	case CLIENT_EVENT_MOUSE_UP: {
		int button = 0;
		if (stream.Read(button) && button >= 0 && button <= 1 && stream.Empty())
		{
			if (event == CLIENT_EVENT_MOUSE_DOWN)
				SEvent::MouseDown(playerID, button);
			else
				SEvent::MouseUp(playerID, button);
		}
		break;
	}
	case CLIENT_EVENT_MOUSE_WHEEL: {
		int delta = 0;
		if (stream.Read(delta) && stream.Empty()) SEvent::MouseWheel(playerID, delta);
		break;
	}
	case CLIENT_EVENT_OPEN_INVENTORY:
		if (stream.Empty()) SEvent::OpenInventory(playerID);
		break;
	case CLIENT_EVENT_CLOSE_INVENTORY:
		if (stream.Empty()) SEvent::CloseInventory(playerID);
		break;
	case CLIENT_EVENT_MOB_TRIGGER:
	case CLIENT_EVENT_MOB_UNTRIGGER: {
		std::string name;
		float x = 0.0f, y = 0.0f, z = 0.0f;
		int type = -1;
		if (stream.Read(name, 256) && stream.Read(x) && stream.Read(y) && stream.Read(z) &&
			std::isfinite(x) && std::isfinite(y) && std::isfinite(z) &&
			stream.Read(type) && type >= -1 && type <= 6 && stream.Empty())
		{
			if (event == CLIENT_EVENT_MOB_TRIGGER)
				SEvent::MobTrigger(playerID, name.c_str(), x, y, z, type);
			else
				SEvent::MobUntrigger(playerID, name.c_str(), x, y, z, type);
		}
		break;
	}
	case CLIENT_EVENT_USE_ITEM: {
		std::string instance;
		int amount = 0, hand = 0;
		if (stream.Read(instance, 256) && stream.Read(amount) && amount >= 0 &&
			stream.Read(hand) && hand >= 0 && hand <= 1 && stream.Empty())
			SEvent::UseItem(playerID, instance.c_str(), amount, hand);
		break;
	}
	default:
		SPDLOG_INFO("[script] Rejected unknown client event {} from player {}", static_cast<unsigned>(event), playerID);
		break;
	}
}
