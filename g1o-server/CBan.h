#ifndef CBAN_H
#define CBAN_H

#include <string>
#include <vector>

class CBan
{
private:
	std::vector<std::string> banList;

public:
	CBan();
	~CBan();

	bool LoadBanList(const std::string& fileName);
	bool SaveBanList(const std::string& fileName) const;
	bool PushToBanList(std::string address);
	bool PopFromBanList(const std::string& address);
	bool IsBanned(const std::string& address) const;
	bool BanPlayer(CPlayer* player, const std::string& fileName);
};

#endif
