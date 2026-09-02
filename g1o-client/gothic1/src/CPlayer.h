#ifndef CPLAYER_H
#define CPLAYER_H

class CPlayer : public CCreature
{
public:
	CPlayer();
	CPlayer(int playerID, std::string playerName);
	~CPlayer();

	void Spawn(float x, float y, float z, std::string instance);
	void Respawn(); //Naprawienie buga ze smiercia
	void UnSpawn();
	void SetAdditionalVisuals(zSTRING const& _bodyModel, int _bodyTexture, zSTRING const& _headModel, int _headTexture);
private:
	std::uint64_t timerSlide;
	bool isSlideAllowed;
	std::uint64_t timerArmor;
	std::uint64_t timerWeapon;
	std::uint64_t timerHealth;
public:
	void Repair();
private:
	void RefreshPositions();
	void RefreshAngle();
	void RefreshArmor();
	void RefreshWeapon();
	void RefreshWeaponMode();
	void RefreshHealth();
	void RefreshTemporaryAnimation();
};

#endif //CPLAYER_H
