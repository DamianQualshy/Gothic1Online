target("G1O.Server")
    set_kind("binary")
    set_basename("GO_Server")
    set_prefixdir("g1o-server", {bindir = "."})
    add_installfiles("ReadMe.txt", {prefixdir = "."})
    add_installfiles("resources/config.xml")
    add_installfiles("resources/README.txt", {prefixdir = "resources"})
    add_installfiles("resources/squirrel-scripts/scripts.xml", {prefixdir = "resources/squirrel-scripts"})
    add_installfiles("resources/squirrel-scripts/*.nut", {prefixdir = "resources/squirrel-scripts"})
    add_installfiles("resources/lua-scripts/scripts.xml", {prefixdir = "resources/lua-scripts"})
    add_installfiles("resources/lua-scripts/*.lua", {prefixdir = "resources/lua-scripts"})
    add_files("**.cpp")
    add_includedirs(".")
    add_deps("G1O.Shared")
    add_packages("cpp-httplib", "nlohmann_json")
    add_packages("fmt", "spdlog", {cxxflags = {}})
    add_defines(
        "_CONSOLE",
        "_CRT_SECURE_NO_WARNINGS",
        "SPDLOG_FMT_EXTERNAL",
        "SPDLOG_ACTIVE_LEVEL=SPDLOG_LEVEL_TRACE")
    add_syslinks("ws2_32", "winmm")

    after_install(function (target)
        os.mkdir(path.join(target:installdir(), "resources", "download"))
    end)

    local master_server_endpoint = get_config("master_server_endpoint")
    if master_server_endpoint and #master_server_endpoint > 0 then
        master_server_endpoint = master_server_endpoint:gsub("\\", "\\\\"):gsub("\"", "\\\"")
        add_defines(string.format("MASTER_SERVER_ENDPOINT=\"%s\"", master_server_endpoint))
    end
