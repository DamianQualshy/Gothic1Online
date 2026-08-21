#include "..\stdafx.h"

namespace {

int EventResult(const g1o::script::EventManager::DispatchResult& result)
{
	return result.value.value_or(result.cancelled ? 1 : 0);
}

int Emit(const char* name, g1o::script::ScriptArguments arguments = {})
{
	return EventResult(scr.GetEngine().Dispatch(name, arguments));
}

int MobType(oCMobInter* mob)
{
	switch (*reinterpret_cast<int*>(mob))
	{
	case VOB_TYPE_VT_OCMOBBED: return 0;
	case VOB_TYPE_VT_OCMOBCONTAINER: return 1;
	case VOB_TYPE_VT_OCMOBDOOR: return 2;
	case VOB_TYPE_VT_OCMOBINTER: return 3;
	case VOB_TYPE_VT_OCMOBLADDER: return 4;
	case VOB_TYPE_VT_OCMOBSWITCH: return 5;
	case VOB_TYPE_VT_OCMOBWHEEL: return 6;
	default: return -1;
	}
}

int EmitMob(const char* event, oCMobInter* mob)
{
	const zVEC3 position = mob->GetPositionWorld();
	return Emit(event, {mob->GetName().ToChar(), position[0], position[1], position[2], MobType(mob)});
}

} // namespace

/* g1odoc (event)
 *
 * This event is triggered once when the client script runtime initializes.
 *
 * @name onInit
 * @side client
 * @category Game
 * @version 0.5.0
 *
 */
int CEvent::Init() { return Emit("onInit"); }
/* g1odoc (event)
 *
 * This event is triggered before each rendered frame.
 *
 * @name onRender
 * @side client
 * @category Game
 * @version 0.5.0
 *
 */
int CEvent::Render() { return Emit("onRender"); }
/* g1odoc (event)
 *
 * This event is triggered when a script command is submitted.
 *
 * @name onCommand
 * @side client
 * @category Input
 * @version 0.5.0
 * @cancellable
 * @param (string) command Command name.
 * @param (string) params Command arguments.
 *
 */
int CEvent::Command(RakString command, RakString params) { return Emit("onCommand", {command.C_String(), params.C_String()}); }
/* g1odoc (event)
 *
 * This event is triggered when a script packet is received.
 *
 * @name onPacket
 * @side client
 * @category Network
 * @version 0.5.0
 * @param (string) data Packet data.
 *
 */
int CEvent::Packet(const char* data) { return Emit("onPacket", {data}); }
/* g1odoc (event)
 *
 * This event is triggered when a mouse button is pressed.
 *
 * @name onMouseDown
 * @side client
 * @category Mouse
 * @version 0.5.0
 * @param (int) button Mouse button: `0` for left or `1` for right.
 *
 */
int CEvent::MouseDown(int button) { return Emit("onMouseDown", {button}); }
/* g1odoc (event)
 *
 * This event is triggered when a mouse button is released.
 *
 * @name onMouseUp
 * @side client
 * @category Mouse
 * @version 0.5.0
 * @param (int) button Mouse button: `0` for left or `1` for right.
 *
 */
int CEvent::MouseUp(int button) { return Emit("onMouseUp", {button}); }
/* g1odoc (event)
 *
 * This event is triggered when the mouse wheel is scrolled.
 *
 * @name onMouseWheel
 * @side client
 * @category Mouse
 * @version 0.5.0
 * @param (int) delta Mouse-wheel delta.
 *
 */
int CEvent::MouseWheel(int delta) { return Emit("onMouseWheel", {delta}); }
/* g1odoc (event)
 *
 * This event is triggered when a keyboard key is pressed.
 *
 * @name onKeyDown
 * @side client
 * @category Input
 * @version 0.5.0
 * @param (int) key Key code.
 * @param (string) letter Translated key character.
 *
 */
int CEvent::KeyDown(int key)
{
	const RakString letter(core.GetKeyBoard()->GetTranslatedLetter(zCInput::GetInput()->GetLetter(key)));
	return Emit("onKeyDown", {key, letter.C_String()});
}
/* g1odoc (event)
 *
 * This event is triggered when a hit occurs.
 *
 * @name onPlayerHit
 * @side client
 * @category Player
 * @version 0.5.0
 *
 */
int CEvent::PlayerHit() { return Emit("onPlayerHit"); }
/* g1odoc (event)
 *
 * This event is triggered when the player dies.
 *
 * @name onPlayerDead
 * @side client
 * @category Player
 * @version 0.5.0
 *
 */
