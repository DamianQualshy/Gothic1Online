#ifndef __CINJECT_H__
#define __CINJECT_H__

#include <Windows.h>
#include <vector>

class CInject
{
public:
	CInject();
	~CInject();

	DWORD RunApplication(const char *path);
	DWORD GetPID(const char *processName);
	bool InjectDLL(DWORD processID, const char *path);
	bool IsAddressHooked(DWORD oldFunction);
	bool ImportHook(DWORD startAddress, size_t size, ...);
	bool RemoveHook(DWORD startAddress);

private:
	struct Hook
	{
		DWORD address;
		unsigned char backup[6];
	};

	unsigned GetIndexOfAddress(DWORD oldFunction);
	void ReleaseLaunchedProcess(bool terminate);

	std::vector<Hook*> hookList;
	PROCESS_INFORMATION m_ProcessInfo;
};

#endif
