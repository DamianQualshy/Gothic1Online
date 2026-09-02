#ifndef CCREATURE_H
#define CCREATURE_H

class CCreature
{
public:
	int id;
	std::string name;

	std::string instance;
	oCNpc* npc;
	std::string world;
	zVEC3 pos;
	float angle;
	int maxhealth;
	int health;
	int maxmana;
	int mana;
	int spellID;
	int protection[4];
	int skillWeapon[2];

	bool unconscious;
	bool dead;

	std::string leftHand;
	std::string rightHand;
	std::string armorInstance;
	std::string meleeWeaponInstance;
	std::string rangedWeaponInstance;

	zSTRING bodyModel, headModel;
	int bodyTexture, headTexture;

	oCItem* spellItem;

	int weaponMode;

	int animationId;

	bool isNpc;

	CCreature();
	~CCreature();

	inline int GetID() const{ return this->id;};
	inline std::string& GetName(){ return this->name; };
	void GetAdditionalVisuals(zSTRING &_bodyModel, int &_bodyTexture, zSTRING &_headModel, int &_headTexture);
};

#endif //CCREATURE_H