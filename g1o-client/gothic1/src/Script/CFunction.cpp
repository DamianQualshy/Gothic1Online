#include "..\\stdafx.h"

#include <Scripting/ScriptWire.h>

void CFunction::Register(g1o::script::NativeRegistry& registry)
{
	registry.Add("addChatMessage", CFunction::addChatMessage);
	registry.Add("setChatVisible", CFunction::setChatVisible);
	registry.Add("isChatVisible", CFunction::isChatVisible);
	registry.Add("clearMultiplayerMessages", CFunction::clearMultiplayerMessages);
	registry.Add("exitGame", CFunction::exit);
	registry.Add("disableKey", CFunction::disableKey);
	registry.Add("setGameNpcsEnabled", CFunction::setGameNpcsEnabled);
	registry.Add("setGameKeysEnabled", CFunction::setGameKeysEnabled);
	registry.Add("enableHud", CFunction::enableHud);
	registry.Add("setEquipmentEnabled", CFunction::setEquipmentEnabled);
	registry.Add("setTime", CFunction::setTime);
	registry.Add("getTime", CFunction::getTime);
	registry.Add("getPlayerPing", CFunction::getPlayerPing);
	registry.Add("sendPacket", CFunction::sendPacket);
	registry.Add("getResolution", CFunction::getResolution);
	registry.Add("getPlayerName", CFunction::getPlayerName);
	registry.Add("getPlayerHealth", CFunction::getPlayerHealth);
	registry.Add("getPlayerMaxHealth", CFunction::getPlayerMaxHealth);
	registry.Add("getPlayerMana", CFunction::getPlayerMana);
	registry.Add("getPlayerMaxMana", CFunction::getPlayerMaxMana);
	registry.Add("getPlayerDexterity", CFunction::getPlayerDexterity);
	registry.Add("getPlayerStrength", CFunction::getPlayerStrength);
	registry.Add("setPlayerHealth", CFunction::setPlayerHealth);
	registry.Add("setPlayerMaxHealth", CFunction::setPlayerMaxHealth);
	registry.Add("setPlayerMana", CFunction::setPlayerMana);
	registry.Add("setPlayerMaxMana", CFunction::setPlayerMaxMana);
	registry.Add("setPlayerDexterity", CFunction::setPlayerDexterity);
	registry.Add("setPlayerStrength", CFunction::setPlayerStrength);
	registry.Add("getPlayerPosition", CFunction::getPlayerPosition);
	registry.Add("setPlayerPosition", CFunction::setPlayerPosition);
	registry.Add("getPlayerAngle", CFunction::getPlayerAngle);
	registry.Add("setPlayerAngle", CFunction::setPlayerAngle);
	registry.Add("setPlayerLevel", CFunction::setPlayerLevel);
	registry.Add("getPlayerLevel", CFunction::getPlayerLevel);
	registry.Add("setExp", CFunction::setExp);
	registry.Add("getExp", CFunction::getExp);
	registry.Add("setNextLevelExp", CFunction::setNextLevelExp);
	registry.Add("getNextLevelExp", CFunction::getNextLevelExp);
	registry.Add("setLearnPoints", CFunction::setLearnPoints);
	registry.Add("getLearnPoints", CFunction::getLearnPoints);
	registry.Add("setPlayerSkillOpenLocks", CFunction::setPlayerSkillOpenLocks);
	registry.Add("getPlayerSkillOpenLocksLevel", CFunction::getPlayerSkillOpenLocksLevel);
	registry.Add("getPlayerSkillOpenLocksValue", CFunction::getPlayerSkillOpenLocksValue);
	registry.Add("setPlayerSkillPickPocket", CFunction::setPlayerSkillPickPocket);
	registry.Add("getPlayerSkillPickPocketLevel", CFunction::getPlayerSkillPickPocketLevel);
	registry.Add("getPlayerSkillPickPocketValue", CFunction::getPlayerSkillPickPocketValue);
	registry.Add("setPlayerMagicLevel", CFunction::setPlayerMagicLevel);
	registry.Add("getPlayerMagicLevel", CFunction::getPlayerMagicLevel);
	registry.Add("setPlayerAcrobatic", CFunction::setPlayerAcrobatic);
	registry.Add("getPlayerAcrobatic", CFunction::getPlayerAcrobatic);
	registry.Add("setPlayerSneak", CFunction::setPlayerSneak);
	registry.Add("getPlayerSneak", CFunction::getPlayerSneak);
	/*
	registry.Add("setProtection", CFunction::setProtection);
	registry.Add("getProtection", CFunction::getProtection);
	*/
	registry.Add("completeHeal", CFunction::completeHeal);
	registry.Add("isPlayerDead", CFunction::isPlayerDead);
	registry.Add("isPlayerUnconscious", CFunction::isPlayerUnconscious);
	registry.Add("setPlayerFreeze", CFunction::setPlayerFreeze);
	registry.Add("isPlayerFrozen", CFunction::isPlayerFrozen);
	registry.Add("getPlayerFocus", CFunction::getPlayerFocus);
	registry.Add("getItemName", CFunction::getItemName);
	registry.Add("getItemDescription", CFunction::getItemDescription);
	registry.Add("getItemValue", CFunction::getItemValue);
	registry.Add("giveItem", CFunction::giveItem);
	registry.Add("removeItem", CFunction::removeItem);
	registry.Add("equipArmor", CFunction::equipArmor);
	registry.Add("unequipArmor", CFunction::unequipArmor);
	registry.Add("equipMeleeWeapon", CFunction::equipMeleeWeapon);
	registry.Add("unequipMeleeWeapon", CFunction::unequipMeleeWeapon);
	registry.Add("equipRangedWeapon", CFunction::equipRangedWeapon);
	registry.Add("unequipRangedWeapon", CFunction::unequipRangedWeapon);
	registry.Add("getPlayerArmor", CFunction::getPlayerArmor);
	registry.Add("getPlayerMeleeWeapon", CFunction::getPlayerMeleeWeapon);
	registry.Add("getPlayerRangedWeapon", CFunction::getPlayerRangedWeapon);
	registry.Add("getPlayerWeaponMode", CFunction::getPlayerWeaponMode);
	registry.Add("setPlayerWeaponMode", CFunction::setPlayerWeaponMode);
	registry.Add("clearInventory", CFunction::clearInventory);
	registry.Add("openInventory", CFunction::openInventory);
	registry.Add("closeInventory", CFunction::closeInventory);
	registry.Add("playAni", CFunction::playAni);
	registry.Add("createDraw", CFunction::createDraw);
	registry.Add("destroyDraw", CFunction::destroyDraw);
	registry.Add("setDrawVisible", CFunction::setDrawVisible);
	registry.Add("isDrawVisible", CFunction::isDrawVisible);
	registry.Add("setDrawPosition", CFunction::setDrawPosition);
	registry.Add("getDrawPosition", CFunction::getDrawPosition);
	registry.Add("setDrawText", CFunction::setDrawText);
	registry.Add("setDrawFont", CFunction::setDrawFont);
	registry.Add("setDrawColor", CFunction::setDrawColor);
	registry.Add("createTexture", CFunction::createTexture);
	registry.Add("destroyTexture", CFunction::destroyTexture);
	registry.Add("setTexture", CFunction::setTexture);
	registry.Add("getTexture", CFunction::getTexture);
	registry.Add("setTexturePosition", CFunction::setTexturePosition);
	registry.Add("getTexturePosition", CFunction::getTexturePosition);
	registry.Add("setTextureSize", CFunction::setTextureSize);
	registry.Add("getTextureSize", CFunction::getTextureSize);
	registry.Add("setTextureVisible", CFunction::setTextureVisible);
	registry.Add("isTextureVisible", CFunction::isTextureVisible);
	registry.Add("setCursorVisible", CFunction::setCursorVisible);
	registry.Add("isCursorVisible", CFunction::isCursorVisible);
	registry.Add("getCursorPosition", CFunction::getCursorPos);
	registry.Add("setCursorPosition", CFunction::setCursorPos);
	registry.Add("getCursorSensitivity", CFunction::getCursorSensitivity);
	registry.Add("setCursorSensitivity", CFunction::setCursorSensitivity);
	registry.Add("setCursorTxt", CFunction::setCursorTxt);
	registry.Add("getCursorTxt", CFunction::getCursorTxt);
	registry.Add("isMouseBtnPressed", CFunction::isMouseBtnPressed);
	registry.Add("md5File", CFunction::md5File);
	registry.Add("setCameraInFrontOfPlayer", CFunction::setCameraInFrontOfPlayer);
	registry.Add("setDefaultCamera", CFunction::setDefaultCamera);
	registry.Add("changeWorld", CFunction::changeWorld);
	registry.Add("getWorld", CFunction::getWorld);
	registry.Add("setPlayerSavingEnabled", CFunction::setPlayerSavingEnabled);
	registry.Add("isPlayerSavingEnabled", CFunction::isPlayerSavingEnabled);
	registry.Add("getPlayerInstance", CFunction::getPlayerInstance);
	registry.Add("setPlayerInstance", CFunction::setPlayerInstance);
	registry.Add("scanPrograms", CFunction::scanPrograms);
	registry.Add("createVob", CFunction::createVob);
	registry.Add("destroyVob", CFunction::destroyVob);
	registry.Add("getVobRotation", CFunction::getVobRotation);
	registry.Add("setVobRotation", CFunction::setVobRotation);
	registry.Add("getVobPosition", CFunction::getVobPosition);
	registry.Add("setVobPosition", CFunction::setVobPosition);
	registry.Add("setCameraBehindVob", CFunction::setCameraBehindVob);
	registry.Add("setVobCollision", CFunction::setVobCollision);
	registry.Add("setPlayerSkillWeapon", CFunction::setPlayerSkillWeapon);
	registry.Add("getPlayerSkillWeapon", CFunction::getPlayerSkillWeapon);
	registry.Add("getPlayerAniId", CFunction::getPlayerAniId);
	registry.Add("getPlayerAni", CFunction::getPlayerAni);
	registry.Add("getPlayerVisual", CFunction::getPlayerVisual);
	registry.Add("setPlayerVisual", CFunction::setPlayerVisual);
	registry.Add("syncPlayerVisual", CFunction::syncPlayerVisual);
	registry.Add("hasItem", CFunction::hasItem);
	registry.Add("getPlayerEquipment", CFunction::getPlayerEquipment);
	registry.Add("applyPlayerOverlay", CFunction::applyPlayerOverlay);
	registry.Add("removePlayerOverlay", CFunction::removePlayerOverlay);
	registry.Add("destroyAllVobInWorld", CFunction::destroyAllVobInWorld);
	registry.Add("destroyVobsInWorld", CFunction::destroyVobsInWorld);
	registry.Add("setCameraMovementEnabled", CFunction::setCameraMovementEnabled);
	registry.Add("setPlayerResetModelEnabled", CFunction::setPlayerResetModelEnabled);
	registry.Add("resetPlayerModel", CFunction::resetPlayerModel);
	registry.Add("setMarvinEnabled", CFunction::setMarvinEnabled);
	registry.Add("setPlayerStatusVisible", CFunction::setPlayerStatusVisible);
	registry.Add("triggerServerEvent", CFunction::triggerServerEvent);
	registry.Add("getTextWidth", CFunction::getTextWidth);
	registry.Add("getFontHeight", CFunction::getFontHeight);
	registry.Add("getLetterWidth", CFunction::getLetterWidth);
	registry.Add("getLetterDistance", CFunction::getLetterDistance);
	registry.Add("getLanguage", CFunction::getLanguage);
};

