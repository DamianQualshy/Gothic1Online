#ifndef CSCRIPTSTATE_H
#define CSCRIPTSTATE_H

class CScriptState
{
private:
	List<CDraw*> drawList;
	List<CTexture*> textureList;
	zCView *drawView;
	
public:
	CScriptState();
	~CScriptState(){};

	inline List<CDraw*>* GetDrawList() { return &this->drawList;};
	inline List<CTexture*>* GetTextureList() { return &this->textureList;};
	inline zCView* GetView() { return this->drawView; };
	void SetFreeze(bool _enable);
	void DrawTop();

	void OnRender();

	bool isFrozen;
	bool isSavingActive;
	bool isKeyEnabled;
	bool isUnconsciousEnabled;
	bool isInterfaceEnabled;
	bool isEqEnabled;
	bool isResetModelEnabled;
	bool isSpawningEnabled;
	bool isMarvinEnabled;
};

#endif //CSCRIPTSTATE_H