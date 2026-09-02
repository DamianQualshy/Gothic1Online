#ifndef CMULTIPLAYER_H
#define CMULTIPLAYER_H

struct STriggerSync
{
	std::uint64_t time;
	oCNpc *npc;
	oCMobInter *mob;

	STriggerSync(std::uint64_t _time, oCNpc *_npc, oCMobInter *_mob) : time(_time), npc(_npc), mob(_mob) {}
};

class CMultiplayer
{
private:
	bool bInitiated;
public:
	std::queue<STriggerSync> triggerQueue;
	std::string hostName;
	int myID;

	CMultiplayer();
	~CMultiplayer();

	int GetMyID() const{ return this->myID;};
	bool IsInitiated() const{ return this->bInitiated;};
	bool InitMultiplayer(std::string hostname, int myid);
	void RepairDoor();
};

#endif //CMULTIPLAYER_H
