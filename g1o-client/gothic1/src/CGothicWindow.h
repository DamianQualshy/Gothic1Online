/* GO source file */
#ifndef CGOTHICWINDOW_H
#define CGOTHICWINDOW_H

namespace CGothicWindow
{
	HINSTANCE GetGothicInstance();
	HWND GetGothicWindowHandle();
	std::string GetGothicWindowName();

	void SetGothicWindowName(const std::string& windowName);
};


#endif //CGOTHICWINDOW_N
