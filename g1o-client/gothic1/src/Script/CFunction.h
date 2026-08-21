#ifndef CFUNCTION_H
#define CFUNCTION_H

namespace CFunction
{
	void Register(g1o::script::NativeRegistry& registry);
	
	int addChatMessage(g1o::script::CallContext& context);
	int setChatVisible(g1o::script::CallContext& context);
	int isChatVisible(g1o::script::CallContext& context);
	int clearMultiplayerMessages(g1o::script::CallContext& context);
	
	int disableKey(g1o::script::CallContext& context);
	int exit(g1o::script::CallContext& context);
	int setGameNpcsEnabled(g1o::script::CallContext& context);
	int setGameKeysEnabled(g1o::script::CallContext& context);
	int enableHud(g1o::script::CallContext& context);
	int setEquipmentEnabled(g1o::script::CallContext& context);
	int setTime(g1o::script::CallContext& context);
	int getTime(g1o::script::CallContext& context);
	int getPlayerPing(g1o::script::CallContext& context);
	int sendPacket(g1o::script::CallContext& context);
	int getResolution(g1o::script::CallContext& context);

	int getPlayerName(g1o::script::CallContext& context);
	int getPlayerHealth(g1o::script::CallContext& context);
	int getPlayerMaxHealth(g1o::script::CallContext& context);
	int getPlayerMana(g1o::script::CallContext& context);
	int getPlayerMaxMana(g1o::script::CallContext& context);
	int getPlayerStrength(g1o::script::CallContext& context);
	int getPlayerDexterity(g1o::script::CallContext& context);
	int setPlayerHealth(g1o::script::CallContext& context);
	int setPlayerMaxHealth(g1o::script::CallContext& context);
	int setPlayerMana(g1o::script::CallContext& context);
	int setPlayerMaxMana(g1o::script::CallContext& context);
	int setPlayerStrength(g1o::script::CallContext& context);
	int setPlayerDexterity(g1o::script::CallContext& context);
	int getPlayerPosition(g1o::script::CallContext& context);
	int setPlayerPosition(g1o::script::CallContext& context);
	int getPlayerAngle(g1o::script::CallContext& context);
	int setPlayerAngle(g1o::script::CallContext& context);
	int setPlayerLevel(g1o::script::CallContext& context);
	int getPlayerLevel(g1o::script::CallContext& context);
	int setExp(g1o::script::CallContext& context);
	int getExp(g1o::script::CallContext& context);
	int setNextLevelExp(g1o::script::CallContext& context);
	int getNextLevelExp(g1o::script::CallContext& context);
	int setLearnPoints(g1o::script::CallContext& context);
	int getLearnPoints(g1o::script::CallContext& context);
	int setPlayerSkillOpenLocks(g1o::script::CallContext& context);
	int getPlayerSkillOpenLocksLevel(g1o::script::CallContext& context);
	int getPlayerSkillOpenLocksValue(g1o::script::CallContext& context);
	int setPlayerSkillPickPocket(g1o::script::CallContext& context);
	int getPlayerSkillPickPocketLevel(g1o::script::CallContext& context);
	int getPlayerSkillPickPocketValue(g1o::script::CallContext& context);
	int setPlayerMagicLevel(g1o::script::CallContext& context);
	int getPlayerMagicLevel(g1o::script::CallContext& context);
	int setPlayerAcrobatic(g1o::script::CallContext& context);
	int getPlayerAcrobatic(g1o::script::CallContext& context);
	int setPlayerSneak(g1o::script::CallContext& context);
	int getPlayerSneak(g1o::script::CallContext& context);
	//int setProtection(g1o::script::CallContext& context);
	//int getProtection(g1o::script::CallContext& context);
	int completeHeal(g1o::script::CallContext& context);
	int isPlayerDead(g1o::script::CallContext& context);
	int isPlayerUnconscious(g1o::script::CallContext& context);
	int setPlayerFreeze(g1o::script::CallContext& context);
	int isPlayerFrozen(g1o::script::CallContext& context);
	int getPlayerFocus(g1o::script::CallContext& context);

	int clearInventory(g1o::script::CallContext& context);
	int openInventory(g1o::script::CallContext& context);
	int closeInventory(g1o::script::CallContext& context);

	int getItemName(g1o::script::CallContext& context);
	int getItemDescription(g1o::script::CallContext& context);
	int getItemValue(g1o::script::CallContext& context);
	int giveItem(g1o::script::CallContext& context);
	int removeItem(g1o::script::CallContext& context);
	int equipArmor(g1o::script::CallContext& context);
	int unequipArmor(g1o::script::CallContext& context);
	int equipMeleeWeapon(g1o::script::CallContext& context);
	int unequipMeleeWeapon(g1o::script::CallContext& context);
	int equipRangedWeapon(g1o::script::CallContext& context);
	int unequipRangedWeapon(g1o::script::CallContext& context);
	int getPlayerArmor(g1o::script::CallContext& context);
	int getPlayerMeleeWeapon(g1o::script::CallContext& context);
	int getPlayerRangedWeapon(g1o::script::CallContext& context);
	int getPlayerWeaponMode(g1o::script::CallContext& context);
	int setPlayerWeaponMode(g1o::script::CallContext& context);
	int playAni(g1o::script::CallContext& context);

