#ifndef CNPC_H
#define CNPC_H

class CNpc : public CCreature
{
private:
	std::string ani;
	float wX, wY, wZ; //walkTo positions (for sliding)
	bool isWalking;
public:
	CNpc();
	~CNpc();

	List<CPlayer*> streamedPlayers;
	void pulse();

	void AI_walkTo(std::string animation, float x, float y, float z); //Npc odtwarza animke dopoki nie dojdzie do pozycji

};

#endif //CNPC_H