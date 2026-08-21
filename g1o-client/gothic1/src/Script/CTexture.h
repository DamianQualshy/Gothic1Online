#ifndef CTEXTURE_H
#define CTEXTURE_H

class CTexture
{
public:
	bool isVisible;
	int pos[4];
	zSTRING texName;

	zCView* texture;
	CTexture(const char* textureName, int x, int y, int w, int h);
	~CTexture();

	void SetVisible(bool val);
};

#endif //CTEXTURE_H