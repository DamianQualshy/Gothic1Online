#include "../stdafx.h"

void SFunction::Register(g1o::script::NativeRegistry& registry)
{
	registry.Add("getPlayerName", SFunction::getPlayerName);
	registry.Add("getPlayerPing", SFunction::getPlayerPing);
	registry.Add("setPlayerVirtualWorld", SFunction::setPlayerVirtualWorld);
	registry.Add("getPlayerVirtualWorld", SFunction::getPlayerVirtualWorld);
	registry.Add("isPlayerConnected", SFunction::isPlayerConnected);
	registry.Add("sendMessageToAll", SFunction::sendMessageToAll);
	registry.Add("sendMessageToPlayer", SFunction::sendMessageToPlayer);
	registry.Add("getPlayerPosition", SFunction::getPlayerPosition);
	registry.Add("isPlayerAdmin", SFunction::isPlayerAdmin);
	registry.Add("getMaxSlots", SFunction::getMaxSlots);
	registry.Add("getPlayersCount", SFunction::getPlayersCount);
	registry.Add("getServerDescription", SFunction::getServerDescription);
	registry.Add("setServerDescription", SFunction::setServerDescription);
	registry.Add("getServerWorld", SFunction::getServerWorld);
	registry.Add("setServerWorld", SFunction::setServerWorld);
	registry.Add("ban", SFunction::ban);
	registry.Add("kick", SFunction::kick);
	registry.Add("setUnconsciousEnabled", SFunction::setUnconsciousEnabled);
	registry.Add("createGroundItem", SFunction::createGroundItem);
	registry.Add("destroyGroundItem", SFunction::destroyGroundItem);
	registry.Add("setPlayerInvisible", SFunction::setPlayerInvisible);
	registry.Add("isPlayerInvisible", SFunction::isPlayerInvisible);
};
/* g1odoc (func)
 *
 * This function returns player name.
 *
 * @name getPlayerName
 * @side server
 * @category Player
 * @version 0.4.0
 * @param (int) playerID Player ID.
 * @return (string) Player name, or `NULL` when the player does not exist.
 *
 */
int SFunction::getPlayerName(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, playerID, 0);

	CPlayer* player = playerManager.GetPlayer(playerID);
	if (player)
		context.Push(player->name.c_str());
	else
		context.Push("NULL");

	return 1;
};

/* g1odoc (func)
 *
 * This function returns player ping.
 *
 * @name getPlayerPing
 * @side server
 * @category Player
 * @version 0.4.0
 * @param (int) playerID Player ID.
 * @return (int) Player ping.
 *
 */
int SFunction::getPlayerPing(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, playerID, 0);

	CPlayer* player = playerManager.GetPlayer(playerID);
	if (player)
		context.Push(core.GetNetwork()->GetPing(player->GetConnection()));
	else
		context.Push(-1);

	return 1;
};

/* g1odoc (func)
 *
 * This function sets player virtual world.
 *
 * @name setPlayerVirtualWorld
 * @side server
 * @category Player
 * @version 0.4.0
 * @param (int) playerID Player ID.
 * @param (int) virtualWorld Virtual world.
 *
 */