int CEvent::PlayerDead() { return Emit("onPlayerDead"); }
/* g1odoc (event)
 *
 * This event is triggered when the player respawns.
 *
 * @name onPlayerRespawn
 * @side client
 * @category Player
 * @version 0.5.0
 *
 */
int CEvent::PlayerRespawn() { return Emit("onPlayerRespawn"); }
/* g1odoc (event)
 *
 * This event is triggered when the player becomes unconscious.
 *
 * @name onPlayerUnconscious
 * @side client
 * @category Player
 * @version 0.5.0
 *
 */
int CEvent::PlayerUnconscious() { return Emit("onPlayerUnconscious"); }
/* g1odoc (event)
 *
 * This event is triggered when the player stands up.
 *
 * @name onPlayerStandUp
 * @side client
 * @category Player
 * @version 0.5.0
 *
 */
int CEvent::PlayerStandUp() { return Emit("onPlayerStandUp"); }
/* g1odoc (event)
 *
 * This event is triggered when a monitored program window is detected.
 *
 * @name onProgramName
 * @side client
 * @category Game
 * @version 0.5.0
 * @param (string) windowText Detected window title.
 *
 */
int CEvent::ProgramName(const char* windowText) { return Emit("onProgramName", {windowText}); }
/* g1odoc (event)
 *
 * This event is triggered when the inventory opens.
 *
 * @name onOpenInventory
 * @side client
 * @category Inventory
 * @version 0.5.0
 *
 */
int CEvent::OpenInventory() { return Emit("onOpenInventory"); }
/* g1odoc (event)
 *
 * This event is triggered when the inventory closes.
 *
 * @name onCloseInventory
 * @side client
 * @category Inventory
 * @version 0.5.0
 *
 */
int CEvent::CloseInventory() { return Emit("onCloseInventory"); }
/* g1odoc (event)
 *
 * This event is triggered when the player starts interacting with a mob.
 *
 * @name onMobTrigger
 * @side client
 * @category World
 * @version 0.5.0
 * @param (string) name Entity name.
 * @param (float) x X coordinate.
 * @param (float) y Y coordinate.
 * @param (float) z Z coordinate.
 * @param (int) type Mob type.
 *
 */
int CEvent::MobTrigger(oCMobInter* mob) { return EmitMob("onMobTrigger", mob); }
/* g1odoc (event)
 *
 * This event is triggered when the player stops interacting with a mob.
 *
 * @name onMobUntrigger
 * @side client
 * @category World
 * @version 0.5.0
 * @param (string) name Entity name.
 * @param (float) x X coordinate.
 * @param (float) y Y coordinate.
 * @param (float) z Z coordinate.
 * @param (int) type Mob type.
 *
 */
int CEvent::MobUntrigger(oCMobInter* mob) { return EmitMob("onMobUntrigger", mob); }
/* g1odoc (event)
 *
 * This event is triggered when the player uses an item.
 *
 * @name onUseItem
 * @side client
 * @category Hero
 * @version 0.5.0
 * @param (string) instance Item instance name.
 * @param (int) amount Item amount.
 * @param (int) hand Hand identifier.
 *
 */
int CEvent::UseItem(const char* instance, int amount, int hand) { return Emit("onUseItem", {instance, amount, hand}); }
/* g1odoc (event)
 *
 * This event is triggered when an entity gains focus.
 *
 * @name onPlayerTakeFocus
 * @side client
 * @category World
 * @version 0.5.0
 * @param (int) id Entity ID.
 * @param (string) name Entity name.
 * @param (float) x X coordinate.
 * @param (float) y Y coordinate.
 * @param (float) z Z coordinate.
 *
 */
int CEvent::PlayerTakeFocus(int id, const char* name, float x, float y, float z) { return Emit("onPlayerTakeFocus", {id, name, x, y, z}); }
/* g1odoc (event)
 *
 * This event is triggered when an entity loses focus.
 *
 * @name onPlayerLostFocus
 * @side client
 * @category World
 * @version 0.5.0
 * @param (int) id Entity ID.
 * @param (string) name Entity name.
 *
 */
int CEvent::PlayerLostFocus(int id, const char* name) { return Emit("onPlayerLostFocus", {id, name}); }
/* g1odoc (event)
 *
 * This event is triggered when a player nickname is rendered.
 *
 * @name onPlayerRenderNickname
 * @side client
 * @category Player
 * @version 0.5.0
 * @cancellable
 * @param (int) id Entity ID.
 * @param (string) name Entity name.
 * @param (int) x X coordinate.
 * @param (int) y Y coordinate.
 *
 */
int CEvent::PlayerRenderNickname(int id, const char* name, int x, int y) { return Emit("onPlayerRenderNickname", {id, name, x, y}); }
