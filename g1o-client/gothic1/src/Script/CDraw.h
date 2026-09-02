#ifndef CDRAW_H
#define CDRAW_H

class CDraw
{
public:
	bool isVisible;
	int pos[2];
	zSTRING text;
	zSTRING font;
	zCOLOR color;
	CDraw(std::string txt, std::string fnt, int x, int y, zCOLOR clr);
	~CDraw() {};
	void OnRender(zCView* screen);
};

#endif //CDRAW_H