int SFunction::setPlayerVirtualWorld(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_INT(context, playerID, 0);
	SCRIPT_CHECK_PARAM_INT(context, virtualWorld, 1);

	CPlayer* player = playerManager.GetPlayer(playerID);
	if (player)
	{
		player->SetVirtualWorld(virtualWorld);

		PacketWriter s;
		s.Write((std::uint8_t)GO_PLAYER);
		s.Write((std::uint8_t)DESTROY_PLAYER);
		s.Write(player->GetID());
		core.GetNetwork()->SendToPlayersOnList(s, &player->streamedPlayers, k_nSteamNetworkingSend_Reliable);

		for (int i = 0; i < player->streamedPlayers.Num(); ++i)
		{
			CPlayer *streamed = player->streamedPlayers[i];

			PacketWriter s;
			s.Write((std::uint8_t)GO_PLAYER);
			s.Write((std::uint8_t)DESTROY_PLAYER);
			s.Write(streamed->GetID());

			streamed->streamedPlayers.Remove(player);
			core.GetNetwork()->Send(player->GetConnection(), s, k_nSteamNetworkingSend_Reliable);
		}
		
		player->streamedPlayers.Clear();

		// Stream players again, without waiting
		core.GetStreamer()->StreamPlayers(false);
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function returns player virtual world.
 *
 * @name getPlayerVirtualWorld
 * @side server
 * @category Player
 * @version 0.4.0
 * @param (int) playerID Player ID.
 * @return (int) Virtual-world ID, or -1 if the player does not exist.
 *
 */
int SFunction::getPlayerVirtualWorld(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, playerID, 0);

	CPlayer* player = playerManager.GetPlayer(playerID);
	if (player)
		context.Push(player->GetVirtualWorld());
	else
		context.Push(-1);

	return 1;
};

/* g1odoc (func)
 *
 * This function checks whether connected.
 *
 * @name isPlayerConnected
 * @side server
 * @category Game
 * @version 0.4.0
 * @param (int) playerID Player ID.
 * @return (bool) True when the condition is met, otherwise false.
 *
 */
int SFunction::isPlayerConnected(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, playerID, 0);

	CPlayer* player = playerManager.GetPlayer(playerID);
	if (player)
		context.Push(static_cast<bool>(true));
	else
		context.Push(static_cast<bool>(false));

	return 1;
};

/* g1odoc (func)
 *
 * This function sends message to all.
 *
 * @name sendMessageToAll
 * @side server
 * @category Chat
 * @version 0.4.0
 * @param (int) r Red color component.
 * @param (int) g Green color component.
 * @param (int) b Blue color component.
 * @param (string) message Message text.
 *
 */
int SFunction::sendMessageToAll(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 4);
	SCRIPT_CHECK_PARAM_INT(context, r, 0);
	SCRIPT_CHECK_PARAM_INT(context, g, 1);
	SCRIPT_CHECK_PARAM_INT(context, b, 2);
	SCRIPT_CHECK_PARAM_STRING(context, message, 3);

	PacketWriter s;
	s.Write((std::uint8_t)GO_CHAT);
	s.Write((std::uint8_t)MESSAGE_RGB);
	s.Write(std::string(message));
	s.Write(r);
	s.Write(g);
	s.Write(b);

	core.GetNetwork()->SendToAll(s, k_nSteamNetworkingSend_Reliable);

	return 0;
};

/* g1odoc (func)
 *
 * This function sends message.
 *
 * @name sendMessageToPlayer
 * @side server
 * @category Chat
 * @version 0.4.0
 * @param (int) playerID Player ID.
 * @param (int) r Red color component.
 * @param (int) g Green color component.
 * @param (int) b Blue color component.
 * @param (string) message Message text.
 *
 */
