#include "ClientResource.h"

#include <hashlib/hl_sha256.h>
#include <lua.hpp>
#include <minizip/unzip.h>
#include <minizip/zip.h>
#include <nlohmann/json.hpp>
#include <sqrat/sqratVM.h>

#include <algorithm>
#include <array>
#include <cctype>
#include <chrono>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <stdexcept>
#include <string_view>
#include <system_error>
#include <unordered_set>

namespace g1o::resource {

namespace {

namespace fs = std::filesystem;
using Json = nlohmann::json;

constexpr std::size_t kMaxClientScripts = 256;
constexpr std::uint64_t kMaxCompiledScriptSize = 16ull * 1024 * 1024;
constexpr std::uint64_t kMaxManifestSize = 4ull * 1024 * 1024;
constexpr std::uint64_t kMaxArchiveSize = 256ull * 1024 * 1024;

struct FileMetadata {
	std::string path;
	std::uint64_t size = 0;
	std::string sha256;
};

class ScopedDirectory {
public:
	explicit ScopedDirectory(fs::path path) : path_(std::move(path)) {}
	~ScopedDirectory()
	{
		if (!path_.empty())
		{
			std::error_code error;
			fs::remove_all(path_, error);
		}
	}
	void Release() { path_.clear(); }

private:
	fs::path path_;
};

class ZipWriter {
public:
	explicit ZipWriter(const fs::path& path) : handle_(zipOpen(path.string().c_str(), APPEND_STATUS_CREATE))
	{
		if (!handle_) throw std::runtime_error("cannot create resource archive: " + path.string());
	}
	~ZipWriter() { if (handle_) zipClose(handle_, nullptr); }
	zipFile Get() const { return handle_; }
	void Close()
	{
		if (handle_ && zipClose(handle_, nullptr) != ZIP_OK) throw std::runtime_error("cannot finalize resource archive");
		handle_ = nullptr;
	}

private:
	zipFile handle_ = nullptr;
};

class ZipReader {
public:
	explicit ZipReader(const fs::path& path) : handle_(unzOpen(path.string().c_str()))
	{
		if (!handle_) throw std::runtime_error("cannot open resource archive: " + path.string());
	}
	~ZipReader() { if (handle_) unzClose(handle_); }
	unzFile Get() const { return handle_; }

private:
	unzFile handle_ = nullptr;
};

std::string Normalize(const fs::path& path)
{
	std::string result = path.generic_string();
	std::replace(result.begin(), result.end(), '\\', '/');
	return result;
}

std::string Lower(std::string value)
{
	std::transform(value.begin(), value.end(), value.begin(), [](unsigned char character) {
		return static_cast<char>(std::tolower(character));
	});
	return value;
}

void ValidateRelativePath(const std::string& path)
{
	const fs::path parsed(path);
	if (path.empty() || parsed.is_absolute()) throw std::runtime_error("resource path must be relative: " + path);
	for (const auto& component : parsed)
		if (component == "..") throw std::runtime_error("resource path contains traversal: " + path);
}

std::string LowerExtension(const fs::path& path)
{
	std::string extension = path.extension().string();
	std::transform(extension.begin(), extension.end(), extension.begin(), [](unsigned char character) {
		return static_cast<char>(std::tolower(character));
	});
	return extension;
}

std::string HashBytes(const std::uint8_t* data, std::size_t size)
{
	SHA256 algorithm;
	HL_SHA256_CTX context{};
	algorithm.SHA256_Init(&context);
	while (size != 0)
	{
		const auto chunk = static_cast<unsigned>(std::min<std::size_t>(size, 1024 * 1024));
		algorithm.SHA256_Update(&context, data, chunk);
		data += chunk;
		size -= chunk;
	}
	char output[SHA256_DIGEST_STRING_LENGTH]{};
	algorithm.SHA256_End(&context, output);
	return output;
}

void WriteBinaryFile(const fs::path& path, const std::vector<std::uint8_t>& bytes)
{
	std::ofstream output(path, std::ios::binary);
	if (!output) throw std::runtime_error("cannot write file: " + path.string());
	if (!bytes.empty()) output.write(reinterpret_cast<const char*>(bytes.data()), static_cast<std::streamsize>(bytes.size()));
	if (!output) throw std::runtime_error("cannot write file: " + path.string());
}

std::string HashFile(const fs::path& path)
{
	std::ifstream input(path, std::ios::binary);
	if (!input) throw std::runtime_error("cannot read file: " + path.string());
	SHA256 algorithm;
	HL_SHA256_CTX context{};
	algorithm.SHA256_Init(&context);
	std::array<char, 64 * 1024> buffer{};
	while (input.read(buffer.data(), buffer.size()) || input.gcount() > 0)
		algorithm.SHA256_Update(&context, reinterpret_cast<const unsigned char*>(buffer.data()), static_cast<unsigned>(input.gcount()));
	if (!input.eof()) throw std::runtime_error("cannot read file: " + path.string());
	char output[SHA256_DIGEST_STRING_LENGTH]{};
	algorithm.SHA256_End(&context, output);
	return output;
}

int LuaBytecodeWriter(lua_State*, const void* data, std::size_t size, void* output)
{
	auto& bytes = *static_cast<std::vector<std::uint8_t>*>(output);
	const auto* first = static_cast<const std::uint8_t*>(data);
	bytes.insert(bytes.end(), first, first + size);
	return 0;
}

std::vector<std::uint8_t> CompileLua(const fs::path& source)
{
	lua_State* lua = luaL_newstate();
	if (!lua) throw std::runtime_error("cannot create Lua compiler state");
	if (luaL_loadfilex(lua, source.string().c_str(), nullptr) != LUA_OK)
	{
		const char* message = lua_tostring(lua, -1);
		const std::string error = message ? message : "unknown Lua compile error";
		lua_close(lua);
		throw std::runtime_error(error);
	}
	std::vector<std::uint8_t> bytes;
	const int result = lua_dump(lua, LuaBytecodeWriter, &bytes, 1);
	lua_close(lua);
	if (result != 0) throw std::runtime_error("cannot generate stripped Lua bytecode");
	return bytes;
}

std::vector<std::uint8_t> CompileSquirrel(const fs::path& source)
{
	Sqrat::SqratVM vm(1024, 0);
	sq_enabledebuginfo(vm.GetVM(), SQFalse);
	Sqrat::string error;
	if (!vm.GetScript().CompileFile(source.string(), error)) throw std::runtime_error(error);
	const std::string bytecode = vm.GetScript().SaveBytecode();
	return std::vector<std::uint8_t>(bytecode.begin(), bytecode.end());
}

std::pair<fs::path, script::RuntimeLanguage> CompiledPath(const fs::path& relative, const std::string& extension)
{
	fs::path result = relative;
	if (extension == ".lua") { result.replace_extension(".luac"); return {result, script::RuntimeLanguage::Lua}; }
	result.replace_extension(".cnut");
	return {result, script::RuntimeLanguage::Squirrel};
}

std::string Timestamp()
{
	const auto now = std::chrono::system_clock::now();
	const auto time = std::chrono::system_clock::to_time_t(now);
	std::tm utc{};
	gmtime_s(&utc, &time);
	std::ostringstream output;
	output << std::put_time(&utc, "%Y-%m-%dT%H:%M:%SZ");
	return output.str();
}

void AddToArchive(zipFile archive, const fs::path& root, const FileMetadata& metadata)
{
	const fs::path path = root / fs::path(metadata.path);
	std::ifstream input(path, std::ios::binary);
	if (!input) throw std::runtime_error("cannot stage resource file: " + path.string());
	zip_fileinfo information{};
	if (zipOpenNewFileInZip(archive, metadata.path.c_str(), &information, nullptr, 0, nullptr, 0, nullptr, Z_DEFLATED, 9) != ZIP_OK)
		throw std::runtime_error("cannot add file to resource archive: " + metadata.path);
	std::array<char, 64 * 1024> buffer{};
	while (input.read(buffer.data(), buffer.size()) || input.gcount() > 0)
	{
		if (zipWriteInFileInZip(archive, buffer.data(), static_cast<unsigned>(input.gcount())) != ZIP_OK)
		{
			zipCloseFileInZip(archive);
			throw std::runtime_error("cannot compress resource file: " + metadata.path);
		}
	}
	if (zipCloseFileInZip(archive) != ZIP_OK) throw std::runtime_error("cannot close resource file: " + metadata.path);
}

std::vector<std::uint8_t> ReadArchiveEntry(unzFile archive, const FileMetadata& metadata)
{
	if (unzLocateFile(archive, metadata.path.c_str(), 0) != UNZ_OK)
		throw std::runtime_error("script is missing from resource archive: " + metadata.path);
	unz_file_info information{};
	if (unzGetCurrentFileInfo(archive, &information, nullptr, 0, nullptr, 0, nullptr, 0) != UNZ_OK)
		throw std::runtime_error("cannot read resource entry metadata: " + metadata.path);
	if (information.uncompressed_size != metadata.size)
		throw std::runtime_error("resource entry size does not match manifest: " + metadata.path);
	if (metadata.size > kMaxCompiledScriptSize)
		throw std::runtime_error("resource script exceeds the size limit: " + metadata.path);
	if (unzOpenCurrentFile(archive) != UNZ_OK) throw std::runtime_error("cannot open resource entry: " + metadata.path);
	std::vector<std::uint8_t> bytes(information.uncompressed_size);
	std::size_t offset = 0;
	while (offset < bytes.size())
	{
		const int count = unzReadCurrentFile(archive, bytes.data() + offset, static_cast<unsigned>(bytes.size() - offset));
		if (count < 0) { unzCloseCurrentFile(archive); throw std::runtime_error("cannot read resource entry: " + metadata.path); }
		if (count == 0) break;
		offset += static_cast<std::size_t>(count);
	}
	unzCloseCurrentFile(archive);
	if (offset != bytes.size()) throw std::runtime_error("resource entry is truncated: " + metadata.path);
	return bytes;
}

} // namespace

PackResult PackClientScripts(
	const std::string& source_directory,
	const std::string& output_directory,
	const std::vector<std::string>& scripts,
	const std::string& version)
{
	const fs::path source = fs::absolute(source_directory).lexically_normal();
	const fs::path output = fs::absolute(output_directory).lexically_normal();
	if (!fs::is_directory(source)) throw std::runtime_error("client script directory does not exist: " + source.string());
	if (scripts.empty()) throw std::runtime_error("client resource has no configured scripts");
	if (scripts.size() > kMaxClientScripts) throw std::runtime_error("client resource contains too many scripts");
	fs::create_directories(output);

	const fs::path staging = output / ".staging-client-scripts";
	if (fs::exists(staging)) fs::remove_all(staging);
	fs::create_directories(staging);
	ScopedDirectory staging_guard(staging);

	std::vector<FileMetadata> files;
	std::vector<std::string> compiled_scripts;
	std::unordered_set<std::string> compiled_names;
	std::optional<script::RuntimeLanguage> resource_language;
	for (const std::string& configured : scripts)
	{
		ValidateRelativePath(configured);
		const fs::path relative = fs::path(configured).lexically_normal();
		const fs::path file = (source / relative).lexically_normal();
		if (!fs::is_regular_file(file)) throw std::runtime_error("configured client script does not exist: " + file.string());
		if (fs::file_size(file) > kMaxCompiledScriptSize) throw std::runtime_error("client script exceeds the size limit: " + file.string());
		const std::string extension = LowerExtension(file);
		if (extension != ".lua" && extension != ".nut")
			throw std::runtime_error("unsupported client script extension: " + extension);
		const auto [compiled_relative, language] = CompiledPath(relative, extension);
		if (resource_language && *resource_language != language)
			throw std::runtime_error("client script resource mixes Squirrel and Lua files");
		resource_language = language;
		const fs::path staged_file = staging / compiled_relative;
		fs::create_directories(staged_file.parent_path());
		const auto bytecode = language == script::RuntimeLanguage::Lua ? CompileLua(file) : CompileSquirrel(file);
		if (bytecode.size() > kMaxCompiledScriptSize) throw std::runtime_error("compiled client script exceeds the size limit: " + file.string());
		WriteBinaryFile(staged_file, bytecode);
		const std::string compiled_name = Normalize(compiled_relative);
		if (!compiled_names.insert(Lower(compiled_name)).second)
			throw std::runtime_error("duplicate client script in resource: " + compiled_name);
		files.push_back({compiled_name, static_cast<std::uint64_t>(bytecode.size()), HashBytes(bytecode.data(), bytecode.size())});
		compiled_scripts.push_back(compiled_name);
	}

	const fs::path archive_path = output / "client-scripts.pak";
	ZipWriter archive(archive_path);
	for (const auto& file : files) AddToArchive(archive.Get(), staging, file);
	archive.Close();

	PackResult result;
	result.archive_path = archive_path.string();
	result.archive_size = fs::file_size(archive_path);
	if (result.archive_size > kMaxArchiveSize) throw std::runtime_error("client resource archive exceeds the size limit");
	result.archive_sha256 = HashFile(archive_path);

	Json manifest;
	manifest["name"] = "client-scripts";
	manifest["version"] = version;
	manifest["format"] = "zip";
	manifest["archive"] = {{"path", archive_path.filename().string()}, {"size", result.archive_size}, {"sha256", result.archive_sha256}};
	manifest["files"] = Json::array();
	for (const auto& file : files)
		manifest["files"].push_back({{"path", file.path}, {"size", file.size}, {"sha256", file.sha256}, {"cache", true}});
	manifest["scripts"] = compiled_scripts;
	manifest["created_utc"] = Timestamp();
	manifest["signature"] = nullptr;

	const fs::path manifest_path = output / "client-scripts.manifest.json";
	std::ofstream manifest_file(manifest_path);
	if (!manifest_file) throw std::runtime_error("cannot write client resource manifest: " + manifest_path.string());
	manifest_file << manifest.dump(2);
	if (!manifest_file) throw std::runtime_error("cannot write client resource manifest: " + manifest_path.string());
	result.manifest_path = manifest_path.string();
	return result;
}

LoadedResource LoadClientResource(const std::string& manifest_path)
{
	const fs::path path = fs::absolute(manifest_path).lexically_normal();
	if (!fs::is_regular_file(path)) throw std::runtime_error("client resource manifest does not exist: " + path.string());
	if (fs::file_size(path) > kMaxManifestSize) throw std::runtime_error("client resource manifest exceeds the size limit");
	std::ifstream input(path);
	if (!input) throw std::runtime_error("cannot read client resource manifest: " + path.string());
	Json manifest;
	input >> manifest;
	if (manifest.at("format").get<std::string>() != "zip") throw std::runtime_error("unsupported client resource format");
	const auto scriptNames = manifest.at("scripts");
	if (!scriptNames.is_array() || scriptNames.empty()) throw std::runtime_error("client resource has no scripts");
	if (scriptNames.size() > kMaxClientScripts) throw std::runtime_error("client resource contains too many scripts");

	const auto& archive = manifest.at("archive");
	const std::string archive_name = archive.at("path").get<std::string>();
	ValidateRelativePath(archive_name);
	const fs::path archive_path = path.parent_path() / fs::path(archive_name).filename();
	if (!fs::is_regular_file(archive_path)) throw std::runtime_error("client resource archive does not exist: " + archive_path.string());
	const std::uint64_t expected_archive_size = archive.at("size").get<std::uint64_t>();
	if (expected_archive_size > kMaxArchiveSize) throw std::runtime_error("client resource archive exceeds the size limit");
	if (fs::file_size(archive_path) != expected_archive_size) throw std::runtime_error("client resource archive size mismatch");
	if (HashFile(archive_path) != archive.at("sha256").get<std::string>()) throw std::runtime_error("client resource archive SHA-256 mismatch");

	ZipReader reader(archive_path);
	LoadedResource result;
	std::optional<script::RuntimeLanguage> resource_language;
	std::unordered_set<std::string> loaded_names;
	for (const auto& scriptName : scriptNames)
	{
		const std::string name = scriptName.get<std::string>();
		ValidateRelativePath(name);
		if (!loaded_names.insert(Lower(name)).second) throw std::runtime_error("duplicate script in client resource: " + name);

		FileMetadata metadata;
		for (const auto& file : manifest.at("files"))
		{
			if (file.at("path").get<std::string>() == name)
			{
				metadata = {name, file.at("size").get<std::uint64_t>(), file.at("sha256").get<std::string>()};
				break;
			}
		}
		if (metadata.path.empty()) throw std::runtime_error("script is missing from client resource manifest: " + name);

		auto bytecode = ReadArchiveEntry(reader.Get(), metadata);
		if (HashBytes(bytecode.data(), bytecode.size()) != metadata.sha256)
			throw std::runtime_error("client resource script SHA-256 mismatch: " + name);
		const std::string extension = LowerExtension(name);
		if (extension != ".luac" && extension != ".cnut")
			throw std::runtime_error("unsupported client resource script type: " + extension);
		const script::RuntimeLanguage language = extension == ".luac"
			? script::RuntimeLanguage::Lua
			: script::RuntimeLanguage::Squirrel;
		if (resource_language && *resource_language != language)
			throw std::runtime_error("client resource mixes Squirrel and Lua bytecode");
		resource_language = language;
		result.scripts.push_back({name, std::move(bytecode), language});
	}
	return result;
}

} // namespace g1o::resource
