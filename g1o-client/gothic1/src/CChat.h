#ifndef CCHAT_H
#define CCHAT_H

struct ChatLine
{
	std::string text;
	zCOLOR color;
};

class CChat
{
private:
	bool bIsInitiated;
	bool bIsShowing;
	bool bIsInputActive;
	std::string currentText; //obecnie wprowadzane znaki z klawiatury;
	unsigned int chatLines;
	vector<ChatLine> lines;
	std::string lastMessage;
	//Key eventy
	std::uint64_t timeLastKey;
	std::string lastLetter;
	//Animacja gestykulacji
	std::uint64_t timeGesticulation;
public:
	CChat();
	~CChat();

	void InitChat();
	void Render();
	bool IsInitiated() const { return this->bIsInitiated;};
	bool IsShowing() const { return this->bIsShowing; };
	bool IsInputActive() const { return this->bIsInputActive; };
	unsigned int GetLines() const { return this->chatLines; };
	void AddLine(std::string text, zCOLOR color);
	void Show(bool enable){ this->bIsShowing = enable;};
	void KeyEvent(int key);
	void Clear();
};

#endif //CCHAT_H
