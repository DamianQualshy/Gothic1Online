set_project("Gothic1Online")

local g1o_version = "0.5.0"
set_version(g1o_version)
add_defines(string.format("G1O_VERSION=\"%s\"", g1o_version))

set_languages("c++20")
set_allowedplats("windows")
set_allowedarchs("windows|x86")
set_defaultarchs("windows|x86")
set_runtimes("MT")
set_rundir("$(builddir)/bin")
set_prefixdir("/", {bindir = "."})
add_moduledirs("xmake/modules")

add_rules("mode.debug", "mode.release", "mode.releasedbg")

add_requires("fmt 11.0.2", {configs = {header_only = true}})
add_requires("cpp-httplib 0.22.0", {configs = {ssl = true}})
add_requires("lua 5.4.7", "sol2 3.3.*")
add_requires("libsodium 1.0.*", "nlohmann_json 3.12.*")
add_requires("polyhook2", "asmjit")
add_requires("spdlog 1.15.1", {configs = {fmt_external = true, header_only = true}})

option("master_server_endpoint")
    set_showmenu(true)
    set_description("HTTP endpoint used by game servers to register and by the launcher to retrieve the server list")
    set_default("")
option_end()

option("launcher_version_url")
    set_showmenu(true)
    set_description("HTTP(S) URL used by the launcher to check for updates")
    set_default("http://localhost:8080/g1o/version.txt")
option_end()

if is_plat("windows") then
    add_defines("WIN32", "FMT_UNICODE=0")
    add_cxflags("/source-charset:utf-8", "/execution-charset:.1250", {tools = "cl"})
    add_requires("qt5widgets")
end

includes("Shared")
includes("g1o-client")
includes("g1o-server")
