#ifndef CGOTHICGAME_H
#define CGOTHICGAME_H

class CGothicGame
{
public:
	bool bIsFirstFrame; //Używać podczas wykonywania pierwszej klatki w renderze
						//Jeśli wartość jest równa true, wtedy rozpocząć procedurę łączenia z serwerem
public:
	CGothicGame();
	~CGothicGame() {}; //Póki co, zostawię tę funkcję pustą

	void InitGame();
};

#endif //CGOTHICGAME_H