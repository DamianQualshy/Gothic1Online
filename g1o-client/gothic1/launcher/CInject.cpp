#define _WIN32_WINNT 0x0501 // WinXP only
#define VC_EXTRALEAN
#include <Windows.h>
#include <TlHelp32.h>
#include <comdef.h>

#include <algorithm>
#include <cstring>
#include <string>
#include <vector>

#include <LaunchSession.h>
#include "CInject.h"

// Cancel unicode, only way in Qt
#define Process32First Process32First
#define Process32Next Process32Next
#define PROCESSENTRY32 PROCESSENTRY32

namespace
{
	bool IsLaunchSessionEntry(const char* entry)
	{
		const std::size_t nameLength = std::strlen(g1o::LaunchSessionEnvironment);
		return _strnicmp(entry, g1o::LaunchSessionEnvironment, nameLength) == 0 && entry[nameLength] == '=';
	}

	bool BuildChildEnvironment(const std::string& launchSession, std::vector<char>& environment)
	{
		LPCH inheritedEnvironment = GetEnvironmentStringsA();
		if (!inheritedEnvironment)
			return false;

		std::vector<std::string> entries;
		for (const char* entry = inheritedEnvironment; *entry; entry += std::strlen(entry) + 1)
		{
			if (!IsLaunchSessionEntry(entry))
				entries.emplace_back(entry);
		}
		FreeEnvironmentStringsA(inheritedEnvironment);

		entries.emplace_back(std::string(g1o::LaunchSessionEnvironment) + '=' + launchSession);
		std::sort(entries.begin(), entries.end(), [](const std::string& left, const std::string& right)
		{
			return _stricmp(left.c_str(), right.c_str()) < 0;
		});

		for (const std::string& entry : entries)
		{
			environment.insert(environment.end(), entry.begin(), entry.end());
			environment.push_back('\0');
		}
		environment.push_back('\0');
		return true;
	}
}

CInject::CInject()
{
	ZeroMemory(&m_ProcessInfo, sizeof(m_ProcessInfo));
}

CInject::~CInject()
{
	ReleaseLaunchedProcess(true);
}

void CInject::ReleaseLaunchedProcess(bool terminate)
{
	if (m_ProcessInfo.hProcess)
	{
		if (terminate && WaitForSingleObject(m_ProcessInfo.hProcess, 0) == WAIT_TIMEOUT)
			TerminateProcess(m_ProcessInfo.hProcess, 1);
		CloseHandle(m_ProcessInfo.hProcess);
	}

	if (m_ProcessInfo.hThread)
		CloseHandle(m_ProcessInfo.hThread);

	ZeroMemory(&m_ProcessInfo, sizeof(m_ProcessInfo));
}

DWORD CInject::RunApplication(const char *path, const std::string& launchSession)
{
	ReleaseLaunchedProcess(true);

	char fullPath[MAX_PATH];
	char *filePart = NULL;
	const DWORD pathLength = GetFullPathNameA(path, MAX_PATH, fullPath, &filePart);
	if (pathLength == 0 || pathLength >= MAX_PATH || filePart == NULL)
		return 0;

	std::string workingDirectory(fullPath, filePart - fullPath);
	while (!workingDirectory.empty() &&
		(workingDirectory.back() == '\\' || workingDirectory.back() == '/'))
		workingDirectory.pop_back();

	std::vector<char> environment;
	if (!BuildChildEnvironment(launchSession, environment))
		return 0;

    STARTUPINFOA startupInfo;
	ZeroMemory(&startupInfo, sizeof(startupInfo));
	startupInfo.cb = sizeof(startupInfo);

	if (CreateProcessA(fullPath, NULL, NULL, NULL, FALSE, CREATE_SUSPENDED, environment.data(),
		workingDirectory.empty() ? NULL : workingDirectory.c_str(), &startupInfo, &m_ProcessInfo))
		return m_ProcessInfo.dwProcessId;

    return 0;
}

DWORD CInject::GetPID(const char *processName)
{
    PROCESSENTRY32 processInfo;
	processInfo.dwSize = sizeof(processInfo);

	HANDLE hProcessSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);

    if (Process32First(hProcessSnapshot, &processInfo))
	{
        while (Process32Next(hProcessSnapshot, &processInfo))
		{
            if (strcmp(processName, processInfo.szExeFile) == 0)
			{
				CloseHandle(hProcessSnapshot);
				return processInfo.th32ProcessID;
			}
		}
	}

	CloseHandle(hProcessSnapshot);
	return 0;
}

bool CInject::InjectDLL(DWORD processID, const char *path)
{
	if (!processID)
		return false;

	char fullPath[MAX_PATH];
	const DWORD pathLength = GetFullPathNameA(path, MAX_PATH, fullPath, NULL);
	if (pathLength == 0 || pathLength >= MAX_PATH || GetFileAttributesA(fullPath) == INVALID_FILE_ATTRIBUTES)
	{
		if (m_ProcessInfo.dwProcessId == processID)
			ReleaseLaunchedProcess(true);
		return false;
	}

	const SIZE_T bufferSize = static_cast<SIZE_T>(pathLength) + 1;
	const bool launchedProcess = m_ProcessInfo.hProcess && m_ProcessInfo.dwProcessId == processID;
	HANDLE process = launchedProcess ? m_ProcessInfo.hProcess :
		OpenProcess(PROCESS_CREATE_THREAD | PROCESS_QUERY_INFORMATION |
			PROCESS_VM_OPERATION | PROCESS_VM_WRITE | PROCESS_VM_READ, FALSE, processID);
	if (!process)
		return false;

	LPVOID loadLibrary = reinterpret_cast<LPVOID>(
		GetProcAddress(GetModuleHandleA("kernel32.dll"), "LoadLibraryA"));
	LPVOID remotePath = VirtualAllocEx(process, NULL, bufferSize,
		MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);

	bool injected = false;
	bool remoteThreadCompleted = false;
	HANDLE thread = NULL;
	if (loadLibrary && remotePath &&
		WriteProcessMemory(process, remotePath, fullPath, bufferSize, NULL))
	{
		thread = CreateRemoteThread(process, NULL, 0,
			reinterpret_cast<LPTHREAD_START_ROUTINE>(loadLibrary), remotePath, 0, NULL);
		if (thread)
		{
			if (WaitForSingleObject(thread, 10000) == WAIT_OBJECT_0)
			{
				remoteThreadCompleted = true;
				DWORD moduleHandle = 0;
				injected = GetExitCodeThread(thread, &moduleHandle) && moduleHandle != 0;
			}
		}
	}

	if (thread)
		CloseHandle(thread);

	if (remotePath && (!thread || remoteThreadCompleted))
		VirtualFreeEx(process, remotePath, 0, MEM_RELEASE);

	if (launchedProcess)
	{
		if (injected)
		{
			if (ResumeThread(m_ProcessInfo.hThread) == static_cast<DWORD>(-1))
			{
				injected = false;
				TerminateProcess(process, 1);
			}
		}
		else
		{
			TerminateProcess(process, 1);
		}

		ReleaseLaunchedProcess(false);
	}
	else
	{
		CloseHandle(process);
	}

	return injected;
}