/* g1odoc (func)
 *
 * This function adds message.
 *
 * @name addChatMessage
 * @side client
 * @category Chat
 * @version 0.4.0
 * @param (int) r Red color component.
 * @param (int) g Green color component.
 * @param (int) b Blue color component.
 * @param (string) message Message text.
 *
 */
int CFunction::addChatMessage(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 4);
	SCRIPT_CHECK_PARAM_INT(context, r, 0);
	SCRIPT_CHECK_PARAM_INT(context, g, 1);
	SCRIPT_CHECK_PARAM_INT(context, b, 2);
	SCRIPT_CHECK_PARAM_STRING(context, message, 3);
	
	core.GetChat()->AddLine(RakString(message),zCOLOR(r,g,b,255));

	return 0;
};

/* g1odoc (func)
 *
 * This function shows or hides chat.
 *
 * @name setChatVisible
 * @side client
 * @category Chat
 * @version 0.4.0
 * @param (bool) enable True to enable the feature, false to disable it.
 *
 */
int CFunction::setChatVisible(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_BOOL(context, enable, 0);

	core.GetChat()->Show(enable);

	return 0;
}

/* g1odoc (func)
 *
 * This function returns whether the chat is visible.
 *
 * @name isChatVisible
 * @side client
 * @category Chat
 * @version 0.4.0
 * @return (bool) Whether the chat is visible.
 *
 */
int CFunction::isChatVisible(g1o::script::CallContext& context)
{
	context.Push(static_cast<bool>(core.GetChat()->IsShowing()));
	return 1;
}

/* g1odoc (func)
 *
 * This function closes the game.
 *
 * @name exitGame
 * @side client
 * @category Game
 * @version 0.4.0
 *
 */
int CFunction::exit(g1o::script::CallContext& context)
{
	core.GetNetwork()->Disconnect();
	CGameManager::GetGameManager()->ExitGame();
	ExitProcess(0);

	return 0;
};

/* g1odoc (func)
 *
 * This function enables or disables a Gothic input key.
 *
 * @name disableKey
 * @side client
 * @category Input
 * @version 0.4.0
 * @param (int) key Gothic input key code.
 * @param (bool) toggle True to enable the feature, false to disable it.
 *
 */
int CFunction::disableKey(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_INT(context, key, 0);
	SCRIPT_CHECK_PARAM_BOOL(context, toggle, 1);
	
	//SetKeyEnabled enables key, disableKey disables key, so must be !toggle
	scr.GetScriptKeys()->SetKeyEnabled(key, !toggle);

	return 0;
};

/* g1odoc (func)
 *
 * This function enables or disables game npcs.
 *
 * @name setGameNpcsEnabled
 * @side client
 * @category Game
 * @version 0.4.0
 * @param (bool) enable True to enable the feature, false to disable it.
 *
 */
int CFunction::setGameNpcsEnabled(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_BOOL(context, enable, 0);

	oCSpawnManager* spawnManager = oCGame::GetGame()->GetSpawnManager();
	if (spawnManager)
	{
		spawnManager->SetSpawningEnabled(enable);
		scr.GetScriptVars()->isSpawningEnabled = enable;
	}
	//Chujowa metoda, nie polecam, gdy diego nie chce zniknac
	if (!enable)
	{
		oCNpc* focus = oCNpc::GetHero()->GetFocusNpc();
		if (focus)
			focus->DestroyNpc();
		else if ((focus = oCNpc::GetHero()->GetNextEnemy()))
			focus->DestroyNpc();
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function enables or disables game keys.
 *
 * @name setGameKeysEnabled
 * @side client
 * @category Input
 * @version 0.4.0
 * @param (bool) enable True to enable the feature, false to disable it.
 *
 */
int CFunction::setGameKeysEnabled(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_BOOL(context, enable, 0);

	scr.GetScriptVars()->isKeyEnabled = enable;

	return 0;
};

/* g1odoc (func)
 *
 * This function enables or disables interface.
 *
 * @name enableHud
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (bool) enable True to enable the feature, false to disable it.
 *
 */
int CFunction::enableHud(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_BOOL(context, enable, 0);

	scr.GetScriptVars()->isInterfaceEnabled = enable;

	return 0;
};

/* g1odoc (func)
 *
 * This function enables or disables eq.
 *
 * @name setEquipmentEnabled
 * @side client
 * @category Inventory
 * @version 0.4.0
 * @param (bool) enable True to enable the feature, false to disable it.
 *
 */
int CFunction::setEquipmentEnabled(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_BOOL(context, enable, 0);

	scr.GetScriptVars()->isEqEnabled = enable;

	return 0;
};

/* g1odoc (func)
 *
 * This function sets time.
 *
 * @name setTime
 * @side client
 * @category Game
 * @version 0.4.0
 * @param (int) hour Hour.
 * @param (int) minute Minute.
 *
 */
int CFunction::setTime(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_INT(context, hour, 0);
	SCRIPT_CHECK_PARAM_INT(context, minute, 1);

	oCGame::GetGame()->SetTime(0, hour, minute);

	return 0;
};

/* g1odoc (func)
 *
 * This function returns time.
 *
 * @name getTime
 * @side client
 * @category Game
 * @version 0.4.0
 * @return (table) Time.
 *
 */
int CFunction::getTime(g1o::script::CallContext& context)
{
	int day, hour, minute;
	oCGame::GetGame()->GetTime(day, hour, minute);

	context.NewTable();
	SCRIPT_TABLE_SET_INT(context, "hour", hour);
	SCRIPT_TABLE_SET_INT(context, "min", minute);

	return 1;
};

/* g1odoc (func)
 *
 * This function returns ping.
 *
 * @name getPlayerPing
 * @side client
 * @category Network
 * @version 0.4.0
 * @return (int) Ping.
 *
 */
int CFunction::getPlayerPing(g1o::script::CallContext& context)
{
	context.Push(core.GetNetwork()->GetPeer()->GetLastPing(core.GetNetwork()->GetServerAddress()));

	return 1;
};
/* g1odoc (func)
 *
 * This function sends packet.
 *
 * @name sendPacket
 * @side client
 * @category Network
 * @version 0.4.0
 * @param (int) priority Priority.
 * @param (string) data Packet data.
 *
 */
int CFunction::sendPacket(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_INT(context, priority, 0);
	SCRIPT_CHECK_PARAM_STRING(context, data, 1);

	CNetwork* net = core.GetNetwork();
	if( net->IsConnected() == true )
	{
		BitStream s;
		s.Write((MessageID)GO_SCRIPT);
		s.Write((MessageID)SCRIPT_PACKET);
		s.Write(RakString(data));

		switch (priority)
		{
		case 0:
			net->GetPeer()->Send(&s, LOW_PRIORITY, UNRELIABLE, 0, net->GetServerAddress(), false);
			break;

		case 1:
			net->GetPeer()->Send(&s, LOW_PRIORITY, RELIABLE, 0, net->GetServerAddress(), false);
			break;

		case 2:
			net->GetPeer()->Send(&s, LOW_PRIORITY, RELIABLE_ORDERED, 0, net->GetServerAddress(), false);
			break;
		}
		
	}

	return 0;
};
/* g1odoc (func)
 *
 * This function returns resolution.
 *
 * @name getResolution
 * @side client
 * @category Interface
 * @version 0.4.0
 * @return (table) Resolution.
 *
 */
int CFunction::getResolution(g1o::script::CallContext& context)
{
	int width, height;

	zCView *view = scr.GetScriptVars()->GetView();
	view->GetPixelSize(width, height);

	context.NewTable();
	SCRIPT_TABLE_SET_INT(context, "width", width);
	SCRIPT_TABLE_SET_INT(context, "height", height);

	return 1;
}

/* g1odoc (func)
 *
 * This function returns name.
 *
 * @name getPlayerName
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (string) Name.
 *
 */
int CFunction::getPlayerName(g1o::script::CallContext& context)
{
	context.Push(core.GetConfig()->GetPlayerName().C_String());
	return 1;
};

/* g1odoc (func)
 *
 * This function returns health.
 *
 * @name getPlayerHealth
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (int) Health.
 *
 */
int CFunction::getPlayerHealth(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetAttribute(NPC_ATR_HITPOINTS));
	return 1;
};

/* g1odoc (func)
 *
 * This function returns max health.
 *
 * @name getPlayerMaxHealth
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (int) Max health.
 *
 */
int CFunction::getPlayerMaxHealth(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetAttribute(NPC_ATR_HITPOINTS_MAX));
	return 1;
};

/* g1odoc (func)
 *
 * This function returns mana.
 *
 * @name getPlayerMana
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (int) Mana.
 *
 */
int CFunction::getPlayerMana(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetAttribute(NPC_ATR_MANA));
	return 1;
};

/* g1odoc (func)
 *
 * This function returns max mana.
 *
 * @name getPlayerMaxMana
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (int) Max mana.
 *
 */
int CFunction::getPlayerMaxMana(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetAttribute(NPC_ATR_MANA_MAX));
	return 1;
};

/* g1odoc (func)
 *
 * This function returns strength.
 *
 * @name getPlayerStrength
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (int) Strength.
 *
 */
int CFunction::getPlayerStrength(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetAttribute(NPC_ATR_STRENGTH));
	return 1;
};

/* g1odoc (func)
 *
 * This function returns dexterity.
 *
 * @name getPlayerDexterity
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (int) Dexterity.
 *
 */
int CFunction::getPlayerDexterity(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetAttribute(NPC_ATR_DEXTERITY));
	return 1;
};

/* g1odoc (func)
 *
 * This function sets health.
 *
 * @name setPlayerHealth
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (int) health Health.
 *
 */
int CFunction::setPlayerHealth(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, health, 0);

	oCNpc::GetHero()->SetAttribute(NPC_ATR_HITPOINTS, health);

	return 0;
};

/* g1odoc (func)
 *
 * This function sets max health.
 *
 * @name setPlayerMaxHealth
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (int) maxhealth Maxhealth.
 *
 */
int CFunction::setPlayerMaxHealth(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, maxhealth, 0);

	oCNpc::GetHero()->SetAttribute(NPC_ATR_HITPOINTS_MAX, maxhealth);

	return 0;
};