	int createDraw(g1o::script::CallContext& context);
	int destroyDraw(g1o::script::CallContext& context);
	int setDrawVisible(g1o::script::CallContext& context);
	int isDrawVisible(g1o::script::CallContext& context);
	int setDrawPosition(g1o::script::CallContext& context);
	int setDrawText(g1o::script::CallContext& context);
	int setDrawFont(g1o::script::CallContext& context);
	int setDrawColor(g1o::script::CallContext& context);
	int getDrawPosition(g1o::script::CallContext& context);

	int setCursorVisible(g1o::script::CallContext& context);
	int isCursorVisible(g1o::script::CallContext& context);
	int getCursorPos(g1o::script::CallContext& context);
	int setCursorPos(g1o::script::CallContext& context);
	int getCursorSensitivity(g1o::script::CallContext& context);
	int setCursorSensitivity(g1o::script::CallContext& context);
	int setCursorTxt(g1o::script::CallContext& context);
	int getCursorTxt(g1o::script::CallContext& context);
	int isMouseBtnPressed(g1o::script::CallContext& context);

	int createTexture(g1o::script::CallContext& context);
	int destroyTexture(g1o::script::CallContext& context);
	int setTexture(g1o::script::CallContext& context);
	int getTexture(g1o::script::CallContext& context);
	int setTexturePosition(g1o::script::CallContext& context);
	int getTexturePosition(g1o::script::CallContext& context);
	int setTextureSize(g1o::script::CallContext& context);
	int getTextureSize(g1o::script::CallContext& context);
	int setTextureVisible(g1o::script::CallContext& context);
	int isTextureVisible(g1o::script::CallContext& context);
	
	int md5File(g1o::script::CallContext& context);

	int setCameraInFrontOfPlayer(g1o::script::CallContext& context);
	int setDefaultCamera(g1o::script::CallContext& context);

	int changeWorld(g1o::script::CallContext& context);
	int getWorld(g1o::script::CallContext& context);

	int setPlayerSavingEnabled(g1o::script::CallContext& context);
	int isPlayerSavingEnabled(g1o::script::CallContext& context);

	int setPlayerInstance(g1o::script::CallContext& context);
	int getPlayerInstance(g1o::script::CallContext& context);

	int setPlayerSkillWeapon(g1o::script::CallContext& context);
	int getPlayerSkillWeapon(g1o::script::CallContext& context);
	int getPlayerAniId(g1o::script::CallContext& context);
	int getPlayerAni(g1o::script::CallContext& context);
	int getPlayerVisual(g1o::script::CallContext& context);
	int setPlayerVisual(g1o::script::CallContext& context);
	int hasItem(g1o::script::CallContext& context);
	int getPlayerEquipment(g1o::script::CallContext& context);
	int syncPlayerVisual(g1o::script::CallContext& context);
	int applyPlayerOverlay(g1o::script::CallContext& context);
	int removePlayerOverlay(g1o::script::CallContext& context);

	int scanPrograms(g1o::script::CallContext& context);

	int createVob(g1o::script::CallContext& context);
	int destroyVob(g1o::script::CallContext& context);
	int getVobRotation(g1o::script::CallContext& context);
	int setVobRotation(g1o::script::CallContext& context);
	int getVobPosition(g1o::script::CallContext& context);
	int setVobPosition(g1o::script::CallContext& context);
	int setVobCollision(g1o::script::CallContext& context);
	int setCameraBehindVob(g1o::script::CallContext& context);
	int destroyAllVobInWorld(g1o::script::CallContext& context);
	int destroyVobsInWorld(g1o::script::CallContext& context);
	int setCameraMovementEnabled(g1o::script::CallContext& context);
	int setPlayerResetModelEnabled(g1o::script::CallContext& context);
	int resetPlayerModel(g1o::script::CallContext& context);
	int setMarvinEnabled(g1o::script::CallContext& context);
	int setPlayerStatusVisible(g1o::script::CallContext& context);
	int triggerServerEvent(g1o::script::CallContext& context);
	int getTextWidth(g1o::script::CallContext& context);
	int getFontHeight(g1o::script::CallContext& context);
	int getLetterWidth(g1o::script::CallContext& context);
	int getLetterDistance(g1o::script::CallContext& context);
	int getLanguage(g1o::script::CallContext& context);
};

#endif //CFUNCTION_H
