#include "stdafx.h"

HINSTANCE CGothicWindow::GetGothicInstance()
{
	return Gothic_I_Classic::hInstApp; //hInstApp
};

HWND CGothicWindow::GetGothicWindowHandle()
{
	return Gothic_I_Classic::hWndApp; //hWndApp
};

std::string CGothicWindow::GetGothicWindowName()
{
	char windowName[256];
	GetWindowText(GetGothicWindowHandle(), windowName, sizeof(windowName));
	return windowName;
};

void CGothicWindow::SetGothicWindowName(const std::string& windowName)
{
	SetWindowText(GetGothicWindowHandle(), windowName.c_str());
};