/* g1odoc (func)
 *
 * This function sets mana.
 *
 * @name setPlayerMana
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (int) mana Mana.
 *
 */
int CFunction::setPlayerMana(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, mana, 0);

	oCNpc::GetHero()->SetAttribute(NPC_ATR_MANA, mana);

	return 0;
};

/* g1odoc (func)
 *
 * This function sets max mana.
 *
 * @name setPlayerMaxMana
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (int) maxmana Maxmana.
 *
 */
int CFunction::setPlayerMaxMana(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, maxmana, 0);

	oCNpc::GetHero()->SetAttribute(NPC_ATR_MANA_MAX, maxmana);

	return 0;
};

/* g1odoc (func)
 *
 * This function sets strength.
 *
 * @name setPlayerStrength
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (int) strength Strength.
 *
 */
int CFunction::setPlayerStrength(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, strength, 0);

	oCNpc::GetHero()->SetAttribute(NPC_ATR_STRENGTH, strength);

	return 0;
};

/* g1odoc (func)
 *
 * This function sets dexterity.
 *
 * @name setPlayerDexterity
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (int) dexterity Dexterity.
 *
 */
int CFunction::setPlayerDexterity(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, dexterity, 0);

	oCNpc::GetHero()->SetAttribute(NPC_ATR_DEXTERITY, dexterity);

	return 0;
};

/* g1odoc (func)
 *
 * This function returns position.
 *
 * @name getPlayerPosition
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (table|bool) Position.
 *
 */
int CFunction::getPlayerPosition(g1o::script::CallContext& context)
{
	zVEC3 pos = oCNpc::GetHero()->GetPosition();
	
	context.NewTable();
	SCRIPT_TABLE_SET_FLOAT(context, "x", pos[0]);
	SCRIPT_TABLE_SET_FLOAT(context, "y", pos[1]);
	SCRIPT_TABLE_SET_FLOAT(context, "z", pos[2]);

	return 1;
};

/* g1odoc (func)
 *
 * This function sets position.
 *
 * @name setPlayerPosition
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (float) x X coordinate.
 * @param (float) y Y coordinate.
 * @param (float) z Z coordinate.
 *
 */
int CFunction::setPlayerPosition(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 3);
	SCRIPT_CHECK_PARAM_FLOAT(context, x, 0);
	SCRIPT_CHECK_PARAM_FLOAT(context, y, 1);
	SCRIPT_CHECK_PARAM_FLOAT(context, z, 2);

	// Lag fix
	CLocalPlayer *player = playerManager.GetLocalPlayer();
	player->pos[0] = x; player->pos[1] = y; player->pos[2] = z;
	
	oCNpc::GetHero()->SetPosition(x, y, z);

	return 0;
};

/* g1odoc (func)
 *
 * This function returns angle.
 *
 * @name getPlayerAngle
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (float) Angle.
 *
 */
int CFunction::getPlayerAngle(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetHeading());
	return 1;
};

/* g1odoc (func)
 *
 * This function sets angle.
 *
 * @name setPlayerAngle
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (float) angle Angle.
 *
 */
int CFunction::setPlayerAngle(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_FLOAT(context, angle, 0);

	oCNpc::GetHero()->SetHeading(angle);

	return 0;
};

/* g1odoc (func)
 *
 * This function sets level.
 *
 * @name setPlayerLevel
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (int) level Level.
 *
 */
int CFunction::setPlayerLevel(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, level, 0);

	oCNpc::GetHero()->SetLevel(level >= 0 ? level : 0);

	return 0;
}

/* g1odoc (func)
 *
 * This function returns level.
 *
 * @name getPlayerLevel
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (int) Level.
 *
 */
int CFunction::getPlayerLevel(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetLevel());
	return 1;
}

/* g1odoc (func)
 *
 * This function sets experience.
 *
 * @name setExp
 * @side client
 * @category Hero
 * @version 0.4.0
 * @param (int) experience Experience.
 *
 */
int CFunction::setExp(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, experience, 0);

	oCNpc::GetHero()->SetExperience(experience >= 0 ? experience : 0);

	return 0;
}

/* g1odoc (func)
 *
 * This function returns experience.
 *
 * @name getExp
 * @side client
 * @category Hero
 * @version 0.4.0
 * @return (int) Experience.
 *
 */
int CFunction::getExp(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetExperience());
	return 1;
}

/* g1odoc (func)
 *
 * This function sets next level experience.
 *
 * @name setNextLevelExp
 * @side client
 * @category Hero
 * @version 0.4.0
 * @param (int) experience Experience.
 *
 */
int CFunction::setNextLevelExp(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, experience, 0);

	oCNpc::GetHero()->SetExperienceNextLevel(experience >= 0 ? experience : 0);

	return 0;
}

/* g1odoc (func)
 *
 * This function returns next level experience.
 *
 * @name getNextLevelExp
 * @side client
 * @category Hero
 * @version 0.4.0
 * @return (int) Next level experience.
 *
 */
int CFunction::getNextLevelExp(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetExperienceNextLevel());
	return 1;
}

/* g1odoc (func)
 *
 * This function sets learn points.
 *
 * @name setLearnPoints
 * @side client
 * @category Hero
 * @version 0.4.0
 * @param (int) lp Lp.
 *
 */
int CFunction::setLearnPoints(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, lp, 0);

	oCNpc::GetHero()->SetLearnPoints(lp >= 0 ? lp : 0);

	return 0;
}

/* g1odoc (func)
 *
 * This function returns learn points.
 *
 * @name getLearnPoints
 * @side client
 * @category Hero
 * @version 0.4.0
 * @return (int) Learn points.
 *
 */
int CFunction::getLearnPoints(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetLearnPoints());
	return 1;
}

/* g1odoc (func)
 *
 * This function sets skill open locks.
 *
 * @name setPlayerSkillOpenLocks
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (int) skill Skill identifier.
 * @param (int) value New value.
 *
 */
int CFunction::setPlayerSkillOpenLocks(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_INT(context, skill, 0);
	SCRIPT_CHECK_PARAM_INT(context, value, 1);

	oCNpc::GetHero()->SetOpenLock(skill, value);

	return 0;
}

/* g1odoc (func)
 *
 * This function returns skill open locks level.
 *
 * @name getPlayerSkillOpenLocksLevel
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (int) Skill open locks level.
 *
 */
int CFunction::getPlayerSkillOpenLocksLevel(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetTalentSkill(NPC_TALENT_PICKLOCK));
	return 1;
}

/* g1odoc (func)
 *
 * This function returns skill open locks value.
 *
 * @name getPlayerSkillOpenLocksValue
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (int) Skill open locks value.
 *
 */
int CFunction::getPlayerSkillOpenLocksValue(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetTalentValue(NPC_TALENT_PICKLOCK));
	return 1;
}

/* g1odoc (func)
 *
 * This function sets skill pick pocket.
 *
 * @name setPlayerSkillPickPocket
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (int) skill Skill identifier.
 * @param (int) value New value.
 *
 */
int CFunction::setPlayerSkillPickPocket(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_INT(context, skill, 0);
	SCRIPT_CHECK_PARAM_INT(context, value, 1);

	oCNpc::GetHero()->SetPickPocket(skill, value);

	return 0;
}

/* g1odoc (func)
 *
 * This function returns skill pick pocket level.
 *
 * @name getPlayerSkillPickPocketLevel
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (int) Skill pick pocket level.
 *
 */
int CFunction::getPlayerSkillPickPocketLevel(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetTalentSkill(NPC_TALENT_PICKPOCKET));
	return 1;
}

/* g1odoc (func)
 *
 * This function returns skill pick pocket value.
 *
 * @name getPlayerSkillPickPocketValue
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (int) Skill pick pocket value.
 *
 */
int CFunction::getPlayerSkillPickPocketValue(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetTalentValue(NPC_TALENT_PICKPOCKET));
	return 1;
}

/* g1odoc (func)
 *
 * This function sets magic level.
 *
 * @name setPlayerMagicLevel
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (int) magic Magic.
 *
 */
int CFunction::setPlayerMagicLevel(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, magic, 0);

	oCNpc::GetHero()->SetMagicLvl(magic >= 0 ? magic : 0);

	return 0;
}

/* g1odoc (func)
 *
 * This function returns magic level.
 *
 * @name getPlayerMagicLevel
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (int) Magic level.
 *
 */
int CFunction::getPlayerMagicLevel(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetMagicLvl());
	return 1;
}

/* g1odoc (func)
 *
 * This function sets acrobatic.
 *
 * @name setPlayerAcrobatic
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (bool) acrobatic Acrobatic.
 *
 */
int CFunction::setPlayerAcrobatic(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_BOOL(context, acrobatic, 0);

	oCNpc::GetHero()->SetAcrobatic(acrobatic);

	return 0;
}

/* g1odoc (func)
 *
 * This function returns acrobatic.
 *
 * @name getPlayerAcrobatic
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (bool) True when the condition is met, otherwise false.
 *
 */
int CFunction::getPlayerAcrobatic(g1o::script::CallContext& context)
{
	context.Push(static_cast<bool>(oCNpc::GetHero()->GetAcrobatic()));
	return 1;
}

/* g1odoc (func)
 *
 * This function sets sneak.
 *
 * @name setPlayerSneak
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (bool) sneak Sneak.
 *
 */
int CFunction::setPlayerSneak(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_BOOL(context, sneak, 0);

	oCNpc::GetHero()->SetSneak(sneak);

	return 0;
}

/* g1odoc (func)
 *
 * This function returns sneak.
 *
 * @name getPlayerSneak
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (bool) True when the condition is met, otherwise false.
 *
 */
int CFunction::getPlayerSneak(g1o::script::CallContext& context)
{
	context.Push(static_cast<bool>(oCNpc::GetHero()->GetSneak()));
	return 1;
}
/*
int CFunction::setProtection(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_INT(context, type, 0);
	SCRIPT_CHECK_PARAM_INT(context, value, 1);

	oCNpc::GetHero()->SetProtection(type, value);

	return 0;
}

int CFunction::getProtection(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, type, 0);

	context.Push(oCNpc::GetHero()->GetProtection(type));

	return 1;
}
*/
/* g1odoc (func)
 *
 * This function fully restores the local player health.
 *
 * @name completeHeal
 * @side client
 * @category Player
 * @version 0.4.0
 *
 */
int CFunction::completeHeal(g1o::script::CallContext& context)
{
	oCNpc::GetHero()->CompleteHeal();
	return 0;
};

/* g1odoc (func)
 *
 * This function checks whether dead.
 *
 * @name isPlayerDead
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (bool) True when the condition is met, otherwise false.
 *
 */
int CFunction::isPlayerDead(g1o::script::CallContext& context)
{
	context.Push(static_cast<bool>(oCNpc::GetHero()->IsDead()));
	return 1;
};

/* g1odoc (func)
 *
 * This function checks whether unconscious.
 *
 * @name isPlayerUnconscious
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (bool) True when the condition is met, otherwise false.
 *
 */
