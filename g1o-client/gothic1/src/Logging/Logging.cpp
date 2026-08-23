#include "../stdafx.h"

#include <cstdio>
#include <memory>
#include <utility>

#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>

namespace
{
void AttachConsole(const char* title)
{
	AllocConsole();
	FILE* stream = nullptr;
	if (freopen_s(&stream, "CONOUT$", "w", stdout) == 0)
		setvbuf(stream, nullptr, _IONBF, 0);
	SetConsoleTitleA(title);
}
}

namespace g1o::logging
{
void InitializeClient()
{
	constexpr const char* logFile = "..\\Multiplayer\\logs\\client.log";
	CreateDirectoryA("..\\Multiplayer", nullptr);
	CreateDirectoryA("..\\Multiplayer\\logs", nullptr);

	auto logger = spdlog::default_logger();
	logger->sinks().clear();

#ifdef DEV_MODE
	AttachConsole("Gothic Online Debug Window");
	RECT rect{};
	if (GetWindowRect(GetConsoleWindow(), &rect))
	{
		const int width = rect.right - rect.left;
		const int height = rect.bottom - rect.top;
		SetWindowPos(
			GetConsoleWindow(),
			nullptr,
			GetSystemMetrics(SM_CXSCREEN) - width + 100,
			height - 340,
			width,
			height,
			0);
	}

	auto consoleSink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
	consoleSink->set_pattern("[%^%l%$] %v");
	logger->sinks().push_back(std::move(consoleSink));
#endif

	auto fileSink = std::make_shared<spdlog::sinks::basic_file_sink_mt>(logFile, true);
	fileSink->set_pattern("[%Y-%m-%d %H:%M:%S] [%l] %v");
	logger->sinks().push_back(std::move(fileSink));

#ifdef DEV_MODE
	spdlog::set_level(spdlog::level::trace);
#else
	spdlog::set_level(spdlog::level::info);
#endif
	spdlog::flush_on(spdlog::level::info);
}
}
