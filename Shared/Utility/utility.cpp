#include "utility.h"

bool utility::sscanf(const std::string &params, const std::string &command, std::vector<std::string> &elements)
{
	int splitCount = 0, begin = 0;
	int pSize = params.size();

	if (pSize == 1)
	{
		elements.push_back(command);
		return true;
	}
	else if (pSize > 1)
		for (int i = 0; i < command.length(); ++i)
			if (command[i] == ' ')
			{
				elements.push_back(command.substr(begin, i - begin));

				if (++splitCount == params.length() - 1)
				{
					begin = i + 1;

					elements.push_back(command.substr(begin, command.length() - begin));
					return true;
				}

				begin = i + 1;
			}

	return false;
}

std::string utility::RGBToHex(int r, int g, int b)
{
	if (r > 255 || r < 0) r = 255;
	if (g > 255 || g < 0) g = 255;
	if (b > 255 || b < 0) b = 255;

	char hexColor[16];
	sprintf(hexColor, "%02x%02x%02x", r, g, b);

	return std::string(hexColor);
}

void utility::HexToRGB(const char *colorHex, int *r, int *g, int *b)
{
	std::string color = colorHex ? colorHex : "";
	if (!color.empty() && color.front() == '#') color.erase(color.begin());
	if (color.size() > 6) color.resize(6);
	const int hex = static_cast<int>(strtol(color.c_str(), nullptr, 16));

	*r = hex / 0x10000;
	*g = (hex / 0x100) % 0x100;
	*b = hex % 0x100;
}

void utility::SplitString(const std::string &text, const std::string &delimiter, std::vector<std::string> &parts)
{
	int pos = 0, charPos = text.find(delimiter);

	while (charPos != std::string::npos)
	{
		parts.push_back(text.substr(pos, charPos - pos));
		pos = ++charPos; charPos = text.find(delimiter, pos);

		if (charPos == std::string::npos) // End, then copy all
			parts.push_back(text.substr(pos));
	}
}

#ifdef __LINUX__
unsigned GetTickCount()
{
	struct timeval tv;
	if(gettimeofday(&tv, NULL) != 0)
			return 0;

	return (tv.tv_sec * 1000) + (tv.tv_usec / 1000);
}
#endif
