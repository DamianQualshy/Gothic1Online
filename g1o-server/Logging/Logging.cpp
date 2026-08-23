#include "../stdafx.h"

#include <memory>
#include <utility>

#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>

namespace g1o::logging
{
void InitializeServer()
{
	auto logger = spdlog::default_logger();
	logger->sinks().clear();

	auto consoleSink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
	consoleSink->set_pattern("[%^%l%$] %v");
	logger->sinks().push_back(std::move(consoleSink));

	auto fileSink = std::make_shared<spdlog::sinks::basic_file_sink_mt>("GO_Log.txt", false);
	fileSink->set_pattern("[%Y-%m-%d %H:%M:%S] [%l] %v");
	logger->sinks().push_back(std::move(fileSink));

	spdlog::set_level(spdlog::level::info);
	spdlog::flush_on(spdlog::level::info);
}
}
