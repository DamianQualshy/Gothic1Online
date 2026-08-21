#pragma once

#include <Scripting/ScriptEngine.h>

#include <cstdint>
#include <string>
#include <vector>

namespace g1o::resource {

struct PackResult {
	std::string manifest_path;
	std::string archive_path;
	std::string archive_sha256;
	std::uint64_t archive_size = 0;
};

struct LoadedScript {
	std::string name;
	std::vector<std::uint8_t> bytecode;
	script::RuntimeLanguage language = script::RuntimeLanguage::Squirrel;
};

struct LoadedResource {
	std::vector<LoadedScript> scripts;
};

PackResult PackClientScripts(
	const std::string& source_directory,
	const std::string& output_directory,
	const std::vector<std::string>& scripts,
	const std::string& version);

LoadedResource LoadClientResource(const std::string& manifest_path);

} // namespace g1o::resource
