#ifndef CCREATURE_H
#define CCREATURE_H

class CCreature
{
public:
	int id;
	std::string name;

	std::string instance;
	bool spawned;
	bool isDead;
	bool isUnconscious;
	std::string world;
	float x;
	float y;
	float z;
	float angle;
	int maxhealth;
	int health;
	int maxmana;
	int mana;
	int protection[4];
	int skillWeapon[2];
	
	int animationId;

	std::string armorInstance;
	std::string meleeWeaponInstance;
	std::string rangedWeaponInstance;
	std::string leftHand;
	std::string rightHand;
	std::string magicItem;

	std::string bodyModel, headModel;
	int bodyTexture, headTexture;

	std::string overlay;

	int weaponMode;

	bool isNpc;
	bool isAdmin;
	bool isInvisible;

	unsigned virtualWorld;

	CCreature();
	~CCreature();

};

#endif //CCREATURE_H