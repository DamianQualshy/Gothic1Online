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

option("master_server_address")
    set_showmenu(true)
    set_description("Host or IP used by game servers to register with the master server")
    set_default("127.0.0.1")
option_end()

option("master_server_port")
    set_showmenu(true)
    set_description("RakNet port used for game-server registration")
    set_default("1200")
option_end()

option("master_server_list_url")
    set_showmenu(true)
    set_description("HTTP(S) URL used by the launcher to download the server list")
    set_default("http://localhost/g1o/list.txt")
option_end()

option("launcher_version_url")
    set_showmenu(true)
    set_description("HTTP(S) URL used by the launcher to check for updates")
    set_default("http://localhost/g1o/version.txt")
option_end()

if is_plat("windows") then
    add_defines("WIN32")
    add_cxflags("/source-charset:utf-8", "/execution-charset:.1250", {tools = "cl"})
    add_requires("qt5widgets")
end

includes("Shared")
includes("g1o-client")
includes("g1o-server")
includes("g1o-master")