int SFunction::sendMessageToPlayer(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 5);
	SCRIPT_CHECK_PARAM_INT(context, playerID, 0);
	SCRIPT_CHECK_PARAM_INT(context, r, 1);
	SCRIPT_CHECK_PARAM_INT(context, g, 2);
	SCRIPT_CHECK_PARAM_INT(context, b, 3);
	SCRIPT_CHECK_PARAM_STRING(context, message, 4);

	CPlayer* player = playerManager.GetPlayer(playerID);
	if (player)
	{
		PacketWriter s;
		s.Write((std::uint8_t)GO_CHAT);
		s.Write((std::uint8_t)MESSAGE_RGB);
		s.Write(std::string(message));
		s.Write(r);
		s.Write(g);
		s.Write(b);
		core.GetNetwork()->Send(player->GetConnection(), s, k_nSteamNetworkingSend_Reliable);
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function returns position.
 *
 * @name getPlayerPosition
 * @side server
 * @category Player
 * @version 0.4.0
 * @param (int) playerID Player ID.
 * @return (table|bool) Position.
 *
 */
int SFunction::getPlayerPosition(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, playerID, 0);
	CPlayer* player = playerManager.GetPlayer(playerID);
	if (player)
	{
		context.NewTable();
		SCRIPT_TABLE_SET_FLOAT(context, "x", player->x);
		SCRIPT_TABLE_SET_FLOAT(context, "y", player->y);
		SCRIPT_TABLE_SET_FLOAT(context, "z", player->z);
	}
	else
		context.Push(static_cast<bool>(false));

	return 1;
};
/* g1odoc (func)
 *
 * This function checks whether admin.
 *
 * @name isPlayerAdmin
 * @side server
 * @category Game
 * @version 0.4.0
 * @param (int) playerID Player ID.
 * @return (bool) True when the condition is met, otherwise false.
 *
 */
int SFunction::isPlayerAdmin(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, playerID, 0);

	CPlayer* player = playerManager.GetPlayer(playerID);
	if (player)
		context.Push(static_cast<bool>(player->isAdmin));
	else
		context.Push(static_cast<bool>(false));

	return 1;
};

/* g1odoc (func)
 *
 * This function returns max slots.
 *
 * @name getMaxSlots
 * @side server
 * @category Game
 * @version 0.4.0
 * @return (int) Configured player-slot limit.
 *
 */
int SFunction::getMaxSlots(g1o::script::CallContext& context)
{
	context.Push(atoi(core.GetConfig()->GetMaxSlots().c_str()));
	return 1;
};

/* g1odoc (func)
 *
 * This function returns players count.
 *
 * @name getPlayersCount
 * @side server
 * @category Game
 * @version 0.4.0
 * @return (int) Players count.
 *
 */
int SFunction::getPlayersCount(g1o::script::CallContext& context)
{
	context.Push(playerManager.GetNumberOfPlayers());
	return 1;
};
/* g1odoc (func)
 *
 * This function returns server description.
 *
 * @name getServerDescription
 * @side server
 * @category Game
 * @version 0.4.0
 * @return (string) Server description.
 *
 */
int SFunction::getServerDescription(g1o::script::CallContext& context)
{
	context.Push(core.GetDescription().c_str());
	return 1;
};

/* g1odoc (func)
 *
 * This function sets server description.
 *
 * @name setServerDescription
 * @side server
 * @category Game
 * @version 0.4.0
 * @param (string) desc Desc.
 *
 */
int SFunction::setServerDescription(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, desc, 0);

	core.SetDescription(desc);

	return 0;
};

/* g1odoc (func)
 *
 * This function returns server world.
 *
 * @name getServerWorld
 * @side server
 * @category Game
 * @version 0.4.0
 * @return (string) Server world.
 *
 */
int SFunction::getServerWorld(g1o::script::CallContext& context)
{
	context.Push(core.GetWorld().c_str());
	return 1;
};

/* g1odoc (func)
 *
 * This function sets server world.
 *
 * @name setServerWorld
 * @side server
 * @category Game
 * @version 0.4.0
 * @param (string) world World name.
 *
 */
int SFunction::setServerWorld(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, world, 0);

	//std::string newWorld = utility::replaceString(world, "/", "\\").c_str();
	core.SetWorld(world);

	return 0;
};

/* g1odoc (func)
 *
 * This function bans a player from the server.
 *
 * @name ban
 * @side server
 * @category Player
 * @version 0.4.0
 * @param (int) playerID Player ID.
 *
 */
int SFunction::ban(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, playerID, 0);

	CPlayer* player = playerManager.GetPlayer(playerID);
	if (player)
	{
		core.GetBanSystem()->BanPlayer(player, BAN_LIST);
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function disconnects a player from the server.
 *
 * @name kick
 * @side server
 * @category Player
 * @version 0.4.0
 * @param (int) playerID Player ID.
 *
 */
int SFunction::kick(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, playerID, 0);

	CPlayer* player = playerManager.GetPlayer(playerID);
	if (player)
		player->Disconnect();

	return 0;
};

