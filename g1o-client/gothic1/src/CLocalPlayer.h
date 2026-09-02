#ifndef CLOCALPLAYER_H
#define CLOCALPLAYER_H

class CLocalPlayer : public CPlayer
{
private:
	//Timery
	std::uint64_t posBroadcastTimer;
	std::uint64_t angleBroadcastTimer;
	std::uint64_t weaponModeBroadcastTimer;
	std::uint64_t aniBroadcastTimer;
	std::uint64_t armorBroadcastTimer;
	std::uint64_t weaponBroadcastTimer;
	std::uint64_t instanceBroadcastTimer;
	std::uint64_t handBroadcastTimer;
	std::uint64_t standUpTimer;
	std::uint64_t fightBroadcastTimer;
	std::uint64_t worldBroadcastTimer;
	std::uint64_t protectionBroadcastTimer;
	std::uint64_t skillWeaponBroadcastTimer;
	std::uint64_t lastDeathTimer;
	std::uint64_t focusTimer;
	bool isDead;
	
public:
	oCMobInter *lastMob;

	CLocalPlayer(int playerID, std::string playerName);
	~CLocalPlayer();

	void SetAdditionalVisuals(zSTRING const& _bodyModel, int _bodyTexture, zSTRING const& _headModel, int _headTexture);

	void Pulse();

	void SendPosition();
	void SendAngle();

	void SendChangeWeaponMode();
	//void SendPlayAnimation(int aniID, int startMode);
	void SendPlayAnimation();
	void SendWearArmor();
	void SendEquipWeapon(); //Ranged/Melee
	void SendInstanceChange(); //Zmiana w inna postac
	void SendHand(); //Poki co prawa reka (zablokowane bo kraszuje)
	void SendChangeLevel(std::string levelName);
	void SendEnterWorld();
	void SendHealth();
	void SendMaxHealth();
	void SendHitFocus(oCNpc *target);
	void SendStandUp();
	void SendMagicSetup();
	void SendMagicAttack();
	//void SendProtection();
	void SendMobTrigger(bool trigger, oCMobInter *mob);
	void SendOverlay(bool add, std::string overlay);
	void SendTimedOverlay(std::uint64_t time, std::string overlay);
	void SendArrow();
	void SendFocus(int focusID, bool taken);
	void BroadcastWorld();
	void Respawn();
	void Unconscious();
	void ReleaseMob();
	void HandleFocus();
	void BroadcastStats();
};

#endif //CLOCALPLAYER_H
