target("G1O.Master")
    set_kind("binary")
    set_default(false)
    set_basename("GO_Master")
    add_files("*.cpp")
    add_includedirs(".")
    add_deps("G1O.Shared")
    add_defines("_CONSOLE", "_CRT_SECURE_NO_WARNINGS")
    add_syslinks("ws2_32", "winmm")

    local master_server_port = tonumber(get_config("master_server_port") or "1200") or 1200
    if master_server_port < 1 or master_server_port > 65535 or master_server_port % 1 ~= 0 then
        master_server_port = 1200
    end
    add_defines(string.format("G1O_MASTER_SERVER_PORT=%d", master_server_port))