int CFunction::isPlayerUnconscious(g1o::script::CallContext& context)
{
	context.Push(static_cast<bool>(oCNpc::GetHero()->IsUnconscious()));
	return 1;
};

/* g1odoc (func)
 *
 * This function sets freeze.
 *
 * @name setPlayerFreeze
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (bool) freeze Freeze.
 *
 */
int CFunction::setPlayerFreeze(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_BOOL(context, freeze, 0);

	scr.GetScriptVars()->SetFreeze(freeze);
	if (freeze) oCNpc::GetHero()->CloseInventory();

	return 0;
}

/* g1odoc (func)
 *
 * This function checks whether frozen.
 *
 * @name isPlayerFrozen
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (bool) True when the condition is met, otherwise false.
 *
 */
int CFunction::isPlayerFrozen(g1o::script::CallContext& context)
{
	context.Push(static_cast<bool>(scr.GetScriptVars()->isFrozen));
	return 1;
}

/* g1odoc (func)
 *
 * This function returns focus.
 *
 * @name getPlayerFocus
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (string|bool) Focus.
 *
 */
int CFunction::getPlayerFocus(g1o::script::CallContext& context)
{
	oCNpc *focus = oCNpc::GetHero()->GetFocusNpc();
	if (focus)
	{
		context.Push(focus->GetName(0).ToChar());
	}
	else
		context.Push(static_cast<bool>(false));

	return 1;
}

/* g1odoc (func)
 *
 * This function clears inventory.
 *
 * @name clearInventory
 * @side client
 * @category Inventory
 * @version 0.4.0
 *
 */
int CFunction::clearInventory(g1o::script::CallContext& context)
{
	oCNpc::GetHero()->ClearInventory();
	return 0;
};

/* g1odoc (func)
 *
 * This function opens inventory.
 *
 * @name openInventory
 * @side client
 * @category Inventory
 * @version 0.4.0
 *
 */
int CFunction::openInventory(g1o::script::CallContext& context)
{
	oCNpc::GetHero()->OpenInventory();
	return 0;
};

/* g1odoc (func)
 *
 * This function closes inventory.
 *
 * @name closeInventory
 * @side client
 * @category Inventory
 * @version 0.4.0
 *
 */
int CFunction::closeInventory(g1o::script::CallContext& context)
{
	oCNpc::GetHero()->CloseInventory();
	return 0;
};

/* g1odoc (func)
 *
 * This function creates draw.
 *
 * @name createDraw
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (string) text Text.
 * @param (string) font Font.
 * @param (int) x X coordinate.
 * @param (int) y Y coordinate.
 * @param (int) r Red color component.
 * @param (int) g Green color component.
 * @param (int) b Blue color component.
 * @return (int) Identifier of the created object.
 *
 */
int CFunction::createDraw(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 7);
	SCRIPT_CHECK_PARAM_STRING(context, text, 0);
	SCRIPT_CHECK_PARAM_STRING(context, font, 1);
	SCRIPT_CHECK_PARAM_INT(context, x, 2);
	SCRIPT_CHECK_PARAM_INT(context, y, 3);
	SCRIPT_CHECK_PARAM_INT(context, r, 4);
	SCRIPT_CHECK_PARAM_INT(context, g, 5);
	SCRIPT_CHECK_PARAM_INT(context, b, 6);

	CDraw* new_Draw = new CDraw(text, font, x, y, zCOLOR(r, g, b, 255));
	if (new_Draw)
	{
		scr.GetScriptVars()->GetDrawList()->PushBack(new_Draw);
		int drawID = (long)new_Draw;
		context.Push(drawID);

		return 1;
	}

	context.Error(std::string("(") + __FUNCTION__ + ") cannot create new draw");
	return 0;
};

/* g1odoc (func)
 *
 * This function destroys draw.
 *
 * @name destroyDraw
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (int) drawID Draw ID.
 *
 */
