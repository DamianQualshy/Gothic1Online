#include "../stdafx.h"

namespace {

int EventResult(const g1o::script::EventManager::DispatchResult& result)
{
	return result.value.value_or(result.cancelled ? 1 : 0);
}

int Emit(const char* name, g1o::script::ScriptArguments arguments = {})
{
	return EventResult(scr.GetEngine().Dispatch(name, arguments));
}

} // namespace

/* g1odoc (event)
 *
 * This event is triggered once after all configured server scripts have loaded.
 *
 * @name onInit
 * @side server
 * @category Game
 * @version 0.5.0
 *
 */
int SEvent::Init() { return Emit("onInit"); }
/* g1odoc (event)
 *
 * This event is triggered in every server main loop iteration.
 *
 * @name onTick
 * @side server
 * @category Game
 * @version 0.5.0
 *
 */
int SEvent::Tick() { return Emit("onTick"); }
/* g1odoc (event)
 *
 * This event is triggered when a player joins the server.
 *
 * @name onPlayerConnect
 * @side server
 * @category Player
 * @version 0.5.0
 * @param (int) playerID Player ID.
 *
 */
int SEvent::PlayerConnect(int playerID) { return Emit("onPlayerConnect", {playerID}); }
/* g1odoc (event)
 *
 * This event is triggered when a hit occurs.
 *
 * @name onPlayerHit
 * @side server
 * @category Player
 * @version 0.5.0
 * @param (int) playerID Player ID.
 * @param (int) targetID Target player ID.
 *
 */
int SEvent::PlayerHit(int playerID, int targetID) { return Emit("onPlayerHit", {playerID, targetID}); }
/* g1odoc (event)
 *
 * This event is triggered when the player dies.
 *
 * @name onPlayerDeath
 * @side server
 * @category Player
 * @version 0.5.0
 * @param (int) playerID Player ID.
 * @param (int) killerID Killer player ID.
 *
 */
int SEvent::PlayerDeath(int playerID, int killerID) { return Emit("onPlayerDeath", {playerID, killerID}); }
/* g1odoc (event)
 *
 * This event is triggered when the player becomes unconscious.
 *
 * @name onPlayerUnconscious
 * @side server
 * @category Player
 * @version 0.5.0
 * @param (int) playerID Player ID.
 * @param (int) killerID Killer player ID.
 *
 */
int SEvent::PlayerUnconscious(int playerID, int killerID) { return Emit("onPlayerUnconscious", {playerID, killerID}); }
/* g1odoc (event)
 *
 * This event is triggered when the player respawns.
 *
 * @name onPlayerRespawn
 * @side server
 * @category Player
 * @version 0.5.0
 * @param (int) playerID Player ID.
 *
 */
int SEvent::PlayerRespawn(int playerID) { return Emit("onPlayerRespawn", {playerID}); }
/* g1odoc (event)
 *
 * This event is triggered when the player stands up.
 *
 * @name onPlayerStandUp
 * @side server
 * @category Player
 * @version 0.5.0
 * @param (int) playerID Player ID.
 *
 */
int SEvent::PlayerStandUp(int playerID) { return Emit("onPlayerStandUp", {playerID}); }
/* g1odoc (event)
 *
 * This event is triggered when a player disconnects from the server.
 *
 * @name onPlayerDisconnect
 * @side server
 * @category Player
 * @version 0.5.0
 * @param (int) playerID Player ID.
 * @param (string) reason Disconnect reason.
 *
 */
int SEvent::PlayerDisconnect(int playerID, const char* reason) { return Emit("onPlayerDisconnect", {playerID, reason}); }
/* g1odoc (event)
 *
 * This event is triggered when a script command is submitted.
 *
 * @name onPlayerCommand
 * @side server
 * @category Player
 * @version 0.5.0
 * @param (int) playerID Player ID.
 * @param (string) command Command name.
 * @param (string) params Command arguments.
 *
 */
int SEvent::PlayerCommand(int playerID, const char* command, const char* params) { return Emit("onPlayerCommand", {playerID, command, params}); }
/* g1odoc (event)
 *
 * This event is triggered when an administrator command is submitted.
 *
 * @name onAdminCommand
 * @side server
 * @category Game
 * @version 0.5.0
 * @param (int) playerID Player ID.
 * @param (string) command Command name.
 *
 */
int SEvent::AdminCommand(int playerID, const char* command) { return Emit("onAdminCommand", {playerID, command}); }
/* g1odoc (event)
 *
 * This event is triggered when a chat message is submitted.
 *
 * @name onPlayerMessage
 * @side server
 * @category Player
 * @version 0.5.0
 * @cancellable
 * @param (int) playerID Player ID.
 * @param (string) message Message text.
 *
 */
int SEvent::PlayerMessage(int playerID, const char* message) { return Emit("onPlayerMessage", {playerID, message}); }
/* g1odoc (event)
 *
 * This event is triggered when a player takes an item.
 *
 * @name onPlayerTakeItem
 * @side server
 * @category Player
 * @version 0.5.0
 * @param (int) playerID Player ID.
 * @param (int) itemID Item ID.
 * @param (string) instance Item instance name.
 * @param (int) amount Item amount.
 * @param (string) world World name.
 *
 */
int SEvent::PlayerTakeItem(int playerID, int itemID, const char* instance, int amount, const char* world)
{
	return Emit("onPlayerTakeItem", {playerID, itemID, instance, amount, world});
}
/* g1odoc (event)
 *
 * This event is triggered when a player drops an item.
 *
 * @name onPlayerDropItem
 * @side server
 * @category Player
 * @version 0.5.0
 * @param (int) playerID Player ID.
 * @param (int) itemID Item ID.
 * @param (string) instance Item instance name.
 * @param (int) amount Item amount.
 * @param (string) world World name.
 *
 */
