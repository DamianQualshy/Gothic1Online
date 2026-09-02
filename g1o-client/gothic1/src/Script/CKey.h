#ifndef CKEY_H
#define CKEY_H

class CKey
{
private:
	std::uint64_t timeLastKey;
	List<int> disabledKeys;

public:
	CKey();
	~CKey();

	void KeyEvent(int key);
	bool IsKeyEnabled(int key);
	void SetKeyEnabled(int key, bool toggle);
};

#endif //CKEY_H