int CFunction::destroyDraw(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, drawID, 0);

	if (drawID != 0)
	{
		CDraw* draw = (CDraw*)(long)drawID;
		if (draw)
		{
			scr.GetScriptVars()->GetDrawList()->Remove(draw);
			delete draw;
		}
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function sets draw visible.
 *
 * @name setDrawVisible
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (int) drawID Draw ID.
 * @param (bool) enable True to enable the feature, false to disable it.
 *
 */
int CFunction::setDrawVisible(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_INT(context, drawID, 0);
	SCRIPT_CHECK_PARAM_BOOL(context, enable, 1);

	if (drawID != 0)
	{
		CDraw* draw = (CDraw*)(long)drawID;
		if (draw)
		{
			draw->isVisible = enable;
		}
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function checks whether draw visible.
 *
 * @name isDrawVisible
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (int) drawID Draw ID.
 * @return (bool) True when the condition is met, otherwise false.
 *
 */
int CFunction::isDrawVisible(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, drawID, 0);

	if (drawID != 0)
	{
		CDraw* draw = (CDraw*)(long)drawID;
		if (draw)
		{
			context.Push(static_cast<bool>(draw->isVisible));
		}
	}

	return 1;
};

/* g1odoc (func)
 *
 * This function sets draw color.
 *
 * @name setDrawColor
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (int) drawID Draw ID.
 * @param (int) r Red color component.
 * @param (int) g Green color component.
 * @param (int) b Blue color component.
 *
 */
int CFunction::setDrawColor(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 4);
	SCRIPT_CHECK_PARAM_INT(context, drawID, 0);
	SCRIPT_CHECK_PARAM_INT(context, r, 1);
	SCRIPT_CHECK_PARAM_INT(context, g, 2);
	SCRIPT_CHECK_PARAM_INT(context, b, 3);

	if (drawID != 0)
	{
		CDraw* draw = (CDraw*)(long)drawID;
		if (draw)
		{
			draw->color = zCOLOR(r, g, b, 255);
		}
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function sets draw font.
 *
 * @name setDrawFont
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (int) drawID Draw ID.
 * @param (string) font Font.
 *
 */
int CFunction::setDrawFont(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_INT(context, drawID, 0);
	SCRIPT_CHECK_PARAM_STRING(context, font, 1);

	if (drawID != 0)
	{
		CDraw* draw = (CDraw*)(long)drawID;
		if (draw)
		{
			draw->font = zSTRING(font);
		}
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function sets draw position.
 *
 * @name setDrawPosition
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (int) drawID Draw ID.
 * @param (int) x X coordinate.
 * @param (int) y Y coordinate.
 *
 */
int CFunction::setDrawPosition(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 3);
	SCRIPT_CHECK_PARAM_INT(context, drawID, 0);
	SCRIPT_CHECK_PARAM_INT(context, x, 1);
	SCRIPT_CHECK_PARAM_INT(context, y, 2);

	if (drawID != 0)
	{
		CDraw* draw = (CDraw*)(long)drawID;
		if (draw)
		{
			draw->pos[1] = x;
			draw->pos[2] = y;
		}
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function sets draw text.
 *
 * @name setDrawText
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (int) drawID Draw ID.
 * @param (string) text Text.
 *
 */
int CFunction::setDrawText(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_INT(context, drawID, 0);
	SCRIPT_CHECK_PARAM_STRING(context, text, 1);

	if (drawID != 0)
	{
		CDraw* draw = (CDraw*)(long)drawID;
		if (draw)
		{
			draw->text = zSTRING(text);
		}
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function returns draw position.
 *
 * @name getDrawPosition
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (int) drawID Draw ID.
 * @return (table) Draw position.
 *
 */
int CFunction::getDrawPosition(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, drawID, 0);

	if (drawID != 0)
	{
		CDraw* draw = (CDraw*)(long)drawID;
		if (draw)
		{
			context.NewTable();
			SCRIPT_TABLE_SET_INT(context, "x", draw->pos[1]);
			SCRIPT_TABLE_SET_INT(context, "y", draw->pos[2]);

			return 1;
		}
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function sets cursor visible.
 *
 * @name setCursorVisible
 * @side client
 * @category Cursor
 * @version 0.4.0
 * @param (bool) show Show.
 *
 */
int CFunction::setCursorVisible(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_BOOL(context, show, 0);

	zCursor::GetCursor().SetShowing(show);

	return 0;
};

/* g1odoc (func)
 *
 * This function checks whether cursor visible.
 *
 * @name isCursorVisible
 * @side client
 * @category Cursor
 * @version 0.4.0
 * @return (bool) True when the condition is met, otherwise false.
 *
 */
int CFunction::isCursorVisible(g1o::script::CallContext& context)
{
	context.Push(static_cast<bool>(zCursor::GetCursor().IsShowing()));
	return 1;
};

/* g1odoc (func)
 *
 * This function returns cursor position.
 *
 * @name getCursorPosition
 * @side client
 * @category Cursor
 * @version 0.4.0
 * @return (table) Cursor position.
 *
 */
int CFunction::getCursorPos(g1o::script::CallContext& context)
{
	MOUSEPOS pos = zCursor::GetCursor().GetPosition();

	context.NewTable();
	SCRIPT_TABLE_SET_INT(context, "x", pos.x);
	SCRIPT_TABLE_SET_INT(context, "y", pos.y);
	SCRIPT_TABLE_SET_FLOAT(context, "wheel", pos.wheel);

	return 1;
};

/* g1odoc (func)
 *
 * This function sets cursor position.
 *
 * @name setCursorPosition
 * @side client
 * @category Cursor
 * @version 0.4.0
 * @param (int) x X coordinate.
 * @param (int) y Y coordinate.
 *
 */
int CFunction::setCursorPos(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_INT(context, x, 0);
	SCRIPT_CHECK_PARAM_INT(context, y, 1);

	zCursor::GetCursor().SetPosition(x, y);

	return 0;
}

/* g1odoc (func)
 *
 * This function returns cursor sensitivity.
 *
 * @name getCursorSensitivity
 * @side client
 * @category Cursor
 * @version 0.4.0
 * @return (float) Cursor sensitivity.
 *
 */
int CFunction::getCursorSensitivity(g1o::script::CallContext& context)
{
	context.Push(zCursor::GetCursor().GetSensitivity());
	return 1;
}

/* g1odoc (func)
 *
 * This function sets cursor sensitivity.
 *
 * @name setCursorSensitivity
 * @side client
 * @category Cursor
 * @version 0.4.0
 * @param (float) sensitivity Sensitivity.
 *
 */
int CFunction::setCursorSensitivity(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_FLOAT(context, sensitivity, 0);

	if (sensitivity > 0.0f)
		zCursor::GetCursor().SetSensitivity(sensitivity);

	return 0;
}

/* g1odoc (func)
 *
 * This function sets cursor texture.
 *
 * @name setCursorTxt
 * @side client
 * @category Cursor
 * @version 0.4.0
 * @param (string) texName Tex name.
 *
 */
int CFunction::setCursorTxt(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, texName, 0);

	zCursor::GetCursor().SetTexture(texName);

	return 0;
}

/* g1odoc (func)
 *
 * This function returns cursor texture.
 *
 * @name getCursorTxt
 * @side client
 * @category Cursor
 * @version 0.4.0
 * @return (string) Cursor texture.
 *
 */
int CFunction::getCursorTxt(g1o::script::CallContext& context)
{
	context.Push(zCursor::GetCursor().GetTexture().ToChar());
	return 1;
}

/* g1odoc (func)
 *
 * This function checks whether clicked.
 *
 * @name isMouseBtnPressed
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (string) button Button.
 * @return (bool) True when the condition is met, otherwise false.
 *
 */
int CFunction::isMouseBtnPressed(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, button, 0);

	if (strcmp(button, "LEFT") == 0)
		context.Push(static_cast<bool>(zCursor::GetCursor().IsLeftBtnClicked()));
	else if (strcmp(button, "RIGHT") == 0)
		context.Push(static_cast<bool>(zCursor::GetCursor().IsRightBtnClicked()));
	else if (strcmp(button, "WHEEL") == 0)
		context.Push(static_cast<bool>(zCursor::GetCursor().IsWheelClicked()));
	else
		context.Push(static_cast<bool>(false));

	return 1;
};

/* g1odoc (func)
 *
 * This function creates texture.
 *
 * @name createTexture
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (int) x X coordinate.
 * @param (int) y Y coordinate.
 * @param (int) w Width.
 * @param (int) h Height.
 * @param (string) textureString Texture string.
 * @return (int) Identifier of the created object.
 *
 */
int CFunction::createTexture(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 5);
	SCRIPT_CHECK_PARAM_INT(context, x, 0);
	SCRIPT_CHECK_PARAM_INT(context, y, 1);
	SCRIPT_CHECK_PARAM_INT(context, w, 2);
	SCRIPT_CHECK_PARAM_INT(context, h, 3);
	SCRIPT_CHECK_PARAM_STRING(context, textureString, 4);

	CTexture* new_texture = new CTexture(textureString, x, y, w, h);
	if (new_texture)
	{
		scr.GetScriptVars()->GetTextureList()->PushBack(new_texture);
		int texID = (long)new_texture;
		context.Push(texID);
		return 1;
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function destroys texture.
 *
 * @name destroyTexture
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (int) texID Tex id.
 *
 */
int CFunction::destroyTexture(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, texID, 0);

	if (texID != 0)
	{
		CTexture* tex = (CTexture*)(long)texID;
		if (tex)
		{
			scr.GetScriptVars()->GetTextureList()->Remove(tex);
			delete tex;
		}
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function sets texture.
 *
 * @name setTexture
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (int) texID Tex id.
 * @param (string) texName Tex name.
 *
 */
int CFunction::setTexture(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_INT(context, texID, 0);
	SCRIPT_CHECK_PARAM_STRING(context, texName, 1);

	if (texID != 0)
	{
		CTexture* tex = (CTexture*)(long)texID;
		if (tex)
		{
			tex->texName = texName;

			if (tex->isVisible == true)
			{
				zCView::GetScreen()->RemoveItem(tex->texture);
				tex->texture->InsertBack(zSTRING(texName));
				zCView::GetScreen()->InsertItem(tex->texture, true);
			}
			else
				tex->texture->InsertBack(zSTRING(texName));
		}
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function returns texture.
 *
 * @name getTexture
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (int) texID Tex id.
 * @return (string|bool) Texture.
 *
 */
int CFunction::getTexture(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, texID, 0);

	if (texID != 0)
	{
		CTexture* tex = (CTexture*)(long)texID;
		if (tex)
		{
			context.Push(tex->texName.ToChar());
		}
		else
			context.Push(static_cast<bool>(false));
	}
	else
		context.Push(static_cast<bool>(false));

	return 1;
};

/* g1odoc (func)
 *
 * This function sets texture position.
 *
 * @name setTexturePosition
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (int) texID Tex id.
 * @param (int) x X coordinate.
 * @param (int) y Y coordinate.
 *
 */
int CFunction::setTexturePosition(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 3);
	SCRIPT_CHECK_PARAM_INT(context, texID, 0);
	SCRIPT_CHECK_PARAM_INT(context, x, 1);
	SCRIPT_CHECK_PARAM_INT(context, y, 2);

	if (texID != 0)
	{
		CTexture* tex = (CTexture*)(long)texID;
		if (tex)
		{
			tex->pos[1] = x;
			tex->pos[2] = y;
			
			if (tex->isVisible == true)
				tex->texture->SetPos(x, y);
		}
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function returns texture position.
 *
 * @name getTexturePosition
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (int) texID Tex id.
 * @return (table|bool) Texture position.
 *
 */
int CFunction::getTexturePosition(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, texID, 0);

	if (texID != 0)
	{
		CTexture* tex = (CTexture*)(long)texID;
		if (tex)
		{
			context.NewTable();
			SCRIPT_TABLE_SET_INT(context, "x", tex->pos[1]);
			SCRIPT_TABLE_SET_INT(context, "y", tex->pos[2]);
		}
		else
			context.Push(static_cast<bool>(false));
	}
	else
		context.Push(static_cast<bool>(false));

	return 1;
};

/* g1odoc (func)
 *
 * This function sets texture size.
 *
 * @name setTextureSize
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (int) texID Tex id.
 * @param (int) w Width.
 * @param (int) h Height.
 *
 */
int CFunction::setTextureSize(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 3);
	SCRIPT_CHECK_PARAM_INT(context, texID, 0);
	SCRIPT_CHECK_PARAM_INT(context, w, 1);
	SCRIPT_CHECK_PARAM_INT(context, h, 2);

	if (texID != 0)
	{
		CTexture* tex = (CTexture*)(long)texID;
		if (tex)
		{
			tex->pos[3] = w;
			tex->pos[4] = h;
			
			if (tex->isVisible == true)
				tex->texture->SetSize(w, h);
		}
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function returns texture size.
 *
 * @name getTextureSize
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (int) texID Tex id.
 * @return (table|bool) Texture size.
 *
 */
int CFunction::getTextureSize(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, texID, 0);

	if (texID != 0)
	{
		CTexture* tex = (CTexture*)(long)texID;
		if (tex)
		{
			context.NewTable();
			SCRIPT_TABLE_SET_INT(context, "width", tex->pos[3]);
			SCRIPT_TABLE_SET_INT(context, "height", tex->pos[4]);
		}
		else
			context.Push(static_cast<bool>(false));
	}
	else
		context.Push(static_cast<bool>(false));

	return 1;
};

/* g1odoc (func)
 *
 * This function sets texture visible.
 *
 * @name setTextureVisible
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (int) texID Tex id.
 * @param (bool) enable True to enable the feature, false to disable it.
 *
 */
int CFunction::setTextureVisible(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_INT(context, texID, 0);
	SCRIPT_CHECK_PARAM_BOOL(context, enable, 1);

	if (texID != 0)
	{
		CTexture* tex = (CTexture*)(long)texID;
		if (tex)
		{
			if (enable == 0 && tex->isVisible == true)
				tex->SetVisible(false);
			else if (enable == 1 && tex->isVisible == false)
				tex->SetVisible(true);
		}
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function checks whether texture visible.
 *
 * @name isTextureVisible
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (int) texID Tex id.
 * @return (bool) True when the condition is met, otherwise false.
 *
 */
int CFunction::isTextureVisible(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, texID, 0);

	if (texID != 0)
	{
		CTexture* tex = (CTexture*)(long)texID;
		if (tex)
		{
			context.Push(static_cast<bool>(tex->isVisible));
		}
	}
	else
		context.Push(static_cast<bool>(false));

	return 2;
};

/* g1odoc (func)
 *
 * This function calculates the MD5 digest of a file.
 *
 * @name md5File
 * @side client
 * @category Hash
 * @version 0.4.0
 * @param (string) filename Path to the file.
 * @return (string) Lowercase hexadecimal MD5 digest.
 *
 */
int CFunction::md5File(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, filename, 0);

	md5wrapper md5;
	context.Push(md5.getHashFromFile(filename).c_str());

	return 1;
};
/* g1odoc (func)
 *
 * This function equips armor.
 *
 * @name equipArmor
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (string) instance Item instance name.
 * @return (bool) True when the condition is met, otherwise false.
 *
 */
int CFunction::equipArmor(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, instance, 0);

	oCNpc* hero = oCNpc::GetHero();
	oCItem* currentArmor = hero->GetEquippedArmor();
	if (currentArmor != 0)
	{
		hero->UnequipItem(currentArmor);
		currentArmor = 0;
	}

	currentArmor = hero->CreateItem(zSTRING(instance), 1);
	if (currentArmor)
	{
		hero->Equip(currentArmor);
		context.Push(static_cast<bool>(true));
	}
	else
		context.Push(static_cast<bool>(false));

	return 1;
};

/* g1odoc (func)
 *
 * This function unequips armor.
 *
 * @name unequipArmor
 * @side client
 * @category Player
 * @version 0.4.0
 *
 */
int CFunction::unequipArmor(g1o::script::CallContext& context)
{
	oCItem* item = oCNpc::GetHero()->GetEquippedArmor();
	if (item)
		oCNpc::GetHero()->UnequipItem(item);

	return 0;
};

/* g1odoc (func)
 *
 * This function equips melee weapon.
 *
 * @name equipMeleeWeapon
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (string) instance Item instance name.
 * @return (bool) True when the condition is met, otherwise false.
 *
 */
int CFunction::equipMeleeWeapon(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, instance, 0);
	oCNpc* hero = oCNpc::GetHero();
	oCItem* currentWeapon = hero->GetEquippedMeleeWeapon();

	if (currentWeapon != 0)
	{
		hero->UnequipItem(currentWeapon);
		currentWeapon = 0;
	}
	currentWeapon = hero->CreateItem(zSTRING(instance), 1);
	if (currentWeapon)
	{
		hero->Equip(currentWeapon);
		context.Push(static_cast<bool>(true));
	}
	else
		context.Push(static_cast<bool>(false));

	return 1;
};

/* g1odoc (func)
 *
 * This function unequips melee weapon.
 *
 * @name unequipMeleeWeapon
 * @side client
 * @category Player
 * @version 0.4.0
 *
 */
int CFunction::unequipMeleeWeapon(g1o::script::CallContext& context)
{
	oCItem* item = oCNpc::GetHero()->GetEquippedMeleeWeapon();
	if (item)
		oCNpc::GetHero()->UnequipItem(item);

	return 0;
};

/* g1odoc (func)
 *
 * This function equips ranged weapon.
 *
 * @name equipRangedWeapon
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (string) instance Item instance name.
 * @return (bool) True when the condition is met, otherwise false.
 *
 */
int CFunction::equipRangedWeapon(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, instance, 0);
	oCNpc* hero = oCNpc::GetHero();
	oCItem* currentWeapon = hero->GetEquippedRangedWeapon();

	if (currentWeapon != 0)
	{
		hero->UnequipItem(currentWeapon);
		currentWeapon = 0;
	}

	currentWeapon = hero->CreateItem(zSTRING(instance), 1);
	if (currentWeapon)
	{
		hero->Equip(currentWeapon);
		context.Push(static_cast<bool>(true));
	}
	else
		context.Push(static_cast<bool>(false));

	return 1;
};

/* g1odoc (func)
 *
 * This function unequips ranged weapon.
 *
 * @name unequipRangedWeapon
 * @side client
 * @category Player
 * @version 0.4.0
 *
 */
int CFunction::unequipRangedWeapon(g1o::script::CallContext& context)
{
	oCItem* item = oCNpc::GetHero()->GetEquippedRangedWeapon();
	if (item)
		oCNpc::GetHero()->UnequipItem(item);

	return 0;
};

/* g1odoc (func)
 *
 * This function returns armor instance.
 *
 * @name getPlayerArmor
 * @side client
 * @category Inventory
 * @version 0.4.0
 * @return (string) Armor instance.
 *
 */
int CFunction::getPlayerArmor(g1o::script::CallContext& context)
{
	oCItem* item = oCNpc::GetHero()->GetEquippedArmor();
	if (item)
		context.Push(item->GetInstanceName().ToChar());
	else
		context.Push("NULL");

	return 1;
};

/* g1odoc (func)
 *
 * This function returns melee instance.
 *
 * @name getPlayerMeleeWeapon
 * @side client
 * @category Inventory
 * @version 0.4.0
 * @return (string) Melee instance.
 *
 */
int CFunction::getPlayerMeleeWeapon(g1o::script::CallContext& context)
{
	oCItem* item = oCNpc::GetHero()->GetEquippedMeleeWeapon();

	if (item)
		context.Push(item->GetInstanceName().ToChar());
	else
		context.Push("NULL");

	return 1;
};

/* g1odoc (func)
 *
 * This function returns ranged instance.
 *
 * @name getPlayerRangedWeapon
 * @side client
 * @category Inventory
 * @version 0.4.0
 * @return (string) Ranged instance.
 *
 */
int CFunction::getPlayerRangedWeapon(g1o::script::CallContext& context)
{
	oCItem* item = oCNpc::GetHero()->GetEquippedRangedWeapon();

	if (item)
		context.Push(item->GetInstanceName().ToChar());
	else
		context.Push("NULL");

	return 1;
};

/* g1odoc (func)
 *
 * This function clears chat.
 *
 * @name clearMultiplayerMessages
 * @side client
 * @category Chat
 * @version 0.4.0
 *
 */
int CFunction::clearMultiplayerMessages(g1o::script::CallContext& context)
{
	core.GetChat()->Clear();
	return 0;
}

/* g1odoc (func)
 *
 * This function adds an item to the local player's inventory.
 *
 * @name giveItem
 * @side client
 * @category Inventory
 * @version 0.4.0
 * @param (string) instance Item instance name.
 * @param (int) amount Item amount.
 *
 */
int CFunction::giveItem(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_STRING(context, instance, 0);
	SCRIPT_CHECK_PARAM_INT(context, amount, 1);

	oCNpc::GetHero()->CreateItem(zSTRING(instance), amount);

	return 0;
};

/* g1odoc (func)
 *
 * This function removes item.
 *
 * @name removeItem
 * @side client
 * @category Inventory
 * @version 0.4.0
 * @param (string) instance Item instance name.
 * @param (int) amount Item amount.
 *
 */
int CFunction::removeItem(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_STRING(context, instance, 0);
	SCRIPT_CHECK_PARAM_INT(context, amount, 1);

	oCNpc* hero = oCNpc::GetHero();
	int index = zCParser::GetParser()->GetIndex(zSTRING(instance));
	if (index != 0)
	{
		oCItem* item = hero->IsInInv(index, 1);
		if (item->GetAmount() > amount)
			item->SetAmount(item->GetAmount() - amount);
		else if (item->GetAmount() <= amount)
		{
			hero->_DoDropVob(item);
			item->RemoveVobFromWorld();
		}
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function returns weapon mode.
 *
 * @name getPlayerWeaponMode
 * @side client
 * @category Inventory
 * @version 0.4.0
 * @return (int) Weapon mode.
 *
 */
int CFunction::getPlayerWeaponMode(g1o::script::CallContext& context)
{
	context.Push((int)oCNpc::GetHero()->GetWeaponMode());
	return 1;
};

/* g1odoc (func)
 *
 * This function sets weapon mode.
 *
 * @name setPlayerWeaponMode
 * @side client
 * @category Inventory
 * @version 0.4.0
 * @param (int) weaponMode Weapon mode.
 *
 */
int CFunction::setPlayerWeaponMode(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, weaponMode, 0);

	oCNpc::GetHero()->SetWeaponMode2((oCNpc_WeaponMode)weaponMode);

	return 0;
};

/* g1odoc (func)
 *
 * This function plays animation.
 *
 * @name playAni
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (string) animation Animation.
 *
 */
int CFunction::playAni(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, animation, 0);

	oCNpc::GetHero()->GetModel()->StartAni(zSTRING(animation), 0);

	return 0;
};

/* g1odoc (func)
 *
 * This function sets camera before hero.
 *
 * @name setCameraInFrontOfPlayer
 * @side client
 * @category Game
 * @version 0.4.0
 *
 */
int CFunction::setCameraInFrontOfPlayer(g1o::script::CallContext& context)
{
	zVEC3 position = oCNpc::GetHero()->GetPosition();
	float angle = oCNpc::GetHero()->GetHeading();

	// 50 to dystans od kamerki
	position[0] += sin(angle * 3.14 / 180.0) * 50;
	position[2] += cos(angle * 3.14 / 180.0) * 50;

	angle += 180.0f;
	if (angle > 360.0f) angle -= 360.0f;

	zCVob *vob = oCObjectFactory::GetFactory()->CreateVob(zSTRING("INVISIBLE_DEFAULT.3DS"), false, position, zVEC3(0.0f, angle, 0.0f));
	if (vob) zCAICamera::GetCurrent()->SetTarget(vob);

	return 0;
};

/* g1odoc (func)
 *
 * This function sets default camera.
 *
 * @name setDefaultCamera
 * @side client
 * @category Game
 * @version 0.4.0
 *
 */
int CFunction::setDefaultCamera(g1o::script::CallContext& context)
{
	// Chyba jeszcze trzeba tutaj zwolnić pamięć tego voba od kamerki
	zCAICamera::GetCurrent()->SetTarget(oCNpc::GetHero());
	return 0;
};

/* g1odoc (func)
 *
 * This function sets world.
 *
 * @name changeWorld
 * @side client
 * @category World
 * @version 0.4.0
 * @param (string) world World name.
 *
 */
int CFunction::changeWorld(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, world, 0);

	oCGame::GetGame()->ChangeLevel(zSTRING(world), zSTRING("start"));

	return 0;
};

/* g1odoc (func)
 *
 * This function returns world.
 *
 * @name getWorld
 * @side client
 * @category World
 * @version 0.4.0
 * @return (string) World.
 *
 */
int CFunction::getWorld(g1o::script::CallContext& context)
{
	zSTRING world = oCGame::GetGame()->GetGameWorld()->GetWorldName();
	context.Push(world.ToChar());

	return 1;
};

/* g1odoc (func)
 *
 * This function sets saving enabled.
 *
 * @name setPlayerSavingEnabled
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (bool) enable True to enable the feature, false to disable it.
 *
 */
int CFunction::setPlayerSavingEnabled(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_BOOL(context, enable, 0);

	scr.GetScriptVars()->isSavingActive = enable;

	return 0;
};

/* g1odoc (func)
 *
 * This function checks whether saving enabled.
 *
 * @name isPlayerSavingEnabled
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (bool) True when the condition is met, otherwise false.
 *
 */
int CFunction::isPlayerSavingEnabled(g1o::script::CallContext& context)
{
	context.Push(static_cast<bool>(scr.GetScriptVars()->isSavingActive));
	return 1;
};

/* g1odoc (func)
 *
 * This function returns item name.
 *
 * @name getItemName
 * @side client
 * @category Inventory
 * @version 0.4.0
 * @param (string) instance Item instance name.
 * @return (string) Item name.
 *
 */
int CFunction::getItemName(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, instance, 0);
	oCNpc* hero = oCNpc::GetHero();
	oCItem* item = hero->CreateItem(zSTRING(instance), 1);

	if (item)
	{
		context.Push(item->GetName(0).ToChar());
		hero->_DoDropVob(item);
		item->RemoveVobFromWorld();
	}
	else
		context.Push("NULL");

	return 1;
};

/* g1odoc (func)
 *
 * This function returns item description.
 *
 * @name getItemDescription
 * @side client
 * @category Inventory
 * @version 0.4.0
 * @param (string) instance Item instance name.
 * @param (int) index Index.
 * @return (string) Item description.
 *
 */
int CFunction::getItemDescription(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_STRING(context, instance, 0);
	SCRIPT_CHECK_PARAM_INT(context, index, 1);

	if (index >= 0 && index <= 5)
	{
		oCNpc* hero = oCNpc::GetHero();
		oCItem* item = hero->CreateItem(zSTRING(instance), 1);

		if (item && !item->GetText(index).IsEmpty())
		{
			context.Push(item->GetText(index).ToChar());
			hero->_DoDropVob(item);
			item->RemoveVobFromWorld();
		}
		else
			context.Push("NULL");
	}
	else
		context.Push("NULL");

	return 1;
};

/* g1odoc (func)
 *
 * This function returns item value.
 *
 * @name getItemValue
 * @side client
 * @category Inventory
 * @version 0.4.0
 * @param (string) instance Item instance name.
 * @param (int) index Index.
 * @return (int) Item value.
 *
 */
int CFunction::getItemValue(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_STRING(context, instance, 0);
	SCRIPT_CHECK_PARAM_INT(context, index, 1);

	if (index >= 0 && index <= 5)
	{
		oCNpc* hero = oCNpc::GetHero();
		oCItem* item = hero->CreateItem(zSTRING(instance), 1);

		if (item)
		{
			context.Push(item->GetCount(index));
			hero->_DoDropVob(item);
			item->RemoveVobFromWorld();
		}
		else
			context.Push(-1);
	}
	else
		context.Push(-1);

	return 1;
};

/* g1odoc (func)
 *
 * This function returns instance.
 *
 * @name getPlayerInstance
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (string) Instance.
 *
 */
int CFunction::getPlayerInstance(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetInstanceName().ToChar());
	return 1;
};

/* g1odoc (func)
 *
 * This function sets instance.
 *
 * @name setPlayerInstance
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (string) instance NPC instance name.
 *
 */
int CFunction::setPlayerInstance(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, instance, 0);

	oCNpc* hero = oCNpc::GetHero();
	zVEC3 pos = hero->GetPosition();
	oCNpc* new_hero = oCGame::GetGame()->CreateNPC(zSTRING(instance), pos[0], pos[1] + 30, pos[2]);
	if (new_hero)
	{
		zSTRING bodyModel, headModel;
		int bodyTexture, headTexture;

		CLocalPlayer *player = playerManager.GetLocalPlayer();
		player->GetAdditionalVisuals(bodyModel, bodyTexture, headModel, headTexture);

		new_hero->SetAsPlayer();
		hero->DestroyNpc();

		player->SetAdditionalVisuals(bodyModel, bodyTexture, headModel, headTexture);
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function scans visible window titles and triggers `onProgramName` for each one.
 *
 * @name scanPrograms
 * @side client
 * @category Game
 * @version 0.4.0
 *
 */
int CFunction::scanPrograms(g1o::script::CallContext& context)
{
	CAnticheat::enumWindows();
	return 0;
};

/* g1odoc (func)
 *
 * This function creates vob.
 *
 * @name createVob
 * @side client
 * @category World
 * @version 0.4.0
 * @param (string) visual Visual.
 * @param (float) x X coordinate.
 * @param (float) y Y coordinate.
 * @param (float) z Z coordinate.
 * @param (float) rotx Rotx.
 * @param (float) roty Roty.
 * @param (float) rotz Rotz.
 * @return (int) Identifier of the created object.
 *
 */
int CFunction::createVob(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 7);
	SCRIPT_CHECK_PARAM_STRING(context, visual, 0);
	SCRIPT_CHECK_PARAM_FLOAT(context, x, 1);
	SCRIPT_CHECK_PARAM_FLOAT(context, y, 2);
	SCRIPT_CHECK_PARAM_FLOAT(context, z, 3);
	SCRIPT_CHECK_PARAM_FLOAT(context, rotx, 4);
	SCRIPT_CHECK_PARAM_FLOAT(context, roty, 5);
	SCRIPT_CHECK_PARAM_FLOAT(context, rotz, 6);

	CVob* vob = vobManager.CreateVob(zSTRING(visual), zVEC3(x, y, z), zVEC3(rotx, roty, rotz));
	if (vob)
	{
		context.Push(vob->GetID());
	}
	else
		context.Push(-1);

	return 1;
};

/* g1odoc (func)
 *
 * This function destroys vob.
 *
 * @name destroyVob
 * @side client
 * @category World
 * @version 0.4.0
 * @param (int) vobID Vob ID.
 *
 */
int CFunction::destroyVob(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, vobID, 0);

	CVob* vob = vobManager.GetById(vobID);
	if (vob)
		vobManager.DestroyVob(vob);

	return 0;
};

/* g1odoc (func)
 *
 * This function returns vob position.
 *
 * @name getVobPosition
 * @side client
 * @category World
 * @version 0.4.0
 * @param (int) vobID Vob ID.
 * @return (table) Vob position.
 *
 */
int CFunction::getVobPosition(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, vobID, 0);

	CVob* vob = vobManager.GetById(vobID);

	if (vob)
	{
		zVEC3 pos = vob->GetZVob()->GetPositionWorld();

		context.NewTable();
		SCRIPT_TABLE_SET_FLOAT(context, "x", pos[0]);
		SCRIPT_TABLE_SET_FLOAT(context, "y", pos[1]);
		SCRIPT_TABLE_SET_FLOAT(context, "z", pos[2]);
	}
	else
		context.PushNull();

	return 1;
};

/* g1odoc (func)
 *
 * This function returns vob rotation.
 *
 * @name getVobRotation
 * @side client
 * @category World
 * @version 0.4.0
 * @param (int) vobID Vob ID.
 * @return (table) Vob rotation.
 *
 */
int CFunction::getVobRotation(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, vobID, 0);

	CVob* vob = vobManager.GetById(vobID);

	if (vob)
	{
		zVEC3 pos = vob->GetRotation();

		context.NewTable();
		SCRIPT_TABLE_SET_FLOAT(context, "x", pos[0]);
		SCRIPT_TABLE_SET_FLOAT(context, "y", pos[1]);
		SCRIPT_TABLE_SET_FLOAT(context, "z", pos[2]);
	}
	else
		context.PushNull();

	return 1;
};

/* g1odoc (func)
 *
 * This function sets vob position.
 *
 * @name setVobPosition
 * @side client
 * @category World
 * @version 0.4.0
 * @param (int) vobID Vob ID.
 * @param (float) x X coordinate.
 * @param (float) y Y coordinate.
 * @param (float) z Z coordinate.
 *
 */
int CFunction::setVobPosition(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 4);
	SCRIPT_CHECK_PARAM_INT(context, vobID, 0);
	SCRIPT_CHECK_PARAM_FLOAT(context, x, 1);
	SCRIPT_CHECK_PARAM_FLOAT(context, y, 2);
	SCRIPT_CHECK_PARAM_FLOAT(context, z, 3);

	CVob* vob = vobManager.GetById(vobID);
	if (vob)
		vob->GetZVob()->SetPositionWorld(zVEC3(x, y, z));

	return 0;
};

