#include "stdafx.h"

#include <algorithm>

namespace
{
	void TrimLine(std::string& line)
	{
		while (!line.empty() && (line.back() == '\r' || line.back() == '\n' || line.back() == ' ' || line.back() == '\t'))
			line.pop_back();
	}
}

CBan::CBan() = default;
CBan::~CBan() = default;

bool CBan::PushToBanList(std::string address)
{
	TrimLine(address);
	if (address.empty() || IsBanned(address))
		return false;
	banList.push_back(std::move(address));
	return true;
}

bool CBan::PopFromBanList(const std::string& address)
{
	const auto iterator = std::find(banList.begin(), banList.end(), address);
	if (iterator == banList.end())
		return false;
	banList.erase(iterator);
	return true;
}

bool CBan::IsBanned(const std::string& address) const
{
	return std::find(banList.begin(), banList.end(), address) != banList.end();
}

bool CBan::LoadBanList(const std::string& fileName)
{
	std::ifstream input(fileName);
	if (!input)
		return false;

	std::string address;
	while (std::getline(input, address))
		PushToBanList(address);
	return true;
}

bool CBan::SaveBanList(const std::string& fileName) const
{
	std::ofstream output(fileName, std::ios::trunc);
	if (!output)
		return false;
	for (const auto& address : banList)
		output << address << '\n';
	return output.good();
}

bool CBan::BanPlayer(CPlayer* player, const std::string& fileName)
{
	if (!player || fileName.empty() || !PushToBanList(player->GetIP()))
		return false;
	player->Disconnect();
	return SaveBanList(fileName);
}
