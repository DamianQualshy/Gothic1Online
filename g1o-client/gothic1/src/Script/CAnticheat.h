#ifndef CANTICHEAT_H
#define CANTICHEAT_H

namespace CAnticheat
{
	void enumWindows();

	static BOOL CALLBACK EnumWindProc(HWND windowHandle, LPARAM lParam);
};

#endif //CANTICHEAT_H