/* g1odoc (func)
 *
 * This function sets vob rotation.
 *
 * @name setVobRotation
 * @side client
 * @category World
 * @version 0.4.0
 * @param (int) vobID Vob ID.
 * @param (float) x X coordinate.
 * @param (float) y Y coordinate.
 * @param (float) z Z coordinate.
 *
 */
int CFunction::setVobRotation(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 4);
	SCRIPT_CHECK_PARAM_INT(context, vobID, 0);
	SCRIPT_CHECK_PARAM_FLOAT(context, x, 1);
	SCRIPT_CHECK_PARAM_FLOAT(context, y, 2);
	SCRIPT_CHECK_PARAM_FLOAT(context, z, 3);

	CVob* vob = vobManager.GetById(vobID);
	if (vob)
		vob->SetRotation(zVEC3(x, y, z));

	return 0;
};

/* g1odoc (func)
 *
 * This function sets vob collision.
 *
 * @name setVobCollision
 * @side client
 * @category World
 * @version 0.4.0
 * @param (int) vobID Vob ID.
 * @param (bool) enable True to enable the feature, false to disable it.
 *
 */
int CFunction::setVobCollision(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_INT(context, vobID, 0);
	SCRIPT_CHECK_PARAM_BOOL(context, enable, 1);

	if (vobID >= 0)
	{
		CVob* vob = vobManager.GetById(vobID);
		if (vob)
			vob->GetZVob()->SetCollDet(enable);
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function sets camera behind vob.
 *
 * @name setCameraBehindVob
 * @side client
 * @category Game
 * @version 0.4.0
 * @param (int) vobID Vob ID.
 *
 */
int CFunction::setCameraBehindVob(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, vobID, 0);

	if (vobID >= 0)
	{
		CVob* vob = vobManager.GetById(vobID);
		if (vob)
			zCAICamera::GetCurrent()->SetTarget(vob->GetZVob());
	}

	return 0;
};

/* g1odoc (func)
 *
 * This function sets weapon skill.
 *
 * @name setPlayerSkillWeapon
 * @side client
 * @category Inventory
 * @version 0.4.0
 * @param (int) skillID Skill id.
 * @param (int) value New value.
 *
 */
int CFunction::setPlayerSkillWeapon(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_INT(context, skillID, 0);
	SCRIPT_CHECK_PARAM_INT(context, value, 1);

	oCNpc::GetHero()->SetSkillWeapon(skillID, value);

	return 0;
};

/* g1odoc (func)
 *
 * This function returns weapon skill.
 *
 * @name getPlayerSkillWeapon
 * @side client
 * @category Inventory
 * @version 0.4.0
 * @param (int) skillID Skill id.
 * @return (int) Weapon skill.
 *
 */
int CFunction::getPlayerSkillWeapon(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, skillID, 0);

	context.Push(oCNpc::GetHero()->GetSkillWeapon(skillID));

	return 1;
}

