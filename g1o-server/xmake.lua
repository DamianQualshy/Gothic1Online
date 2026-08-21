target("G1O.Server")
    set_kind("binary")
    set_basename("GO_Server")
    set_prefixdir("g1o-server", {bindir = "."})
    add_installfiles("ReadMe.txt", {prefixdir = "."})
    add_installfiles("resources/config.xml")
    add_installfiles("resources/README.txt", {prefixdir = "resources"})
    add_installfiles("resources/server-scripts/*.gm", {prefixdir = "resources/server-scripts"})
    add_installfiles("resources/client-scripts/*.gm", {prefixdir = "resources/client-scripts"})
    add_files("**.cpp")
    add_includedirs(".")
    add_deps("G1O.Shared")
    add_defines("_CONSOLE", "_CRT_SECURE_NO_WARNINGS")
    add_syslinks("ws2_32", "winmm")

    after_install(function (target)
        os.mkdir(path.join(target:installdir(), "resources", "download"))
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
