#ifndef __CINJECT_H__
#define __CINJECT_H__

#include <Windows.h>
#include <string>

class CInject
{
public:
	CInject();
	~CInject();

	DWORD RunApplication(const char *path, const std::string& launchSession);
	DWORD GetPID(const char *processName);
	bool InjectDLL(DWORD processID, const char *path);

private:
	void ReleaseLaunchedProcess(bool terminate);

	PROCESS_INFORMATION m_ProcessInfo;
};

#endif