/* g1odoc (func)
 *
 * This function returns animation id.
 *
 * @name getPlayerAniId
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (int) Animation id.
 *
 */
int CFunction::getPlayerAniId(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetAnimationID());
	return 1;
}

/* g1odoc (func)
 *
 * This function returns animation name.
 *
 * @name getPlayerAni
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (string) Animation name.
 *
 */
int CFunction::getPlayerAni(g1o::script::CallContext& context)
{
	context.Push(oCNpc::GetHero()->GetAnimationName().ToChar());
	return 1;
}

/* g1odoc (func)
 *
 * This function returns additional visual.
 *
 * @name getPlayerVisual
 * @side client
 * @category Player
 * @version 0.4.0
 * @return (table) Additional visual.
 *
 */
int CFunction::getPlayerVisual(g1o::script::CallContext& context)
{
	zSTRING bodyModel, headModel;
	int bodyTexture, headTexture;

	playerManager.GetLocalPlayer()->GetAdditionalVisuals(bodyModel, bodyTexture, headModel, headTexture);

	context.NewTable();
	SCRIPT_TABLE_SET_STRING(context, "bodyModel", bodyModel.ToChar());
	SCRIPT_TABLE_SET_INT(context, "bodyTexture", bodyTexture);
	SCRIPT_TABLE_SET_STRING(context, "headModel", headModel.ToChar());
	SCRIPT_TABLE_SET_INT(context, "headTexture", headTexture);

	return 1;
}

/* g1odoc (func)
 *
 * This function sets additional visual.
 *
 * @name setPlayerVisual
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (string) bodyModel Body model.
 * @param (int) bodyTexture Body texture.
 * @param (string) headModel Head model.
 * @param (int) headTexture Head texture.
 *
 */
int CFunction::setPlayerVisual(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 4);
	SCRIPT_CHECK_PARAM_STRING(context, bodyModel, 0);
	SCRIPT_CHECK_PARAM_INT(context, bodyTexture, 1);
	SCRIPT_CHECK_PARAM_STRING(context, headModel, 2);
	SCRIPT_CHECK_PARAM_INT(context, headTexture, 3);

	playerManager.GetLocalPlayer()->SetAdditionalVisuals(zSTRING(bodyModel), bodyTexture, zSTRING(headModel), headTexture);

	return 0;
}

/* g1odoc (func)
 *
 * This function checks whether the player has item.
 *
 * @name hasItem
 * @side client
 * @category Inventory
 * @version 0.4.0
 * @param (string) instance Item instance name.
 * @return (int) True if the player has item, otherwise false.
 *
 */
int CFunction::hasItem(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, instance, 0);

	oCNpc* hero = oCNpc::GetHero();
	int index = zCParser::GetParser()->GetIndex(zSTRING(instance));
	if (index != 0)
	{
		oCItem* item = hero->IsInInv(index, 1);
		if (item)
		{
			context.Push(item->GetAmount());
			return 1;
		}
	}
	context.Push(-1);

	return 1;
}

