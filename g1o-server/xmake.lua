target("G1O.Server")
    set_kind("binary")
    set_basename("GO_Server")
    set_prefixdir("g1o-server", {bindir = "."})
    add_installfiles("ReadMe.txt", {prefixdir = "."})
    add_installfiles("resources/config.xml")
    add_installfiles("resources/README.txt", {prefixdir = "resources"})
    add_installfiles("resources/squirrel-scripts/scripts.xml", {prefixdir = "resources/squirrel-scripts"})
    add_installfiles("resources/squirrel-scripts/shared/*.nut", {prefixdir = "resources/squirrel-scripts/shared"})
    add_installfiles("resources/squirrel-scripts/server/*.nut", {prefixdir = "resources/squirrel-scripts/server"})
    add_installfiles("resources/squirrel-scripts/client/*.nut", {prefixdir = "resources/squirrel-scripts/client"})
    add_installfiles("resources/lua-scripts/scripts.xml", {prefixdir = "resources/lua-scripts"})
    add_installfiles("resources/lua-scripts/shared/*.lua", {prefixdir = "resources/lua-scripts/shared"})
    add_installfiles("resources/lua-scripts/server/*.lua", {prefixdir = "resources/lua-scripts/server"})
    add_installfiles("resources/lua-scripts/client/*.lua", {prefixdir = "resources/lua-scripts/client"})
    add_files("**.cpp")
    add_includedirs(".")
    add_deps("G1O.Shared")
    add_defines("_CONSOLE", "_CRT_SECURE_NO_WARNINGS")
    add_syslinks("ws2_32", "winmm")

    after_install(function (target)
        os.mkdir(path.join(target:installdir(), "resources", "download"))
        os.mkdir(path.join(target:installdir(), "resources", "client-resources"))
    end)

    local master_server_address = get_config("master_server_address")
    if master_server_address and #master_server_address > 0 then
        master_server_address = master_server_address:gsub("\\", "\\\\"):gsub("\"", "\\\"")
        add_defines(string.format("G1O_MASTER_SERVER_ADDRESS=\"%s\"", master_server_address))
    end

    local master_server_port = tonumber(get_config("master_server_port") or "1200") or 1200
    if master_server_port < 1 or master_server_port > 65535 or master_server_port % 1 ~= 0 then
        master_server_port = 1200
    end
    add_defines(string.format("G1O_MASTER_SERVER_PORT=%d", master_server_port))