int SEvent::PlayerDropItem(int playerID, int itemID, const char* instance, int amount, const char* world)
{
	return Emit("onPlayerDropItem", {playerID, itemID, instance, amount, world});
}
/* g1odoc (event)
 *
 * This event is triggered when an entity gains focus.
 *
 * @name onPlayerTakeFocus
 * @side server
 * @category Player
 * @version 0.5.0
 * @param (int) playerID Player ID.
 * @param (int) focusID Focused entity ID.
 *
 */
int SEvent::PlayerTakeFocus(int playerID, int focusID) { return Emit("onPlayerTakeFocus", {playerID, focusID}); }
/* g1odoc (event)
 *
 * This event is triggered when an entity loses focus.
 *
 * @name onPlayerLostFocus
 * @side server
 * @category Player
 * @version 0.5.0
 * @param (int) playerID Player ID.
 * @param (int) focusID Focused entity ID.
 *
 */
int SEvent::PlayerLostFocus(int playerID, int focusID) { return Emit("onPlayerLostFocus", {playerID, focusID}); }

/* g1odoc (event)
 *
 * This event is triggered on the server when a connected client presses a key.
 *
 * @name onKeyDown
 * @side server
 * @category Input
 * @version 0.5.0
 * @param (int) playerID Authenticated player ID.
 * @param (int) key Gothic DirectInput scan code.
 * @param (string) letter Translated key character.
 *
 */
int SEvent::KeyDown(int playerID, int key, const char* letter) { return Emit("onKeyDown", {playerID, key, letter}); }

/* g1odoc (event)
 *
 * This event is triggered on the server when a connected client presses a mouse button.
 *
 * @name onMouseDown
 * @side server
 * @category Mouse
 * @version 0.5.0
 * @param (int) playerID Authenticated player ID.
 * @param (int) button Mouse button: `0` for left or `1` for right.
 *
 */
int SEvent::MouseDown(int playerID, int button) { return Emit("onMouseDown", {playerID, button}); }

/* g1odoc (event)
 *
 * This event is triggered on the server when a connected client releases a mouse button.
 *
 * @name onMouseUp
 * @side server
 * @category Mouse
 * @version 0.5.0
 * @param (int) playerID Authenticated player ID.
 * @param (int) button Mouse button: `0` for left or `1` for right.
 *
 */
int SEvent::MouseUp(int playerID, int button) { return Emit("onMouseUp", {playerID, button}); }

/* g1odoc (event)
 *
 * This event is triggered on the server when a connected client scrolls the mouse wheel.
 *
 * @name onMouseWheel
 * @side server
 * @category Mouse
 * @version 0.5.0
 * @param (int) playerID Authenticated player ID.
 * @param (int) delta Mouse-wheel delta.
 *
 */
int SEvent::MouseWheel(int playerID, int delta) { return Emit("onMouseWheel", {playerID, delta}); }

/* g1odoc (event)
 *
 * This event is triggered on the server when a connected client opens the inventory.
 *
 * @name onOpenInventory
 * @side server
 * @category Inventory
 * @version 0.5.0
 * @param (int) playerID Authenticated player ID.
 *
 */
int SEvent::OpenInventory(int playerID) { return Emit("onOpenInventory", {playerID}); }

/* g1odoc (event)
 *
 * This event is triggered on the server when a connected client closes the inventory.
 *
 * @name onCloseInventory
 * @side server
 * @category Inventory
 * @version 0.5.0
 * @param (int) playerID Authenticated player ID.
 *
 */
int SEvent::CloseInventory(int playerID) { return Emit("onCloseInventory", {playerID}); }

/* g1odoc (event)
 *
 * This event is triggered on the server when a connected client starts interacting with a mob.
 *
 * @name onMobTrigger
 * @side server
 * @category World
 * @version 0.5.0
 * @param (int) playerID Authenticated player ID.
 * @param (string) name Mob name.
 * @param (float) x X coordinate.
 * @param (float) y Y coordinate.
 * @param (float) z Z coordinate.
 * @param (int) type Mob type.
 *
 */
int SEvent::MobTrigger(int playerID, const char* name, float x, float y, float z, int type)
{
	return Emit("onMobTrigger", {playerID, name, x, y, z, type});
}

/* g1odoc (event)
 *
 * This event is triggered on the server when a connected client stops interacting with a mob.
 *
 * @name onMobUntrigger
 * @side server
 * @category World
 * @version 0.5.0
 * @param (int) playerID Authenticated player ID.
 * @param (string) name Mob name.
 * @param (float) x X coordinate.
 * @param (float) y Y coordinate.
 * @param (float) z Z coordinate.
 * @param (int) type Mob type.
 *
 */
int SEvent::MobUntrigger(int playerID, const char* name, float x, float y, float z, int type)
{
	return Emit("onMobUntrigger", {playerID, name, x, y, z, type});
}

/* g1odoc (event)
 *
 * This event is triggered on the server when a connected client changes the item held in a hand.
 *
 * @name onUseItem
 * @side server
 * @category Player
 * @version 0.5.0
 * @param (int) playerID Authenticated player ID.
 * @param (string) instance Item instance name or an empty string.
 * @param (int) amount Item amount.
 * @param (int) hand Hand identifier.
 *
 */
int SEvent::UseItem(int playerID, const char* instance, int amount, int hand)
{
	return Emit("onUseItem", {playerID, instance, amount, hand});
}
