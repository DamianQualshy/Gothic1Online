#ifndef CPLAYERLIST_H
#define CPLAYERLIST_H

class CPlayerList
{
private:
	std::string* playerList;
	zCView* texture;
	bool isShowing;
	//Singletone
	CPlayerList( const CPlayerList& ) {};
	CPlayerList();
	~CPlayerList();
public:
	static CPlayerList & GetInstance()
	{
		static CPlayerList pList;
		return pList;
	}

	void Render();
	std::string* GetList(){ return this->playerList; };
};


#endif //CPLAYERLIST_H