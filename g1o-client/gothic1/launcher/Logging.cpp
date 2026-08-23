#include <QDate>
#include <QDir>

#include <memory>
#include <utility>

#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>

#include "PCH.h"

namespace g1o::logging
{
void InitializeLauncher()
{
	QDir().mkpath(CLIENT_LOG_PATH);

	auto consoleSink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
	consoleSink->set_pattern("[%^%l%$] %v");

	const auto logFile = QString(CLIENT_LOG_PATH)
		+ QDate::currentDate().toString("/launcher_dd_MM_yy.log");
	auto fileSink = std::make_shared<spdlog::sinks::basic_file_sink_mt>(logFile.toStdString(), false);
	fileSink->set_pattern("[%Y-%m-%d %H:%M:%S] [%l] %v");

	auto logger = std::make_shared<spdlog::logger>(
		"G1O.Launcher",
		spdlog::sinks_init_list{consoleSink, fileSink});
#ifdef DEBUG_MODE
	logger->set_level(spdlog::level::trace);
#else
	logger->set_level(spdlog::level::info);
#endif
	logger->flush_on(spdlog::level::info);
	spdlog::set_default_logger(std::move(logger));
}
}