/* g1odoc (func)
 *
 * This function enables or disables unconscious.
 *
 * @name setUnconsciousEnabled
 * @side server
 * @category Game
 * @version 0.4.0
 * @param (bool) enable True to enable the feature, false to disable it.
 *
 */
int SFunction::setUnconsciousEnabled(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_BOOL(context, enable, 0);

	core.SetUnconscious(enable);

	return 0;
};

/* g1odoc (func)
 *
 * This function creates item.
 *
 * @name createGroundItem
 * @side server
 * @category Inventory
 * @version 0.4.0
 * @param (string) itemInstance Item instance.
 * @param (int) amount Item amount.
 * @param (float) x X coordinate.
 * @param (float) y Y coordinate.
 * @param (float) z Z coordinate.
 * @param (string) world World name.
 * @return (int) Identifier of the created object.
 *
 */
int SFunction::createGroundItem(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 6);
	SCRIPT_CHECK_PARAM_STRING(context, itemInstance, 0);
	SCRIPT_CHECK_PARAM_INT(context, amount, 1);
	SCRIPT_CHECK_PARAM_FLOAT(context, x, 2);
	SCRIPT_CHECK_PARAM_FLOAT(context, y, 3);
	SCRIPT_CHECK_PARAM_FLOAT(context, z, 4);
	SCRIPT_CHECK_PARAM_STRING(context, world, 5);

	CItem* item = itemManager.CreateItem(itemInstance, amount, x, y, z, world);
	if (item)
		context.Push(item->GetID());
	else
		context.Push(-1);

	return 1;
};

/* g1odoc (func)
 *
 * This function destroys item.
 *
 * @name destroyGroundItem
 * @side server
 * @category Inventory
 * @version 0.4.0
 * @param (int) itemID Item ID.
 *
 */
int SFunction::destroyGroundItem(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, itemID, 0);

	itemManager.DestroyItem(itemID);

	return 0;
};

/* g1odoc (func)
 *
 * This function sets player invisible.
 *
 * @name setPlayerInvisible
 * @side server
 * @category Player
 * @version 0.4.0
 * @param (int) playerID Player ID.
 * @param (bool) invisible Invisible.
 *
 */
int SFunction::setPlayerInvisible(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_INT(context, playerID, 0);
	SCRIPT_CHECK_PARAM_BOOL(context, invisible, 1);

	CPlayer* player = playerManager.GetPlayer(playerID);
	if (player)
	{
		player->isInvisible = invisible;
		// Stream players again, without waiting

		if (player->isInvisible)
		{
			PacketWriter s;
			s.Write((std::uint8_t)GO_PLAYER);
			s.Write((std::uint8_t)DESTROY_PLAYER);
			s.Write(player->GetID());
			core.GetNetwork()->SendToPlayersOnList(s, &player->streamedPlayers, k_nSteamNetworkingSend_Reliable);

			for (int i = 0; i < player->streamedPlayers.Num(); ++i)
				player->streamedPlayers[i]->streamedPlayers.Remove(player);
		}
	}

	return 0;
}

/* g1odoc (func)
 *
 * This function checks whether player invisible.
 *
 * @name isPlayerInvisible
 * @side server
 * @category Player
 * @version 0.4.0
 * @param (int) playerID Player ID.
 * @return (bool) True when the condition is met, otherwise false.
 *
 */
int SFunction::isPlayerInvisible(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, playerID, 0);

	CPlayer* player = playerManager.GetPlayer(playerID);
	if (player)
		context.Push(static_cast<bool>(player->isInvisible));
	else
		context.Push(static_cast<bool>(false));

	return 1;
}