/* g1odoc (func)
 *
 * This function returns eq.
 *
 * @name getPlayerEquipment
 * @side client
 * @category Inventory
 * @version 0.4.0
 * @return (array) Eq.
 *
 */
int CFunction::getPlayerEquipment(g1o::script::CallContext& context)
{
	oCNpc* hero = oCNpc::GetHero();
	context.NewArray();

	for (int i = 0; i < 5000; ++i)
	{
		oCItem* item = hero->IsInInv(i, 0);
		if (item)
		{
			context.NewTable();
			SCRIPT_TABLE_SET_STRING(context, "instance", item->GetInstanceName().ToChar());
			SCRIPT_TABLE_SET_INT(context, "amount", item->GetAmount());
			context.ArrayAppend();
		}
	}

	return 1;
}

/* g1odoc (func)
 *
 * This function sends visual.
 *
 * @name syncPlayerVisual
 * @side client
 * @category Player
 * @version 0.4.0
 *
 */
int CFunction::syncPlayerVisual(g1o::script::CallContext& context)
{
	zSTRING bodyModel, headModel;
	int bodyTexture, headTexture;

	playerManager.GetLocalPlayer()->GetAdditionalVisuals(bodyModel, bodyTexture, headModel, headTexture);

	CNetwork* net = core.GetNetwork();
	if (net->IsConnected() == true)
	{
		BitStream s;
		s.Write((MessageID)GO_SCRIPT);
		s.Write((MessageID)SCRIPT_VISUAL);
		s.Write(RakString(bodyModel.ToChar()));
		s.Write(bodyTexture);
		s.Write(RakString(headModel.ToChar()));
		s.Write(headTexture);
		net->GetPeer()->Send(&s, LOW_PRIORITY, RELIABLE, 0, net->GetServerAddress(), false);
	}

	return 0;
}

/* g1odoc (func)
 *
 * This function applies overlay.
 *
 * @name applyPlayerOverlay
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (string) overlay Overlay.
 *
 */
int CFunction::applyPlayerOverlay(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, overlay, 0);

	oCNpc::GetHero()->ApplyOverlay(zSTRING(overlay));

	return 0;
}

/* g1odoc (func)
 *
 * This function removes overlay.
 *
 * @name removePlayerOverlay
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (string) overlay Overlay.
 *
 */
int CFunction::removePlayerOverlay(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, overlay, 0);

	oCNpc::GetHero()->RemoveOverlay(zSTRING(overlay));

	return 0;
}

/* g1odoc (func)
 *
 * This function destroys all vob in world.
 *
 * @name destroyAllVobInWorld
 * @side client
 * @category World
 * @version 0.4.0
 * @param (int) type Type.
 *
 */
int CFunction::destroyAllVobInWorld(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_INT(context, type, 0);

	switch (type)
	{
	case 0: type = VOB_TYPE_VT_OCMOBBED; break;
	case 1: type = VOB_TYPE_VT_OCMOBCONTAINER; break;
	case 2: type = VOB_TYPE_VT_OCMOBDOOR; break;
	case 3: type = VOB_TYPE_VT_OCMOBINTER; break;
	case 4: type = VOB_TYPE_VT_OCMOBLADDER; break;
	case 5: type = VOB_TYPE_VT_OCMOBSWITCH; break;
	case 6: type = VOB_TYPE_VT_OCMOBWHEEL; break;
	default: type = -1; break;
	}

	zCTree<zCVob> *tree = oCGame::GetGame()->GetGameWorld()->GetGlobalVobTree().firstChild;

	while (tree)
	{
		if (tree->data)
		{
			oCMobInter *mob = (oCMobInter*)tree->data;
			if ((int)::GetVobType(mob) == type)
				mob->RemoveVobFromWorld();
		}

		tree = tree->next;
	}

	return 0;
}

/* g1odoc (func)
 *
 * This function destroys vobs in world.
 *
 * @name destroyVobsInWorld
 * @side client
 * @category World
 * @version 0.4.0
 * @param (float) x X coordinate.
 * @param (float) y Y coordinate.
 * @param (float) z Z coordinate.
 * @param (int) range Range.
 *
 */
int CFunction::destroyVobsInWorld(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 4);
	SCRIPT_CHECK_PARAM_FLOAT(context, x, 0);
	SCRIPT_CHECK_PARAM_FLOAT(context, y, 1);
	SCRIPT_CHECK_PARAM_FLOAT(context, z, 2);
	SCRIPT_CHECK_PARAM_INT(context, range, 3);

	zCTree<zCVob> *tree = oCGame::GetGame()->GetGameWorld()->GetGlobalVobTree().firstChild;

	while (tree)
	{
		if (tree->data)
		{
			zVEC3 pos = tree->data->GetPositionWorld();
			if (goMath::GetDistance3D(pos[0], pos[1], pos[2], x, y, z) <= range)
			{
				tree->data->RemoveVobFromWorld();
			}
		}

		tree = tree->next;
	}

	return 0;
}

/* g1odoc (func)
 *
 * This function enables or disables camera movement.
 *
 * @name setCameraMovementEnabled
 * @side client
 * @category Game
 * @version 0.4.0
 * @param (bool) enable True to enable the feature, false to disable it.
 *
 */
int CFunction::setCameraMovementEnabled(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_BOOL(context, enable, 0);

	zCAICamera::GetCurrent()->SetMovementEnabled(enable);

	return 0;
};

/* g1odoc (func)
 *
 * This function enables or disables reset model.
 *
 * @name setPlayerResetModelEnabled
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (bool) enable True to enable the feature, false to disable it.
 *
 */
int CFunction::setPlayerResetModelEnabled(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_BOOL(context, enable, 0);

	scr.GetScriptVars()->isResetModelEnabled = enable;

	return 0;
}

/* g1odoc (func)
 *
 * This function resets model.
 *
 * @name resetPlayerModel
 * @side client
 * @category Player
 * @version 0.4.0
 *
 */
int CFunction::resetPlayerModel(g1o::script::CallContext& context)
{
	zCModel* model = oCNpc::GetHero()->GetModel();
	if (model)
		model->FadeOutAnisLayerRange(1, 2000);

	return 0;
}

/* g1odoc (func)
 *
 * This function enables or disables marvin.
 *
 * @name setMarvinEnabled
 * @side client
 * @category Game
 * @version 0.4.0
 * @param (bool) enable True to enable the feature, false to disable it.
 *
 */
int CFunction::setMarvinEnabled(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_BOOL(context, enable, 0);

	CScriptState *script = scr.GetScriptVars();
	if (script->isMarvinEnabled && !enable)
		pMemLib->ImportHook(0x4301F0, sizeof(void(*)(zSTRING)), &Fake_HandleResultString);
	else if (enable && !script->isMarvinEnabled)
		pMemLib->RemoveHook(0x4301F0);

	oCGame::GetGame()->EnableTestmode(enable);
	script->isMarvinEnabled = enable;

	return 0;
}

/* g1odoc (func)
 *
 * This function shows or hides player status.
 *
 * @name setPlayerStatusVisible
 * @side client
 * @category Player
 * @version 0.4.0
 * @param (bool) enable True to enable the feature, false to disable it.
 *
 */
int CFunction::setPlayerStatusVisible(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_BOOL(context, enable, 0);

	oCGame::GetGame()->SetShowPlayerStatus(enable);

	return 0;
}

/* g1odoc (func)
 *
 * This function triggers a remotely enabled custom event on the server.
 *
 * @name triggerServerEvent
 * @side client
 * @category Network
 * @version 0.4.0
 * @param (string) eventName Custom server event name, from 1 to 128 bytes.
 * @param (...) arguments Values passed after the authenticated sender player ID.
 * @return (bool) True if the event packet was sent.
 *
 */
int CFunction::triggerServerEvent(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, eventName, 0);
	if (!g1o::script::EventManager::IsValidName(eventName))
	{
		context.Error("triggerServerEvent expects an event name between 1 and 128 bytes");
		return -1;
	}

	BitStream stream;
	stream.Write(static_cast<MessageID>(GO_SCRIPT));
	stream.Write(static_cast<MessageID>(SCRIPT_EVENT));
	stream.Write(eventName);
	std::string error;
	if (!g1o::script::wire::WriteArguments(stream, context.ArgumentsFrom(1), error))
	{
		context.Error(error);
		return -1;
	}
	core.GetNetwork()->GetPeer()->Send(
		&stream, LOW_PRIORITY, RELIABLE_ORDERED, 0, core.GetNetwork()->GetServerAddress(), false);
	context.Push(true);
	return 1;
}

/* g1odoc (func)
 *
 * This function returns text width.
 *
 * @name getTextWidth
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (string) font Font.
 * @param (string) text Text.
 * @return (int) Text width.
 *
 */
int CFunction::getTextWidth(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_STRING(context, font, 0);
	SCRIPT_CHECK_PARAM_STRING(context, text, 1);

	zCView *view = scr.GetScriptVars()->GetView();
	view->SetFont(zSTRING(font));

	zCFont *zFont = view->GetFont();
	context.Push(zFont->GetFontX(zSTRING(text)));
	return 1;
}

/* g1odoc (func)
 *
 * This function returns font height.
 *
 * @name getFontHeight
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (string) font Font.
 * @return (int) Font height.
 *
 */
int CFunction::getFontHeight(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, font, 0);

	zCView *view = scr.GetScriptVars()->GetView();
	view->SetFont(zSTRING(font));

	zCFont *zFont = view->GetFont();
	context.Push(zFont->GetFontY());
	return 1;
}

/* g1odoc (func)
 *
 * This function returns letter width.
 *
 * @name getLetterWidth
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (string) font Font.
 * @param (int) character Character.
 * @return (int) Letter width.
 *
 */
int CFunction::getLetterWidth(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_STRING(context, font, 0);
	SCRIPT_CHECK_PARAM_INT(context, character, 1);

	zCView *view = scr.GetScriptVars()->GetView();
	view->SetFont(zSTRING(font));
	
	zCFont *zFont = view->GetFont();
	context.Push(zFont->GetWidth(character));
	return 1;
}

/* g1odoc (func)
 *
 * This function returns letter distance.
 *
 * @name getLetterDistance
 * @side client
 * @category Interface
 * @version 0.4.0
 * @param (string) font Font.
 * @return (float) Letter distance.
 *
 */
int CFunction::getLetterDistance(g1o::script::CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, font, 0);

	zCView *view = scr.GetScriptVars()->GetView();
	view->SetFont(zSTRING(font));

	zCFont *zFont = view->GetFont();
	context.Push(zFont->GetLetterDistance());
	return 1;
}

/* g1odoc (func)
 *
 * This function returns language.
 *
 * @name getLanguage
 * @side client
 * @category Game
 * @version 0.4.0
 * @return (string) Language.
 *
 */
int CFunction::getLanguage(g1o::script::CallContext& context)
{
	context.Push(core.GetConfig()->GetLanguage().C_String());
	return 1;
}
